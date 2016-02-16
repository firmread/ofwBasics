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
    
    // move to the horizontal window center, down 75
    ofTranslate(ofGetWindowSize().x/2, 75);
    ofSetColor(ofFloatColor(1,0,0));
    ofDrawCircle(ofPoint(0), 70);
    
    // move down 150 pixels
    ofTranslate(0, 150);
    ofSetColor(ofFloatColor(1,1,0));
    ofDrawCircle(ofPoint(0), 70);
    
    // move down another 150 pixels
    ofTranslate(0, 150);
    ofSetColor(ofFloatColor(0,1,0));
    ofDrawCircle(ofPoint(0), 70);
}


int main(){
    ofSetupOpenGL(1024,768,OF_WINDOW);
    ofRunApp(new ofApp());
}

