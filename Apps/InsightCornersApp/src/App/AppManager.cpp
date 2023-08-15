//
//  AppManager.cpp
//
//  Created by Nicole Yi Messier 
//

#include "AppManager.h"

using namespace Insights;

void AppManager::setup()
{
	//! general setup
	ofSetFrameRate(60);
	ofSetVerticalSync(true);
	ofEnableAlphaBlending();
	// ofDisableArbTex();
	ofBackground(0);
}


void AppManager::start()
{

}

void AppManager::setupManagers()
{
	//RUI_SET_CALLBACK( &AppManager::onRuiUpdate );

}


void AppManager::update(float dt)
{

}


void AppManager::draw()
{

}

#pragma mark CONTENT

void AppManager::setContentState(ContentType state, bool from_interactive)
{

}

void AppManager::resetContentState()
{

}



#pragma mark STATE MGMT

void AppManager::setRenderState(RenderStates render_state)
{


	// ofLogNotice( "AppManager" ) << "Set render state to " << getRenderState();
}


#pragma mark UTILS


void AppManager::onKeyPressed(ofKeyEventArgs& arg)
{
	switch (arg.key) {


	default:
		break;
	}
}



