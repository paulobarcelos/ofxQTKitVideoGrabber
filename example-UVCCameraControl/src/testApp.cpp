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
	ofBackground(0);
	
	camWidth 		= CAM_WIDTH;	// try to grab at this size. 
	camHeight 		= CAM_HEIGHT;
	
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
	
	stringstream msg;
	msg << "Press (f) to toogle auto focus.";
	msg << "\nAuto focus: " << vidGrabber.getAutoFocus();
	msg << "\nPress (g/h) to icrease/decarease absolute focus.";
	msg << "\nAbsolute focus: " << vidGrabber.getAbsoluteFocus();
	
	msg << "\n\nPress (e) to toogle auto exposure.";
	msg << "\nAuto exposure: " << vidGrabber.getAutoExposure();
	msg << "\nPress (r/t) to icrease/decarease exposure time.";
	msg << "\nExposure: " << vidGrabber.getExposure();
	
	msg << "\n\nPress (b) to toogle auto white balance.";
	msg << "\nAuto white balance: " << vidGrabber.getAutoWhiteBalance();
	msg << "\nPress (n/m) to icrease/decarease white balance.";
	msg << "\nWhite balance: " << vidGrabber.getWhiteBalance();
	
	ofDrawBitmapString(msg.str(), camWidth+20, 20);
}


//--------------------------------------------------------------
void testApp::keyPressed(int key){
	switch (key) {
		// Focus
		case 'f':
			vidGrabber.setAutoFocus(!vidGrabber.getAutoFocus());
			break;			
		case 'g':
			vidGrabber.setAbsoluteFocus(vidGrabber.getAbsoluteFocus()-0.01f);
			break;
		case 'h':
			vidGrabber.setAbsoluteFocus(vidGrabber.getAbsoluteFocus()+0.01f);
			break;
		// Exposure
		case 'e':
			vidGrabber.setAutoExposure(!vidGrabber.getAutoExposure());
			break;			
		case 'r':
			vidGrabber.setExposure(vidGrabber.getExposure()-0.01f);
			break;
		case 't':
			vidGrabber.setExposure(vidGrabber.getExposure()+0.01f);
			break;
		// White Balance
		case 'b':
			vidGrabber.setAutoWhiteBalance(!vidGrabber.getAutoWhiteBalance());
			break;			
		case 'n':
			vidGrabber.setWhiteBalance(vidGrabber.getWhiteBalance()-0.01f);
			break;
		case 'm':
			vidGrabber.setWhiteBalance(vidGrabber.getWhiteBalance()+0.01f);
			break;
	}
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
