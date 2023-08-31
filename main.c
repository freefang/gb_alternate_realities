#include <gb/gb.h>
#include <gb/font.h>
#include <stdio.h>
#include "BackgroundTileSet.h"
#include "BackgroundTileMap.h"
#include "BackgroundTileSet.c"
#include "BackgroundTileMap.c"
#include "FinalTilemapWalker_1_150.c"
#include "FinalTilesetWalker_1_150.c"
#include "FinalTilesetWalker_1_150.h"
#include "Sled.c"
//#include "AllTileData.c"

#define TOP_LEFT 0
#define TOP_MIDDLE 1
#define TOP_RIGHT 2
#define MIDDLE_LEFT 3
#define MIDDLE_MIDDLE 4
#define MIDDLE_RIGHT 5
#define BOTTOM_LEFT 6
#define BOTTOM_MIDDLE 7
#define BOTTOM_RIGHT 8
#define LocationX 57
#define LocationY 91

UINT8 frame = 1;

void performantdelay(UINT8 numloops){
    UINT8 i;
    for(i = 0; i < numloops; i++){
        wait_vbl_done();
    }
}

void setSpritePosition(){
    move_sprite(TOP_LEFT,       LocationX,    LocationY-16);
    move_sprite(TOP_MIDDLE,     LocationX+8,  LocationY-16);
    move_sprite(TOP_RIGHT,      LocationX+16, LocationY-16);
    move_sprite(MIDDLE_LEFT,    LocationX,    LocationY-8);
    move_sprite(MIDDLE_MIDDLE,  LocationX+8,  LocationY-8);
    move_sprite(MIDDLE_RIGHT,   LocationX+16, LocationY-8);
    move_sprite(BOTTOM_LEFT,    LocationX,    LocationY);
    move_sprite(BOTTOM_MIDDLE,  LocationX+8,  LocationY);
    move_sprite(BOTTOM_RIGHT,   LocationX+16, LocationY);
}

