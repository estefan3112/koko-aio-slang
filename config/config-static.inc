/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
//
//		The following lines are NOT runtime shader parameters and are mandatory.
//		If you know what you are doing, edit them to change the shader behaviour.
//
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

// STATIC FEATURES ENABLE/DISABLE

// In case you're running an old pRetrtoarch version (pre 1.16), please comment this (prepend: // )
#define _HAS_ROTATION_UNIFORM


// BEZEL STATIC CONFIG ////////////////////////////////////////////////////////

	//The following defines the monitor frame resolution in textures/monitor_body_[curved/straight].png
	//and are used to calculate the sampling lod.
	//Change if you change the texture resolution or
	//you can comment it to let the shader calculates them at runtime (heavier).
#define BEZEL_RES vec2(2927, 2178)

	//The following can slightly correct bezel aspect
	//eg: #define BEZEL_ASPECT_CORRECTION (1.0 - 0.004) will make it shorter.
#define BEZEL_ASPECT_CORRECTION 1.0 //(1- ((SERVICE1-0.5) *0.01))  //(1.0 - 0.004)

	//This is used to skip calculations in the reflection blur code.
	//set it to minimum value that allows you to see reflection entirely
#define BEZEL_REFL_SKIP_SIZE 0.08

	//This is the blank area (EXCLUDING any potential shadows) surrounding the bezel frame.
	//Supposing a centered bezel:
	//  BEZEL_FRAME_SURROUND_MARGIN = (left margin in px*2) / bezel_texture_size width in px.
	//It is used to skip drawing bg/fg or ambient light over the tube.
	//set it to the minimum value which allows you to see ambient lights and background image around the frame.
#define BEZEL_FRAME_SURROUND_MARGIN 0.06

	//to speedup things, bezel render logic can be completely skipped in the inner tube, if we
	//already know it is completely transparent.
	//Set the following to the maximum value that allow you to see 
	//bezel borders and, if present in the source bezel texture, inner content/border shades
#define BEZEL_TUBE_BLANK_SIZE 0.88

	//In the second reflection pass, the coordinates are zoomedout by the
	//BEZEL_REFL_ZOOMOUT_ROOM so that the image is mirrored-repeated by retroarch.
	//they are adjusted by an inverse amount in final pass to align them
	//lowering this value makes more room for reflections, but this steals
	//pixels for reflection resolution, so make it higher as possible as
	//long as you can see the reflections on the reflective area without
	//them blanking or repeating.
	//Modifying it require you to tweak BEZEL_REFL_CORNER_BLANK_SIZE too.
#define BEZEL_REFL_ZOOMOUT_ROOM 0.8


	// Define the size and the smoothness of the rectangle 
	// in the bezel corners that will hide and blur the reflections 
#define BEZEL_REFL_CORNER_BLANK_SIZE  0.095
#define BEZEL_REFL_CORNER_BLANK_SHADE 0.095 // keep it > 0.0


	//When colorizing the bezel via ambient light, it is possible to choose where 
	//the colorization ends. depending on the bezel texture/lut used, the following
	//parameter wil allow to colorize top/bottom and left/right border with the
	//same shade amount.
#define AMBI_OVER_BEZEL_AR_CORRECTION 0.98


	//This is used to fadeout reflection and diffusion strength
	//It alters the start of the gradient
	//Set it roughly to  (tube size / bezel total size)
#define BEZEL_REFL_FADEOUT_START 0.90

	//Values to adapt bezel tilting to content tilting.
	//I'm not sure what they depends on; works fine on standard bezel tho.
#define BEZEL_TILT_MULTIPLIER 1.23
#define BEZEL_TILT_Y_SHIFT 0.32


// AMBIENT LIGHT STATIC CONFIG ##########################################################################################

	// 0.0-1.0: sensitivity to scene change (ambilike stuff), 0.0 changes more
#define AMBI_SCENE_CHG_THRSHLD 0.07  
	// The following will allow to sample at reduced interval
	// The scene change detection logic will take advantage of it
	// So that quick fades will still be treated as scene changes
#define AMBI_AVGLUM_DIVIDER 3

	// The following defines the speed of the color fades 
	// when changing scene. (range 0..1)
	// It is wise to correlate it with avglum_divider
	// try between (1/avglum_divider) and (1/avglum_divider)/3
//#define AMBI_FAST_STEP 0.125
#define AMBI_FAST_STEP 0.25



// GLOW STATIC CONFIG ##########################################################################################

	//Setting the glow/halo sharpness parameter to this
	//will skip the blurring phase and lowers the gpu use
	//Set this to the same value as used for the maximum
	//of IN_GLOW_W/H, HALO_SHARPNESS
#define GLOW_SHARP_MAX 7	        

	//Minumum glow sharpness
	//I set this to allow negative values for glow sharpness
	//that will calc their values from light spread amount
#define MIN_IN_GLOW_SHARP 0.40

	//Setting glow to blur bias parameter to this will skip the glow/blur 
	//mix code and just return the blurred image
	//Set this to the same value as used for the maximum for IN_GLOW_BIAS pragma
#define IN_GLOW_BIAS_MAX 1.0

	//Try to keep blur sizes consistent across input resolutions
#define NEW_SCALEMOD_REF_X 360.0
#define NEW_SCALEMOD_REF_Y 270.0
#define NEW_SCALEMOD_X (global.upscale_passSize.x/(NEW_SCALEMOD_REF_X*2.0) / 2.2)
#define NEW_SCALEMOD_Y (global.upscale_passSize.y/(NEW_SCALEMOD_REF_Y*2.0) / 2.2)

	//Hardcoded radius scale factor used by bloom and halo.
#define BLOOM_AND_HALO_SCALE_FACTOR 360.0

	// AUTOCROP
//which coords holds the autocrop zoom value
#define AUTOCROP_SAMPLING_POINT vec2(0.125)

	// Luminosity tied zoom sampling point
#define DYN_ZOOM_SAMPLING_POINT vec2(0.75)
	
	//Sampling points from test pass
#define SMP_RANGE1 vec4(0.24,0.24  ,  0.26,0.26)
#define SMP_POINT1 vec2(         0.25          )
	
// RESOLUTION SWITCH GLITCH EMULATION ##########################################################################################
	//Where to sample alpha from avglum pass to understand if resolution has changed (very internal setting) 
#define RESSWITCH_SAMPLING_POINT vec2(0.9) 
	//How much the resolution have to change for shake to be activated (in relation to the old size).
#define RESSWITCH_GLITCH_TRESHOLD 0.1
	//How fast is the shake [0.01 -> 1]
#define RESSWITCH_SHAKE_SPEED 0.3


// MISC STATIC CONFIG ##########################################################################################
	//Static dithering applied over vignette and spot
#define NOISEPOWER ((1/255.0) * 1.2)
	//Temporal noise strength applied on green channel when green is dark over ambient lights (multiplied by NOISEPOWER)
#define NOISEPOWER_AMBI (NOISEPOWER * 3.0)


// This is used as a mean value when reported frametimes are outside an acceptable range.
// It can also be queried to estimate if actual fps are in interval [25..30] or [50..60]
	#define FPS_MEAN ((60+30+50+25)/4.0)


// This is an attempt to improve preceived motion clarity by flickering the moving part of the game
// uncomment/remove leading // to enable
// #define FLICKER_IN_MOTION


// STATIC CONFIG ENDS HERE ##########################################################################################
