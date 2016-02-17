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
    
    ofCamera cam;
    cam.setPosition(ofPoint(300));
    cam.lookAt(ofPoint(0));
    
    cam.begin();
    ofDrawBox(ofPoint(0), 200);
    cam.end();
}


int main(){
    ofSetupOpenGL(1024,768,OF_WINDOW);
    ofRunApp(new ofApp());
}

