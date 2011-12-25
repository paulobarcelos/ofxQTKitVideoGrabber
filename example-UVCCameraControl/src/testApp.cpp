/**
 *  testApp.cpp
 *
 *	ofxQTKitveVideoGrabber example project
 *
 *  Created by James George ( http://www.jamesgeorge.org ) on 6/15/10.
 *  In collaboration with Flightphase ( http://www.flightphase.com )
 *
 *  Copyright (c) 2011
 *
 *	This code is distributed under an MIT license you can use it
 *	for whatever you'd like, if you make improvements consider sharing
 *	them back
 */

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){	 
	ofSetFrameRate(60);
	
	camWidth 		= CAM_WIDTH;	// try to grab at this size. 
	camHeight 		= CAM_HEIGHT;
	
	vidGrabber.listDevices();
	vidGrabber.setDeviceID(0);

	vidGrabber.initGrabber(camWidth, camHeight);
	
}

//--------------------------------------------------------------
void testApp::update(){
	
	vidGrabber.update();
	
}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetColor(255);
	vidGrabber.draw(0,0);
	videoTexture.draw(camWidth,0,camWidth,camHeight);
}


//--------------------------------------------------------------
void testApp::keyPressed(int key){ 
vidGrabber.setDeviceID(0);
}


//--------------------------------------------------------------
void testApp::keyReleased(int key){ 
	
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}
