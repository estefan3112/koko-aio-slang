# Koko-aio fork for arcade Artwork 
(RetroArch FinalBurnNeo, MAME (current) and MAME 2003/2003plus)

Repository for game-specific Arcade Artwork by using the Koko-aio slang shader. Successfully tested under MacOS, Windows and iPadOS. Currently the Koko-aio shader provides superior performance on all reasonably powered desktops (including Macs), while providing enhanced shader functions, including bezel reflections, immersive ambient lights, halo/glow effects and many more. Configuration options are endless. It embeds game-specific artwork seamlessly and scales according to resolution. The koko-aio shader is currently under steady development, thus it is a clear aim to stay in line with the Upstream changes.<br>
<br>
Main source of this artwork comes from John Merrit, who set a benchmark for realistic arcade artwork. I still very much like them, and after AI-upscaling to 4K, they shine even more in combination with Koko-aio. My selection of the artwork is arbitrary, but I try to publish eye candys earlier :-). Version 0.2 and following releases see the inclusion of some breathtaking 4K artwork provided by Ars Invictus. Each shader preset contains the credits (warning: If you overwrite the preset in RetroArch, credits get lost).<br>
<br>
Focus on highest possible quality and diversity over mass production. Also improvements of existing artwork to have a best possible experience.<br>
<br>
Requirements: RetroArch 1.6.0 upwards, you need Vulkan supoprt.<br>
<br>

# Screenshots

Screenshots from release 0.4:

<img width="669" alt="Bildschirmfoto 2023-11-01 um 22 08 41" src="https://github.com/estefan3112/koko-aio-slang/assets/24915559/3b171d0f-009f-4c66-a0bd-83944513a7b6">

<img width="638" alt="Bildschirmfoto 2023-11-01 um 20 01 44" src="https://github.com/estefan3112/koko-aio-slang/assets/24915559/5e1161de-5e51-4211-a47a-d7b7a62f45ba">

<img width="613" alt="Bildschirmfoto 2023-11-01 um 23 35 12" src="https://github.com/estefan3112/koko-aio-slang/assets/24915559/47263a70-17dd-4af1-b64f-a037853738fa">

<img width="750" alt="Bildschirmfoto 2023-04-08 um 21 03 47" src="https://user-images.githubusercontent.com/24915559/230785582-e364fa18-e0ea-4908-a912-c3de18bfe70c.png">

<img width="750" alt="Bildschirmfoto 2023-04-09 um 17 59 40" src="https://user-images.githubusercontent.com/24915559/230785603-ef7b0491-3081-4075-b29d-3b6dc62a9aed.png">


Shots from v 0.2 and 0.3:<br>

<img width="851" alt="Bildschirm­foto 2023-03-25 um 22 34 39" src="https://user-images.githubusercontent.com/24915559/227745111-e03e33dc-adc4-400f-ab1e-195c959a7565.png">
<img width="851" alt="Bildschirm­foto 2023-03-25 um 22 32 36" src="https://user-images.githubusercontent.com/24915559/227745132-69501af9-19c0-4990-9e9c-c0e59276b073.png">
<img width="851" alt="Bildschirm­foto 2023-03-25 um 22 30 07" src="https://user-images.githubusercontent.com/24915559/227745148-43338ee5-3d77-4db5-b35a-02755ce52bdf.png">
<img width="851" alt="Bildschirm­foto 2023-03-25 um 22 29 12" src="https://user-images.githubusercontent.com/24915559/227745178-9f5948c3-cf38-4d77-b5f6-ca394020a472.png">
<img width="851" alt="Bildschirm­foto 2023-03-25 um 22 31 11" src="https://user-images.githubusercontent.com/24915559/227745159-bad3ff85-e90e-443d-8ce0-8c75fbdf7307.png">
<img width="851" alt="Bildschirm­foto 2023-03-25 um 22 33 41" src="https://user-images.githubusercontent.com/24915559/227745243-2af41d24-edeb-4e2d-a22e-55a2ee665a98.png">
<br>
Shots from v 0.1:<br>

