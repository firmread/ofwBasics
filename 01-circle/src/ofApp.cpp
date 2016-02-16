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
    ofDrawCircle(ofGetWindowSize()/2, 200);
}


int main(){
    ofSetupOpenGL(1024,768,OF_WINDOW);
    ofRunApp(new ofApp());
}

