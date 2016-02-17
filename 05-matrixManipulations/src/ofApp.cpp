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
    // move to the window center
    ofTranslate(ofGetWindowSize()/2);
    
    int numCircles = 32;
    float radius = ofGetHeight()/2 - 30;
    
    for (int i = 0; i< numCircles; ++i) {
        float rel = i / (float)numCircles;
        float angle = rel * TWO_PI;
        //cos & sin takes radians
        ofPoint offset(cos(angle),sin(angle));
        
        // preserve the matrix
        ofPushMatrix();
        // move to the correct position
        ofTranslate(offset*radius);
        // rotate by current angle ofRotate takes degree!
        ofRotate(angle * RAD_TO_DEG);
        // non-uniform scale
        ofScale(8, 0.25f);
        // set the color using HSV color
        ofSetColor(ofColor::fromHsb(rel*255, 255, 255));
        // draw a circle based on the current matrix
        ofDrawCircle(ofPoint(0), 20);
        // restore the matrix
        ofPopMatrix();
    }
}


int main(){
    ofSetupOpenGL(1024,768,OF_WINDOW);
    ofRunApp(new ofApp());
}

