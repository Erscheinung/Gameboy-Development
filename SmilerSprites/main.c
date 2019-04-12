#include<gb/gb.h>
#include<stdio.h>
#include "SmilerSprites.c"


void main(){
    //gbdk method to load data from Smiler.c   
    //Syntax: set_sprite_data(start at tile-index, number of tiles to load,tile label)
    set_sprite_data(0,2,Smiler); 
    //Setting 0th tile, load from first tile (next parameter) in the sprite data above
    set_sprite_tile(0,0);

    move_sprite(0,88,78); //moves sprite at index 0 to 88 across, 78 down
}

