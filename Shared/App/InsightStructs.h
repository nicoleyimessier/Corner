
//
//  Created by Nicole Yi Messier 
//

#pragma once

#include "ofMain.h"
#include "ofxAnimatableFloat.h"

namespace Insights {

	enum class RenderStates { SETUP, EXPORT, VIZ, NUM_RENDER_STATES };

	// --- CONTENT --- //
	enum class ContentType {
		NUM_CONTENT_TYPES
	};


	inline ContentType getContentType(const string& content)
	{
		/*
			if( content == "places_stream" )
				return ContentType::PLACES_STREAM;
		 */
		ofLogError("PlaylistManager::getContentType") << content << " is not a represented content type.";

		return ContentType::NUM_CONTENT_TYPES;
	}

	inline string getContentType(ContentType content)
	{
		switch (content) {
		default:
			break;
		}

		return {};
	}

	enum class KineticTypeStyles { BLOCK, SCALE, VSS, MASK, NUM_KINETIC_TYPES };

	inline KineticTypeStyles getTypeStyle(const string& style)
	{
		if (style == "Block")
			return KineticTypeStyles::BLOCK;
		else if (style == "Slice Transition")
			return KineticTypeStyles::VSS;
		else if (style == "Scale")
			return KineticTypeStyles::SCALE;
		else if (style == "Mask")
			return KineticTypeStyles::MASK;

		ofLogError("PlaylistManager::getTypeStyle") << style << " is not a represented Kinetic type style.";

		return KineticTypeStyles::NUM_KINETIC_TYPES;
	}

}