<img width="512" alt="1943" src="https://user-images.githubusercontent.com/24915559/215357835-23de575f-66ba-477c-be39-e8ab433a8e50.png">
<img width="512" alt="aliensyn" src="https://user-images.githubusercontent.com/24915559/215357862-535b6e7e-dff0-4a86-9d86-f9a88f89921c.png">
<img width="512" alt="mpatrol" src="https://user-images.githubusercontent.com/24915559/215357897-803ccc6a-6bfa-4ef2-8b58-4547b140c5e3.png">
<br>

# Easy install

Step 1: Take the entire zip package as provided in the Release section and replace the koko-aio folder that comes with RetroArch: /shaders/shaders_slang/bezel/koko-aio<br>
Step 2: Move all .slangp-presets to the respective core configuration directory, i.e. /config/FinalBurn Neo/ and/or /config/MAME/ and/or /config/Mame 2003 (0.78) and/or /config/MAME 2003-plus; with this, the right artwork launches automatically<br>
<br>
Note: The FinalBurn Neo.cfg/MAME.cfg/Mame 2003 (0.78).cfg/MAME 2003-plus.cfg files contain just one line that secures that the Aspect Ratio is set to 'Full'. Without this option, the background will not appear.<br>

# Dedicated install of only the additional Arcade Artwork
(actually not needed, as I am fully in line with koko-aio upstream - but just mentioning this for completeness)

But if you want to stay with koko-aio for some other reason and do a partial install:
Step 1: Take the entire folder /textures/arcade_textures and move it locally to /shaders/shaders_slang/bezel/koko-aio/textures.<br>
Step 2: Move the content of the directory koko-aio/presets/arcade-koko-aio to /config/FinalBurn Neo/ etc...as above -> by this, the game launches the right shader configuration automatically.<br>
<br>
Please also refer to the instructions contained in the ReadMe.md of these folders.<br>

# Manual installation from the Github repository

Update November 2023: In the new ng shader environment, it will be sufficient to move the koko-aio folder structure as is into the local RetroArch shader environment. So you can download the repository as well, but be sure to delete the hidden .git files that contain massive data.
<br>

# Further clones of the same game

Please see the Moon Patrol example - you can just duplicate the .slangp preset and rename it with the name of the clone. By this, you have an identical configuration for a clone. <br>

# Backdrop support

Since Release 0.3, backdrop support landed in koko-aio as a dynamic option. A separate shader repository for backdrops is no longer required, and I have merged the backdrop presets into koko-aio. 

# Technical Information

(Update November 2023) This fork will remain as closely as possible in line with the main repository, as I frequently update from Upstream. Here is a list of deviations from Upstream:
- koko-aio-ng.slangp - line 43:  bg_under_wrap_mode = "clamp_to_edge" (instead of previously "clamp_to_border") 
- koko-aio-ng.slangp - line 48:  bg_over_wrap_mode = "clamp_to_edge" (instead of previously "clamp_to_border")
- koko-aio-ng.slangp - line 54:  backdrop_wrap_mode = "clamp_to_edge"
In koko-aio.slangp, I used "clamp_to_border", but the new, stronger ambilight then shines beyond the artwork. Workaround: apply a 1px black frame to the artwork and set "clamp_to_edge", this lets the black frame repeat black, and thereby the ambilight no longer shines through.

These changes are beneficial for this repository, as a mirrored repeat looks very strange for realistic cabinet backgrounds/foregrounds.

LEGACY no longer required as of April 2023, just for documentation: 
/shaders/config.inc - line 130: ALLOW_BG_IMAGE_TEXTURE_WRAP_IN_SHADER is enabled so as to allow a different texture wrap for the arcade artwork
/shaders/config.globals.inc - line 200: BG_IMAGE_WRAP_MODE is hardcoded to	1.0 (wrap to edge) because that's how it should be with this arcade artwork (ending with a black border)
/shaders/config.inc - line 107: STATIC_SUPPORT_BACKDROP hardcoded to 1.0 (this is why backdrops require a separate koko-aio-backdrops instance) 


# From here, the original text from the forked repository follows:

