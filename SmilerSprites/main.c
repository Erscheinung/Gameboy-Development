#include<gb/gb.h>
#include<stdio.h>
#include "SmilerSprites.c"

void main(){
    UINT8 current_sprite_index = 0; //unsigned int using 8 bits

    //gbdk method to load data from Smiler.c   
    //Syntax: set_sprite_data(start at tile-index, number of tiles to load,tile label)
    set_sprite_data(0,2,Smiles); 
    //Setting 0th tile, load from first tile (next parameter) in the sprite data above
    set_sprite_tile(0,0);
    move_sprite(0,88,78); //moves sprite at index 0 to 88 across, 78 down
    SHOW_SPRITES;

    while(1){ 
        //for looping animation: continuously switching between 2 tiles (with some delay: line 25)
        if(current_sprite_index == 0){ 
            current_sprite_index = 1;
        }
        else {
            current_sprite_index = 0;
        }
        set_sprite_tile(0,current_sprite_index);
        delay(1000); //not miliseconds, but CPU cycles
        
        //for moving sprite 1 around the screen: 10 pixels horizontally and 0 vertically
        scroll_sprite(0,10,0);  
    }      
}

