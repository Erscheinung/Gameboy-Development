# GameboyDevelopment
Game development projects for the Gameboy

# Hello World 
* First gameboy game to simply print HELLO WORLD on the emulator screen.
 * [Video](https://www.youtube.com/watch?v=HIsWR_jLdwo) instructions.

## Setting up gcc
* minGW-w64: [Link](https://sourceforge.net/projects/mingw-w64/)
*Note*: Select x86_64 from the Architecture drop down in the Setup menu.
* Add Path variable for minGW

## Setting up the GameBoy SDK
GameBoy Development Kit [Link](https://sourceforge.net/projects/gbdk/)

## Gameboy Tile Designer and Map Designer
* Tile Designer [Link](http://www.devrs.com/gb/hmgd/gbtd.html)
* Map Designer [Link](http://www.devrs.com/gb/hmgd/gbmb.html)
* Export as GBD C file with suitable label. To use: `#include "filelabel.c"` where filelabel is your file's label name and the C file is in the same directory as your project folder.
* Youtube [video](https://www.youtube.com/watch?v=rCN-jwYn7Qw&t=577s) for introduction to tiles and how to use them.

## Setting up the workspace
1. Ideally, place the folder in the root of `C:/`
2. Inside, create a C file (main.c) and include gba/gba.h header file: `#include<gb/gb.h>`

Create a make.bat file and paste the following:

    c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o main.o main.c
    c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -o main.gb main.o
    
* This uses the lcc.exe file from the gdbk, and creates a .gb file you can drag-and-drop into a emulator like [VBA](http://www.emulator-zone.com/doc.php/gba/vboyadvance.html)

### Compiling with devkitadv (another sdk)
* Guide [Link](http://loirak.com/gameboy/gbatutor.php) : Not working for me currently due to 32 bit/64 bit incompatibility issues.
* devkitadv files [Link](https://sourceforge.net/projects/devkitadv/files/Windows/Release%204/) : place in root C:/

## Other Guides/Links
* Loirak [Link](http://loirak.com/gameboy/gbatutor.php)
* J Vijn [Link](https://www.coranac.com/tonc/text/setup.htm)


