#include "ofMain.h"

class ofApp : public ofBaseApp{
public:
    void setup();
    void draw();
    
    ofEasyCam cam;
    ofLight light;
};


void ofApp::setup(){
    ofEnableLighting();
    ofEnableDepthTest();
    
    cam.setPosition(ofPoint(300));
    cam.setAutoDistance(false);
    cam.lookAt(ofPoint(0));

    light.setup();
    light.enable();
    light.setPosition(0, 500, 1000);
}

void ofApp::draw(){
    ofClear(0);
    
    cam.begin();
    ofDrawSphere(ofPoint(0,0,0), 200);
    cam.end();
}


int main(){
    ofSetupOpenGL(1024,768,OF_WINDOW);
    ofRunApp(new ofApp());
}

