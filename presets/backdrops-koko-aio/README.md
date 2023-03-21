# Installing Backdrop Presets in FinalBurn Neo and/or MAME 2003, MAME 2003plus

In order to automagically use these presets, place them into the RetroArch support folder "../config/FinalBurn Neo" and/or "../config/MAME 2003 (078)" and/or "../config/MAME 2003-Plus". This guarantees that whenever you start a game with this filename and the respective core, the shader activates.

# How Backdrop presets behave differently - manual install

While you can mix the backdrop presets with the regular Arcade presets, these presets point to a special shader folder called 'koko-aio-backdrop' that you need to install next to the regular 'koko-aio' shader folder -> see the different file path in the respective preset.

As explained in the main ReadMe file: You also need to manually edit the config.inc file in the shaders subdirectory by uncommenting backdrop support in line #56.

Finally, you must place the dedicated backdrop textures in the textures directory of 'koko-aio-backdrop'.

# Everything behaves the same as with the regular Arcade presets

The presets in the folder "MAME 2003 (0.78)" and "MAME 2003-Plus" are for games that are not supported by FinalBurn Neo, whereas all presets in FinalBurn Neo also work in MAME 2003 (thus avoiding unnecessary duplicates).

Currently only 3 games with dedicated artwork in this repository do not work in FinalBurn Neo:
Astro Fighters
Boot Hill (Backdrop)
Space Invaders Deluxe (Backdrop)

Note: The FinalBurn Neo.cfg, MAME 2003 (078).cfg and MAME 2003-Plus.cfg files contain only one line and shall guarantee that the Aspect Ratio is set to 'Full'. Without this setting, the Artwork will not appear.

Also note that the additional Artwork must be installed according to the instructions there.<br>
