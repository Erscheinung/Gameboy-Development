#include<gb/gb.h>
#include<stdio.h>
#include "bgmap.c"
#include "bgtiles.c"
#include "SmilerSprites.c"


void main(){
    UINT8 current_sprite_index = 0; //unsigned int using 8 bits
    set_bkg_data(0,7,bgtiles);
    set_bkg_tiles(0,0,40,18,bgmap);

     //Syntax: set_sprite_data(start at tile-index, number of tiles to load,tile label)
    set_sprite_data(0,2,Smiles); 
    //Setting 0th tile, load from first tile (next parameter) in the sprite data above
    set_sprite_tile(0,0);
    move_sprite(0,88,78); //moves sprite at index 0 to 88 across, 78 down

    SHOW_BKG;
    DISPLAY_ON;
    
    SHOW_SPRITES;

    while(1){
        scroll_bkg(1,0);
        delay(100);
         
        switch(joypad()){
            case J_LEFT: 
                scroll_sprite(0,-10,0);
                break;
            case J_RIGHT:
                scroll_sprite(0,10,0);
                break;
            case J_UP:
                scroll_sprite(0,0,-10);
                break;
            case J_DOWN: 
                scroll_sprite(0,0,10);
                break;
        } 
        delay(100); //not miliseconds, but CPU cycles
    }
     
}

