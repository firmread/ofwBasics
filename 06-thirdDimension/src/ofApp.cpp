#include "ofMain.h"

class ofApp : public ofBaseApp{
public:
    void setup();
    void draw();
};


void ofApp::setup(){
    
}

void ofApp::draw(){
    ofClear(0);
    ofTranslate(ofGetWindowSize()/2);
    ofDrawBox(ofPoint(0), 200);
}


int main(){
    ofSetupOpenGL(1024,768,OF_WINDOW);
    ofRunApp(new ofApp());
}

