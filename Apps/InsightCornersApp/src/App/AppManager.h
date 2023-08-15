//
//  AppManager.h
//
//  Created by Nicole Yi Messier 
//

#pragma once

#include "AppSettings.h"
#include "ofMain.h"
#include "ofxRemoteUIServer.h"
#include "ofxTimeMeasurements.h"

#define CONFIGS_DIRECTORY "configs"

class AppManager {
  public:
    static AppManager &get()
    {
        static AppManager sInstance;
        return sInstance;
    }

    ~AppManager() = default;

    void setup();
    void start();
    void setupManagers();
    void update( float dt );
    void draw();

    // --- STATES --- //
    void setRenderState( Insights::RenderStates render_state );

    // --- KEY EVENTS --- //
    void onKeyPressed( ofKeyEventArgs &arg );

  private:
    AppManager() = default;

    // --- STATES --- //
    Insights::RenderStates render_state;


    // --- CONTENT STATES --- //
    void              setContentState( Insights::ContentType state , bool from_interactive = false);
    void              resetContentState();
    Insights::ContentType content_state;
    Insights::ContentType content_next;


    // --- LISTENERS --- //
    /*
    void        onContentStateFinished( ofxNotificationCenter::Notification &n );
    static void onRuiUpdate( RemoteUIServerCallBackArg args );
    void        onCrestronMsg( ofxNotificationCenter::Notification &n );
    void        onFinishedFadeOut( ofxAnimatable::AnimationEvent &args );
    */


    // --- KINETIC TYPE --- //

    // testing mapping
    bool test_map = false;
    void testMapUpdate();
    void drawMapUpdate();
    void clearFbos(); 
    bool isGlitchOrDesignTemplate(); 
    
};