void setSpriteData(){
    UINT8 frameNr = frame - 1;

#if defined(DEBUGGRAPHICS)

    if(frameNr % 2 == 0)
            set_bkg_data(21, 1, TILESETBACKGROUND + 20 * 16);
        else
            set_bkg_data(21, 1, TILESETBACKGROUND);
#else
    set_bkg_data(21, 1, TILESETBACKGROUND + 20 * 16);
    set_bkg_data(22, 1, TILESETBACKGROUND + 20 * 16);
#endif // DEBUGGRAPHICS

    if (frame < 26)
    {
        #if defined(DEBUGGRAPHICS)
        set_bkg_data(22, 1, TILESETBACKGROUND + 20 * 16);
        #endif // DEBUGGRAPHICS

        set_sprite_data(TOP_LEFT,       1, TILESETWALKER_1_25+(WALKER_TILEMAP[frameNr][TOP_LEFT     ] * 16));
        set_sprite_data(TOP_MIDDLE,     1, TILESETWALKER_1_25+(WALKER_TILEMAP[frameNr][TOP_MIDDLE   ] * 16));
        set_sprite_data(TOP_RIGHT,      1, TILESETWALKER_1_25+(WALKER_TILEMAP[frameNr][TOP_RIGHT    ] * 16));
        set_sprite_data(MIDDLE_LEFT,    1, TILESETWALKER_1_25+(WALKER_TILEMAP[frameNr][MIDDLE_LEFT  ] * 16));
        set_sprite_data(MIDDLE_MIDDLE,  1, TILESETWALKER_1_25+(WALKER_TILEMAP[frameNr][MIDDLE_MIDDLE] * 16));
        set_sprite_data(MIDDLE_RIGHT,   1, TILESETWALKER_1_25+(WALKER_TILEMAP[frameNr][MIDDLE_RIGHT ] * 16));
        set_sprite_data(BOTTOM_LEFT,    1, TILESETWALKER_1_25+(WALKER_TILEMAP[frameNr][BOTTOM_LEFT  ] * 16));
        set_sprite_data(BOTTOM_MIDDLE,  1, TILESETWALKER_1_25+(WALKER_TILEMAP[frameNr][BOTTOM_MIDDLE] * 16));
        set_sprite_data(BOTTOM_RIGHT,   1, TILESETWALKER_1_25+(WALKER_TILEMAP[frameNr][BOTTOM_RIGHT ] * 16));
    }
    else if (frame < 51)
    {
        #if defined(DEBUGGRAPHICS)
        set_bkg_data(22, 1, TILESETBACKGROUND + 19 * 16);
        #endif // DEBUGGRAPHICS

        set_sprite_data(TOP_LEFT,       1, TILESETWALKER_26_50+(WALKER_TILEMAP[frameNr][TOP_LEFT     ] * 16));
        set_sprite_data(TOP_MIDDLE,     1, TILESETWALKER_26_50+(WALKER_TILEMAP[frameNr][TOP_MIDDLE   ] * 16));
        set_sprite_data(TOP_RIGHT,      1, TILESETWALKER_26_50+(WALKER_TILEMAP[frameNr][TOP_RIGHT    ] * 16));
        set_sprite_data(MIDDLE_LEFT,    1, TILESETWALKER_26_50+(WALKER_TILEMAP[frameNr][MIDDLE_LEFT  ] * 16));
        set_sprite_data(MIDDLE_MIDDLE,  1, TILESETWALKER_26_50+(WALKER_TILEMAP[frameNr][MIDDLE_MIDDLE] * 16));
        set_sprite_data(MIDDLE_RIGHT,   1, TILESETWALKER_26_50+(WALKER_TILEMAP[frameNr][MIDDLE_RIGHT ] * 16));
        set_sprite_data(BOTTOM_LEFT,    1, TILESETWALKER_26_50+(WALKER_TILEMAP[frameNr][BOTTOM_LEFT  ] * 16));
        set_sprite_data(BOTTOM_MIDDLE,  1, TILESETWALKER_26_50+(WALKER_TILEMAP[frameNr][BOTTOM_MIDDLE] * 16));
        set_sprite_data(BOTTOM_RIGHT,   1, TILESETWALKER_26_50+(WALKER_TILEMAP[frameNr][BOTTOM_RIGHT ] * 16));
    }
    else if (frame < 76)
    {
        #if defined(DEBUGGRAPHICS)
        set_bkg_data(22, 1, TILESETBACKGROUND + 18 * 16);
        #endif // DEBUGGRAPHICS
        
        set_sprite_data(TOP_LEFT,       1, TILESETWALKER_51_75+(WALKER_TILEMAP[frameNr][TOP_LEFT     ] * 16));
        set_sprite_data(TOP_MIDDLE,     1, TILESETWALKER_51_75+(WALKER_TILEMAP[frameNr][TOP_MIDDLE   ] * 16));
        set_sprite_data(TOP_RIGHT,      1, TILESETWALKER_51_75+(WALKER_TILEMAP[frameNr][TOP_RIGHT    ] * 16));
        set_sprite_data(MIDDLE_LEFT,    1, TILESETWALKER_51_75+(WALKER_TILEMAP[frameNr][MIDDLE_LEFT  ] * 16));
        set_sprite_data(MIDDLE_MIDDLE,  1, TILESETWALKER_51_75+(WALKER_TILEMAP[frameNr][MIDDLE_MIDDLE] * 16));
        set_sprite_data(MIDDLE_RIGHT,   1, TILESETWALKER_51_75+(WALKER_TILEMAP[frameNr][MIDDLE_RIGHT ] * 16));
        set_sprite_data(BOTTOM_LEFT,    1, TILESETWALKER_51_75+(WALKER_TILEMAP[frameNr][BOTTOM_LEFT  ] * 16));
        set_sprite_data(BOTTOM_MIDDLE,  1, TILESETWALKER_51_75+(WALKER_TILEMAP[frameNr][BOTTOM_MIDDLE] * 16));
        set_sprite_data(BOTTOM_RIGHT,   1, TILESETWALKER_51_75+(WALKER_TILEMAP[frameNr][BOTTOM_RIGHT ] * 16));
    }
    else if (frame < 101)
    {
        #if defined(DEBUGGRAPHICS)
        set_bkg_data(22, 1, TILESETBACKGROUND + 17 * 16);
        #endif // DEBUGGRAPHICS
        
        set_sprite_data(TOP_LEFT,       1, TILESETWALKER_76_100+(WALKER_TILEMAP[frameNr][TOP_LEFT     ] * 16));
        set_sprite_data(TOP_MIDDLE,     1, TILESETWALKER_76_100+(WALKER_TILEMAP[frameNr][TOP_MIDDLE   ] * 16));
        set_sprite_data(TOP_RIGHT,      1, TILESETWALKER_76_100+(WALKER_TILEMAP[frameNr][TOP_RIGHT    ] * 16));
        set_sprite_data(MIDDLE_LEFT,    1, TILESETWALKER_76_100+(WALKER_TILEMAP[frameNr][MIDDLE_LEFT  ] * 16));
        set_sprite_data(MIDDLE_MIDDLE,  1, TILESETWALKER_76_100+(WALKER_TILEMAP[frameNr][MIDDLE_MIDDLE] * 16));
        set_sprite_data(MIDDLE_RIGHT,   1, TILESETWALKER_76_100+(WALKER_TILEMAP[frameNr][MIDDLE_RIGHT ] * 16));
        set_sprite_data(BOTTOM_LEFT,    1, TILESETWALKER_76_100+(WALKER_TILEMAP[frameNr][BOTTOM_LEFT  ] * 16));
        set_sprite_data(BOTTOM_MIDDLE,  1, TILESETWALKER_76_100+(WALKER_TILEMAP[frameNr][BOTTOM_MIDDLE] * 16));
        set_sprite_data(BOTTOM_RIGHT,   1, TILESETWALKER_76_100+(WALKER_TILEMAP[frameNr][BOTTOM_RIGHT ] * 16));
    }
    else if (frame < 126)
    {
        #if defined(DEBUGGRAPHICS)
        set_bkg_data(22, 1, TILESETBACKGROUND + 16 * 16);
        #endif // DEBUGGRAPHICS
        
        set_sprite_data(TOP_LEFT,       1, TILESETWALKER_101_125+(WALKER_TILEMAP[frameNr][TOP_LEFT     ] * 16));
        set_sprite_data(TOP_MIDDLE,     1, TILESETWALKER_101_125+(WALKER_TILEMAP[frameNr][TOP_MIDDLE   ] * 16));
        set_sprite_data(TOP_RIGHT,      1, TILESETWALKER_101_125+(WALKER_TILEMAP[frameNr][TOP_RIGHT    ] * 16));
        set_sprite_data(MIDDLE_LEFT,    1, TILESETWALKER_101_125+(WALKER_TILEMAP[frameNr][MIDDLE_LEFT  ] * 16));
        set_sprite_data(MIDDLE_MIDDLE,  1, TILESETWALKER_101_125+(WALKER_TILEMAP[frameNr][MIDDLE_MIDDLE] * 16));
        set_sprite_data(MIDDLE_RIGHT,   1, TILESETWALKER_101_125+(WALKER_TILEMAP[frameNr][MIDDLE_RIGHT ] * 16));
        set_sprite_data(BOTTOM_LEFT,    1, TILESETWALKER_101_125+(WALKER_TILEMAP[frameNr][BOTTOM_LEFT  ] * 16));
        set_sprite_data(BOTTOM_MIDDLE,  1, TILESETWALKER_101_125+(WALKER_TILEMAP[frameNr][BOTTOM_MIDDLE] * 16));
        set_sprite_data(BOTTOM_RIGHT,   1, TILESETWALKER_101_125+(WALKER_TILEMAP[frameNr][BOTTOM_RIGHT ] * 16));
    }
    else //if (frame == 126)
    {
        #if defined(DEBUGGRAPHICS)
        set_bkg_data(22, 1, TILESETBACKGROUND + 15 * 16);
        #endif // DEBUGGRAPHICS
        
        set_sprite_data(TOP_LEFT,       1, TILESETWALKER_126_150+(WALKER_TILEMAP[frameNr][TOP_LEFT     ] * 16));
        set_sprite_data(TOP_MIDDLE,     1, TILESETWALKER_126_150+(WALKER_TILEMAP[frameNr][TOP_MIDDLE   ] * 16));
        set_sprite_data(TOP_RIGHT,      1, TILESETWALKER_126_150+(WALKER_TILEMAP[frameNr][TOP_RIGHT    ] * 16));
        set_sprite_data(MIDDLE_LEFT,    1, TILESETWALKER_126_150+(WALKER_TILEMAP[frameNr][MIDDLE_LEFT  ] * 16));
        set_sprite_data(MIDDLE_MIDDLE,  1, TILESETWALKER_126_150+(WALKER_TILEMAP[frameNr][MIDDLE_MIDDLE] * 16));
        set_sprite_data(MIDDLE_RIGHT,   1, TILESETWALKER_126_150+(WALKER_TILEMAP[frameNr][MIDDLE_RIGHT ] * 16));
        set_sprite_data(BOTTOM_LEFT,    1, TILESETWALKER_126_150+(WALKER_TILEMAP[frameNr][BOTTOM_LEFT  ] * 16));
        set_sprite_data(BOTTOM_MIDDLE,  1, TILESETWALKER_126_150+(WALKER_TILEMAP[frameNr][BOTTOM_MIDDLE] * 16));
        set_sprite_data(BOTTOM_RIGHT,   1, TILESETWALKER_126_150+(WALKER_TILEMAP[frameNr][BOTTOM_RIGHT ] * 16));
    }
}