# Koko-aio

Koko-aio shader is meant to be an all-in one crt shader.<br>
It can be configured with many parameters, so that can be
scaled to run on even on modest gpus while still developed to
run with heavier presets on at least Haswell+ iGpus.<br>
On that gpu, as in version 3.5, it reaches about 85fps with all features enabled<br>
When dealing with lowres content on 1920x1080 resolution.<br>
While it is not meant to simulate the internal behaviour of CRT displays,<br>
it aims to give users "visual" parameters to make their monitors look similar.<br>
Several presets are included.<br>

***Additional documentation:***
* [See here](docs-ng.md)

***Additional artwork:***
* https://github.com/kokoko3k/koko-aio-slang-presets-and-overlays

***Actually, it provides emulation/support for:***
* Color corrections (Gamma, contrast, saturation, luminance, vibrance, color temperature adjustments)
* B/W display "colorization"
* FXAA Antialiasing
* RF Noise
* Dedithering
* NTSC/PAL CVBS color bleeding and Artifacts
* Phosphor persistance
* Deconvergence
* Gaussian blurring/sharpening
* Phosphor Glow
* Tate mode
* Scanlines
* Interlacing
* Double scanning
* Multiple phosphors layout
* Aperture grille, slot mask, shadow mask.
* Moire mitigation strategies
* Dot martix with ghosting
* Haloing, Blooming
* Curvature
* Bezels with realistic reflections  (Thank you HyperspaceMadness for allowing me to rip his automagically generated bezel!)
* Background, Foreground and Backdrop images
* Ambient lighting with realistic illumination
* Vignette, spotlight
* Full screen glowing
* Integer Scaling 
* Tilting
* Light on power consumption 


***External code by:***
* Nvidia (FXAA)
        
# Examples from NG version

***Dynamic Ambient light examples***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/Amby-night.jpeg?raw=true)
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/Amby-day.jpeg?raw=true)
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/Amby-widen.jpeg?raw=true)

***Hires content***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/hires.jpeg?raw=true)

***Overmasked***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/Overmask,jpeg?raw=true)
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/Overmask2.jpeg?raw=true)

***Ntsc selective blurring and sharpening***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/sonic1.jpeg?raw=true)

***Antialiased***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/fxaa.jpeg?raw=true)

***Mask experiments***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/overlapped.jpeg?raw=true)
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/oldpainless.jpeg?raw=true)
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/pinchlook.jpeg?raw=true)
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/Wide-Mask?raw=true)

***ffmpeg player***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/tv.jpeg?raw=true)

***Handhelds***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/handhelds/gg_lights1.jpeg?raw=true)
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/handhelds/gg_ambilights.jpeg?raw=true)
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/handhelds/gmb_zoom.jpeg?raw=true)
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/handhelds/gbp.jpeg?raw=true)
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/handhelds/gbm_desktop.jpeg?raw=true)
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots-ng-1.0/handhelds/wario.jpeg?raw=true)


# Old screenshots from 3.5

***monitor-slotmask-bloom-bezelwider - Arcade - Final fight***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots.3.5/monitor-slotmask-bloom-bezelwider.mame.ffight.png?raw=true)

***monitor-Commodore_1084S-wider - Amiga - ProjectX SE***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots.3.5/monitor-Commodore_1084S-wider.puae.projectx.png?raw=true)

***tv-PAL-my-old - Master System - Trans Bot***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots.3.5/tv-PAL-my-old,mastersystem.transbot.png?raw=true)

***tv-NTSC-1 - Genesis - Sonic 2***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots.3.5/tv-NTSC-1.md.sonic2.png?raw=true)

***tv-NTSC-2 - Snes - Aladdin***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots.3.5/tv-NTSC-2.snes.aladdin.png?raw=true)

***tv-aperturegrille-bloom-bezel - Amiga - Leander***
![ ](https://github.com/kokoko3k/koko-aio-slang-misc/blob/main/screenshots/screenshots.3.5/tv-aperturegrille-bloom-bezel.puae.leander.png?raw=true)
