#include "ofMain.h"

class ofApp : public ofBaseApp{
public:
    void setup();
    void draw();
    
    ofEasyCam cam;
//    ofLight light;
};


void ofApp::setup(){
//    ofEnableLighting();
    ofEnableDepthTest();
    
    cam.setPosition(ofPoint(50,120,250));
    cam.setAutoDistance(false);
    cam.lookAt(ofPoint(0,120,0));
//     setcolor + light is broken, check https://github.com/openframeworks/openFrameworks/issues/4684
//    light.setup();
//    light.enable();
//    light.setPosition(0, 500, 1000);
}

void ofApp::draw(){
    ofClear(0);
    
    cam.begin();
    
    int numSpheres = 64;
    float maxAngle = PI*7;
    float spiralRadius = 100;
    float height = 200;
    
    for (int i = 0; i<numSpheres; ++i) {
        float rel = i / (float)numSpheres;
        float angle = rel * maxAngle;
        float y = rel * height;
        float r = rel * spiralRadius;
        ofPoint offset(r*cos(angle), y, r*sin(angle));
        ofPushMatrix();
        ofTranslate(offset);
        ofSetColor(ofColor::fromHsb(rel*255, 255, 255));
        ofDrawSphere(ofPoint(0), 5);
        ofPopMatrix();
    }
    
    cam.end();
    
}


int main(){
    ofSetupOpenGL(1024,768,OF_WINDOW);
    ofRunApp(new ofApp());
}