void main(){
    setSpriteData();

    set_sprite_tile(TOP_LEFT,       TOP_LEFT     );
    set_sprite_tile(TOP_MIDDLE,     TOP_MIDDLE   );
	set_sprite_tile(TOP_RIGHT,      TOP_RIGHT    );
    set_sprite_tile(MIDDLE_LEFT,    MIDDLE_LEFT  );
    set_sprite_tile(MIDDLE_MIDDLE,  MIDDLE_MIDDLE);
	set_sprite_tile(MIDDLE_RIGHT,   MIDDLE_RIGHT );
    set_sprite_tile(BOTTOM_LEFT,    BOTTOM_LEFT  );
    set_sprite_tile(BOTTOM_MIDDLE,  BOTTOM_MIDDLE);
	set_sprite_tile(BOTTOM_RIGHT,   BOTTOM_RIGHT );

    set_bkg_data(0, TILESET_TILE_COUNT, TILESETBACKGROUND);
    set_bkg_data(TILESET_TILE_COUNT, 20, TILESETSLED);
    set_bkg_tiles(0, 0, TILEMAP_WIDTH, TILEMAP_HEIGHT, BACKGROUNDTILEMAP);
	
    setSpritePosition();
    
	DISPLAY_ON;						// Turn on the display
    SHOW_SPRITES;
    SHOW_BKG;
    
    while(1){
        if (frame > 150)
        {
            frame = 1;
        }
        
        setSpriteData();
        frame++;
        
        performantdelay(2);
    }
}
