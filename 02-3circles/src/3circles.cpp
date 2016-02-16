#include "ofMain.h"

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
};


void ofApp::setup(){
    ofSetCircleResolution(100);
}

void ofApp::update(){

}

void ofApp::draw(){
    ofClear(0);
    ofPoint center = ofGetWindowSize()/2;
    float r = 100;
    
    ofSetColor(ofFloatColor(1,0,0));
    ofDrawCircle(center + ofPoint(-r,r), r);
    
    ofSetColor(ofFloatColor(0,1,0));
    ofDrawCircle(center + ofPoint(r,r), r);
    
    ofSetColor(ofFloatColor(0,0,1));
    ofDrawCircle(center + ofPoint(0,-0.73*r), r);
    
}


int main(){
    ofSetupOpenGL(1024,768,OF_WINDOW);
    ofRunApp(new ofApp());
}

