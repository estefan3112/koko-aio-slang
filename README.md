# Koko-aio Fork for Arcade Artwork (currently FinalBurn Neo and MAME 2003)

Repository for game-specific Arcade Artwork by using the Koko-aio slang shader Successfully tested under MacOS, Windows and iOS. Currently the Koko-aio shader provides superior performance on all reasonably powered desktops, while providing enhanced shader functions, including bezel reflections. It embeds game-specific artwork seamlessly and scales according to resolution.<br>
<br>
Main source of this artwork comes from John Merrit, who set a benchmark for realistic arcade artwork. I still very much like them, and they shine even more in combination with Koko-aio. My selection of the artwork is arbitrary, but I try to publish eye candys earlier :-).<br>
<br>
Requirements: a very recent RetroArch Nightly Build that supports Vulkan.<br>

# Release 0.1 contains first 21 game-specific presets - download here!
Please see the list of game presets in the Release Notes.

# Screenshots
Screenshots are taken under MacOS with HDR enabled.

<img width="512" alt="1943" src="https://user-images.githubusercontent.com/24915559/215357835-23de575f-66ba-477c-be39-e8ab433a8e50.png">
<img width="512" alt="aliensyn" src="https://user-images.githubusercontent.com/24915559/215357862-535b6e7e-dff0-4a86-9d86-f9a88f89921c.png">
<img width="512" alt="mpatrol" src="https://user-images.githubusercontent.com/24915559/215357897-803ccc6a-6bfa-4ef2-8b58-4547b140c5e3.png">

# Easy install

Step 1: Take the entire koko-aio folder as provided in the Release section and replace the one that comes with RetroArch: /shaders/shaders_slang/bezel/koko-aio<br>
Step 2: Move all .slangp-presets to the respective core configuration directory, i.e. /config/FinalBurn Neo/ and/or /config/Mame 2003 (0.78)<br>
<br>
Note: The FinalBurn Neo.cfg/Mame 2003 (0.78).cfg files contain just one line that secures that the Aspect Ratio is set to 'Full'. Without this option, the background will not appear.<br>

# Dedicated install of only the additional Arcade Artwork

Step 1: Take the entire folder /textures/arcade_textures and move it locally to /shaders/shaders_slang/bezel/koko-aio/textures.<br>
Step 2: Move the content of the directory koko-aio/presets/arcade-koko-aio to /config/FinalBurn Neo/ and/or /config/Mame 2003 (0.78) -> by this, the game launches the right shader configuration automatically.<br>
<br>
Please also refer to the instructions contained in the ReadMe.md of these folders.<br>

# Installation from the Github repository

Please note that the Koko-aio github repository has a different folder structure than RetroArch. In order to make a GitHub clone work, you must move all .slang presets from the presets directory one level up. Then you must adjust the reference in the two BASE presets, so that these BASE presets refer to the same directory, and you are ready to go.
<br>

# Further clones

Please see the Moon Patrol example - you can just duplicate the .slangp preset and rename it with the name of the clone. By this, you have an identical configuration for a clone. <br>


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
* [See here](docs.md)

***Actually, it provides emulation for:***
* Scanlines
* Screenlines
* RGB phosphors
* RGB deconvergence
* NTSC/PAL CVBS color bleeding
* NTSC color artifacting (early stage)
* Aperture grille and slot mask.
* Input signal glowing
* Output signal glowing
* Blooming
* Gamma, contrast, saturation, luminance, color temperature adjustments
* Black frame insertions through alternate blanking
* Interlace flickering, forcing and emulation
* Antialiasing
* Curvature
* Ambient lights
* Vignette and Spotlight
* Bezel (Thank you HyperspaceMadness for allowing me to rip his automagically generated bezel!)
  https://github.com/HyperspaceMadness/
* Background images
* Full screen glowing

***External code by:***
* CRT - Guest - Dr.Venom (single pass bloom function)
* Nvidia (FXAA)
* EasyMode (curvature related code)
        
# Examples

***monitor-slotmask-bloom-bezelwider - Arcade - Final fight***
![alt text](https://github.com/kokoko3k/koko-aio-slang/blob/main/screenshots/screenshots.3.5/monitor-slotmask-bloom-bezelwider.mame.ffight.png?raw=true)

***monitor-Commodore_1084S-wider - Amiga - ProjectX SE***
![alt text](https://github.com/kokoko3k/koko-aio-slang/blob/main/screenshots/screenshots.3.5/monitor-Commodore_1084S-wider.puae.projectx.png?raw=true)

***tv-PAL-my-old - Master System - Trans Bot***
![alt text](https://github.com/kokoko3k/koko-aio-slang/blob/main/screenshots/screenshots.3.5/tv-PAL-my-old,mastersystem.transbot.png?raw=true)

***tv-NTSC-1 - Genesis - Sonic 2***
![alt text](https://github.com/kokoko3k/koko-aio-slang/blob/main/screenshots/screenshots.3.5/tv-NTSC-1.md.sonic2.png?raw=true)

***tv-NTSC-2 - Snes - Aladdin***
![alt text](https://github.com/kokoko3k/koko-aio-slang/blob/main/screenshots/screenshots.3.5/tv-NTSC-2.snes.aladdin.png?raw=true)

***tv-aperturegrille-bloom-bezel - Amiga - Leander***
![alt text](https://github.com/kokoko3k/koko-aio-slang/blob/main/screenshots/screenshots.3.5/tv-aperturegrille-bloom-bezel.puae.leander.png?raw=true)
