# Installing Backdrop Presets in FinalBurn Neo

Backdrops require a separate koko-aio shader directory called koko-aio-backdrops, to which these backdrop presets point to.

Main difference to the koko-aio shader directory: In the shader subdirectory, you must manually edit config.inc as follows:
In line 56, enable backdrops by uncommenting this line.
With this change, the presets work in the same manner as the regular koko-aio presets and can be copied into the same folder.

In order to automagically use these presets, place them into the RetroArch support folder ../config/FinalBurn Neo. This guarantees that whenever you start a game with this filename, the shader activates.

The FinalBurn Neo.cfg file contains only one line and shall guarantee that the Aspect Ratio is set to 'Full'. Without this setting, the Artwork will not appear.

Note that the additional Artwork must be installed according to the instructions there.<br>
