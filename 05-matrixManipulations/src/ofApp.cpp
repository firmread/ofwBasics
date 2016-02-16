#include "ofMain.h"

class ofApp : public ofBaseApp{
public:
    void setup();
    void draw();
};


void ofApp::setup(){
    ofSetCircleResolution(100);
}

void ofApp::draw(){
    ofClear(0);
    ofTranslate(ofGetWindowSize()/2);
    
    int numCircles = 16;
    float radius = ofGetHeight()/2 - 30;
    
    ofNoFill();
    ofSetLineWidth(2.5);
    for (int i = 0; i<numCircles; ++i){
        float rel = i / (float)numCircles;
        float angle = rel * PI * 2;
        ofPoint offset(cos(angle), sin(angle));
        
        ofPushMatrix();
        ofTranslate(offset*radius);
        ofSetColor(ofColor::fromHsb(rel*255, 255, 255));
        ofDrawCircle(ofPoint(0), 30);
        ofPopMatrix();
    }
    
    ofSetColor(ofFloatColor(1,1,1));
    ofFill();
    ofDrawCircle(ofPoint(0), 15);
}


int main(){
    ofSetupOpenGL(1024,768,OF_WINDOW);
    ofRunApp(new ofApp());
}

