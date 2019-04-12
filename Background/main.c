#include<gb/gb.h>
#include<stdio.h>
#include "bgmap.c"
#include "bgtiles.c"


void main(){
    set_bkg_data(0,7,bgtiles);
    set_bkg_tiles(0,0,40,18,bgmap);

    SHOW_BKG;
    DISPLAY_ON;

    while(1){
        scroll_bkg(1,0);
        delay(100);
    }

}

