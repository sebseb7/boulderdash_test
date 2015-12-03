#ifndef _BD_CAVES_H
#define _BD_CAVES_H

#include "bd_lib.h"

const int bd_cave_start_idx[] = {0,155,276,357,451,501,572,690};

const int bd_cave_data[] = {

	// 1
	15,0,
	10,10,10,20,20,
	240,160,120,100,100,
	BD_COLOR_ORANGE,BD_COLOR_GRAY1,BD_COLOR_WHITE,
	11,12,13,14,15,
	BD_BOULDER,50,BD_DIAMOND,5,0,0,0,0,
	25,0,21,
	BD_DRAW_LINE,19,1,19,11,BD_WALL,
	BD_DRAW_LINE,1,11,19,11,BD_WALL,
	BD_DRAW_LINE,3,6,16,6,BD_DIRT,
	BD_DRAW_LINE,3,7,16,7,BD_MAGICWALL,
	BD_DRAW_LINE,3,10,16,10,BD_DIRT,
	BD_DRAW_LINE,33,1,33,16,BD_STEELWALL,
	BD_DRAW_POINT,20,5,BD_BOULDER,
	BD_DRAW_FILLRECT,21,1,32,16,BD_DIRT,
	BD_DRAW_LINE,14,16,33,16,BD_STEELWALL,
	BD_DRAW_FILLRECT,15,17,38,20,BD_SPACE,
	BD_DRAW_RASTER,16,17,4,1,6,1,BD_FIREFLYr,
	BD_DRAW_RASTER,18,17,4,4,6,1,BD_DIRT,
	BD_DRAW_RASTER,22,1,6,3,2,2,BD_MAGICWALL,
	BD_DRAW_RASTER,23,1,3,3,4,2,BD_MAGICWALL,
	BD_DRAW_RASTER,22,2,3,1,4,1,BD_MAGICWALL,
	BD_DRAW_POINT,28,4,BD_MAGICWALL,
	BD_DRAW_POINT,32,4,BD_MAGICWALL,
	BD_DRAW_POINT,22,4,BD_MAGICWALL,
	BD_DRAW_LINE,23,5,24,5,BD_DIRT,
	BD_DRAW_POINT,37,3,BD_INBOX,
	BD_DRAW_POINT,5,18,BD_OUTBOX,

	// 2
	3,10,
	75,80,85,90,95,
	200,190,180,170,160,
	BD_COLOR_GREEN,BD_COLOR_PURPLE,BD_COLOR_WHITE,
	100,137,140,251,51,
	BD_BOULDER,254,BD_AMOEBA,127,0,0,0,0,
	0,25,15,
	BD_DRAW_LINE,1,15,30,15,BD_STEELWALL,
	BD_DRAW_FILLRECT,1,16,38,20,BD_SPACE,
	BD_DRAW_FILLRECT,1,0,7,15,BD_STEELWALL,
	BD_DRAW_FILLRECT,11,0,17,15,BD_STEELWALL,
	BD_DRAW_FILLRECT,21,0,27,15,BD_STEELWALL,
	BD_DRAW_FILLRECT,31,0,38,15,BD_STEELWALL,
	BD_DRAW_RASTER,9,14,3,1,10,1,BD_BOULDER,
	BD_DRAW_RASTER,9,15,3,1,10,1,BD_DIRT,
	BD_DRAW_LINE,1,1,38,1,BD_BOULDER,
	BD_DRAW_LINE,1,2,38,2,BD_DIRT,
	BD_DRAW_LINE,1,3,38,3,BD_DIRT,
	BD_DRAW_RECTANGLE,2,1,3,15,BD_SPACE,
	BD_DRAW_RECTANGLE,36,1,37,15,BD_SPACE,
	BD_DRAW_POINT,3,16,BD_INBOX,
	BD_DRAW_POINT,38,16,BD_OUTBOX,

	// 3
	25,50,
	16,12,18,15,15,
	150,150,150,150,200,
	BD_COLOR_PURPLE,BD_COLOR_ORANGE,BD_COLOR_WHITE,
	24,45,52,30,40,
	BD_SPACE,120,BD_BOULDER,50,BD_FIREFLYl,15,BD_DIAMOND,9,
	0,0,9,
	BD_DRAW_LINE,7,4,38,4,BD_STEELWALL,
	BD_DRAW_LINE,7,4,7,15,BD_STEELWALL,
	BD_DRAW_LINE,7,16,32,16,BD_STEELWALL,
	BD_DRAW_LINE,32,9,32,16,BD_STEELWALL,
	BD_DRAW_LINE,14,8,32,8,BD_STEELWALL,
	BD_DRAW_LINE,14,8,14,12,BD_STEELWALL,
	BD_DRAW_LINE,14,12,25,12,BD_STEELWALL,
	BD_DRAW_POINT,37,3,BD_INBOX,
	BD_DRAW_POINT,18,10,BD_OUTBOX,

	// 4
	5,8,
	50,52,54,56,58,
	80,70,60,50,40,
	BD_COLOR_GREEN,BD_COLOR_ORANGE,BD_COLOR_WHITE,
	0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,140,12,
	BD_DRAW_LINE,5,2,14,2,BD_FIREFLYl,
	BD_DRAW_POINT,15,2,BD_BOULDER,
	BD_DRAW_LINE,5,5,14,5,BD_FIREFLYl,
	BD_DRAW_POINT,15,5,BD_BOULDER,
	BD_DRAW_LINE,5,8,14,8,BD_FIREFLYl,
	BD_DRAW_POINT,15,8,BD_BOULDER,
	BD_DRAW_RECTANGLE,22,1,23,20,BD_AMOEBA,
	BD_DRAW_LINE,21,10,21,20,BD_WALL,
	BD_DRAW_FILLRECT2,24,1,38,20,BD_DIAMOND,BD_DIRT,
	BD_DRAW_RECTANGLE,18,10,20,12,BD_DIRT,
	BD_DRAW_POINT,19,11,BD_INBOX,
	BD_DRAW_POINT,1,10,BD_OUTBOX,

	// 5 (intermission)
	30,0,
	1,1,1,1,1,
	20,20,20,20,20,
	BD_COLOR_LIGHTBLUE,BD_COLOR_RED,BD_COLOR_WHITE,
	0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,4,
	BD_DRAW_FILLRECT2,5,2,11,8,BD_BOULDER,BD_FIREFLYl,
	BD_DRAW_POINT,8,5,BD_DIAMOND,
	BD_DRAW_POINT,3,3,BD_INBOX,
	BD_DRAW_POINT,2,10,BD_OUTBOX,

/*
Intermission=true
DiamondValue=30
DiamondsRequired=1 1 1 1 1
CaveTime=20 20 20 20 20
Colors=LightBlue Red White

FillRect=5 2 11 8 BOULDER FIREFLYl
Point=8 5 DIAMOND
Point=3 3 INBOX
Point=2 10 OUTBOX
*/

	20,40,
	5,8,10,10,10,
	30,30,30,30,30,
	BD_COLOR_BLUE,BD_COLOR_GRAY2,BD_COLOR_WHITE,
	30,31,32,33,34,
	BD_BOULDER,255,BD_DIAMOND,127,0,0,0,0,
	2,0,7,
	BD_DRAW_FILLRECT,1,7,38,20,BD_SPACE,
	BD_DRAW_FILLRECT,20,1,38,20,BD_DIRT,
	BD_DRAW_RASTER,1,5,19,3,1,2,BD_SLIME,
	BD_DRAW_LINE,1,18,19,18,BD_SLIME,
	BD_DRAW_LINE,1,20,19,20,BD_MAGICWALL,
	BD_DRAW_POINT,3,17,BD_INBOX,
	BD_DRAW_POINT,35,18,BD_OUTBOX,

/*
DiamondValue=20 40
DiamondsRequired=5 8 10 10 10
CaveTime=30 30 30 30 30
Colors=Blue Gray2 White
RandSeed=30 31 32 33 34
RandomFill=BOULDER 255 DIAMOND 127
MagicWallTime=2
SlimePermeability=0.125

FillRect=1 7 38 20 SPACE
FillRect=20 1 38 20 DIRT
Raster=1 5 19 3 1 2 SLIME
Line=1 18 19 18 SLIME
Line=1 20 19 20 MAGICWALL
Point=3 17 INBOX
Point=35 18 OUTBOX
*/

	5,80,
	30,40,32,32,42,
	200,200,200,200,200,
	BD_COLOR_BROWN,BD_COLOR_LIGHTRED,BD_COLOR_WHITE,
	10,11,12,13,14,
	BD_BOULDER,220,BD_DIAMOND,80,0,0,0,0,
	0,0,14,

	BD_DRAW_RECTANGLE,1,1,38,20,BD_DIRT,
	BD_DRAW_FILLRECT2,1,10,38,12,BD_DIRT,BD_WALL,
	BD_DRAW_FILLRECT,1,1,15,20,BD_DIRT,
	BD_DRAW_FILLRECT,25,1,38,20,BD_DIRT,
	BD_DRAW_LINE,14,2,14,19,BD_WALL,
	BD_DRAW_LINE,26,2,26,19,BD_WALL,
	BD_DRAW_POINT,1,2,BD_INBOX,
	BD_DRAW_POINT,2,5,BD_OUTBOX,
	BD_DRAW_FILLRECT,4,1,8,20,BD_SPACE,
	BD_DRAW_LINE,3,2,3,20,BD_STEELWALL,
	BD_DRAW_LINE,9,1,9,19,BD_STEELWALL,
	BD_DRAW_RASTER,5,3,3,6,1,3,BD_STEELWALL,
	BD_DRAW_RASTER,6,2,1,3,1,6,BD_FIREFLYl,
	BD_DRAW_RASTER,6,7,1,3,1,6,BD_FIREFLYr,
/*
DiamondValue=5 80
DiamondsRequired=30 40 32 32 42
CaveTime=200 200 200 200 200
Colors=Brown LightRed White
RandSeed=10 11 12 13 14
RandomFill=BOULDER 220 DIAMOND 80

Rectangle=1 1 38 20 DIRT
FillRect=1 10 38 12 DIRT WALL
FillRect=1 1 15 20 DIRT
FillRect=25 1 38 20 DIRT
Line=14 2 14 19 WALL
Line=26 2 26 19 WALL
Point=1 2 INBOX
Point=2 5 OUTBOX
FillRect=4 1 8 20 SPACE
Line=3 2 3 20 STEELWALL
Line=9 1 9 19 STEELWALL
Raster=5 3 3 6 1 3 STEELWALL
Raster=6 2 1 3 1 6 FIREFLYl
Raster=6 7 1 3 1 6 FIREFLYr
*/
	
	20,50,
	8,14,15,15,12,
	200,180,180,150,150,
	BD_COLOR_LIGHTRED,BD_COLOR_PURPLE,BD_COLOR_WHITE,
	10,11,15,13,14,
	BD_SPACE,120,BD_BOULDER,50,BD_FIREFLYl,15,BD_DIAMOND,9,
	0,0,9,

	BD_DRAW_RASTER,2,2,9,5,4,4,BD_WALL,
	BD_DRAW_RASTER,3,2,9,5,4,4,BD_WALL,
	BD_DRAW_FILLRECT2,11,4,23,13,BD_WALL,BD_SPACE,
	BD_DRAW_LINE,11,5,25,5,BD_BOULDER,
	BD_DRAW_LINE,11,6,25,6,BD_DIRT,
	BD_DRAW_RASTER,11,5,5,8,3,1,BD_WALL,
	BD_DRAW_RECTANGLE,0,0,39,21,BD_WALL,
	BD_DRAW_POINT,9,11,BD_INBOX,
	BD_DRAW_POINT,12,11,BD_OUTBOX,

/*
	BD_DRAW_ADD,0,1,BD_FIREFLYl,BD_BOULDER,
DiamondValue=20 50
DiamondsRequired=8 14 15 15 12
CaveTime=200 180 180 150 150
Colors=LightRed Purple White
RandSeed=10 11 15 13 14
RandomFill=SPACE 120 BOULDER 50 FIREFLYl 15 DIAMOND 9

Raster=2 2 9 5 4 4 WALL
Raster=3 2 9 5 4 4 WALL
Add=0 1 FIREFLYl BOULDER
FillRect=11 4 23 13 WALL SPACE
Line=11 5 25 5 BOULDER
Line=11 6 25 6 DIRT
Raster=11 5 5 8 3 1 WALL
Rectangle=0 0 39 21 STEELWALL
Point=9 11 INBOX
Point=12 11 OUTBOX
*/

/*
DiamondValue=5 10
DiamondsRequired=30 40 50 60 70
CaveTime=200 160 120 100 80
Colors=Green Brown White
AmoebaTime=120

Rectangle=2 2 13 9 SPACE
Raster=4 9 5 1 2 1 BUTTERFLYu
Raster=13 2 1 4 1 2 BUTTERFLYl
Raster=3 2 5 1 2 1 BUTTERFLYd
Line=20 1 20 15 WALL
Line=25 1 34 1 AMOEBA
Point=1 1 INBOX
Point=19 4 OUTBOX
*/


/*
Intermission=true
DiamondValue=10
DiamondsRequired=6 6 6 6 6
CaveTime=30 25 20 20 20
Colors=Blue Gray3 White

FillRect=3 3 5 5 SPACE DIAMOND
FillRect=8 3 10 5 SPACE DIAMOND
FillRect=13 3 15 5 SPACE DIAMOND
FillRect=3 7 5 9 SPACE DIAMOND
FillRect=8 7 10 9 SPACE DIAMOND
FillRect=13 7 15 9 SPACE DIAMOND
Raster=5 3 3 1 5 1 FIREFLYl
Raster=3 7 3 1 5 1 BUTTERFLYl
Point=1 2 INBOX
Point=18 10 OUTBOX
*/


/*
DiamondValue=5 50
DiamondsRequired=75 75 75 75 75
CaveTime=160 140 120 100 80
Colors=Gray1 Orange White

FillRect=1 1 38 20 SPACE
Raster=3 2 17 5 2 4 DIAMOND
Raster=4 2 17 5 2 4 DIRT
Raster=3 3 34 5 1 4 STEELWALL
Rectangle=12 1 13 8 SPACE
Rectangle=28 1 29 8 SPACE
Raster=4 1 1 5 1 4 FIREFLYl
Raster=20 1 1 5 1 4 FIREFLYl
Raster=36 1 1 5 1 4 FIREFLYl
FillRect=17 9 22 20 SPACE
Line=19 10 19 19 STEELWALL
Raster=20 10 1 5 1 2 DIAMOND
Raster=20 11 1 5 1 2 DIRT
Point=19 9 FIREFLYl
Point=1 13 INBOX
Point=38 13 OUTBOX
*/


/*
DiamondValue=5 10
DiamondsRequired=18 27 36 45 54
CaveTime=200 180 160 140 120
Colors=Blue Orange White
RandSeed=1 2 3 4 5
RandomFill=BOULDER 1

Raster=3 3 4 2 7 9 FIREFLYl
Raster=4 3 4 2 7 9 BUTTERFLYl
Raster=3 4 4 2 7 9 BOULDER
Raster=4 4 4 2 7 9 BOULDER
Point=7 10 INBOX
Point=30 15 OUTBOX
*/



/*
DiamondValue=15 30
DiamondsRequired=21 24 19 23 27
CaveTime=60 60 60 60 60
Colors=Orange LightBlue White
RandSeed=10 11 12 13 15
RandomFill=DIAMOND 15
MagicWallTime=2

Rectangle=1 1 38 20 DIRT
Line=1 1 25 1 FIREFLYl
Line=1 2 38 2 DIRT
Point=10 2 BOULDER
FillRect=9 3 11 5 WALL SPACE
Line=9 3 11 3 DIRT
Add=0 1 DIAMOND MAGICWALL
Point=10 3 INBOX
Point=35 18 OUTBOX
*/



/*
DiamondValue=15
DiamondsRequired=35 36 33 37 34
CaveTime=240 220 200 170 150
Colors=Brown LightRed White
RandSeed=12 8 7 9 11
RandomFill=BOULDER 90 DIAMOND 20

Raster=1 6 36 3 1 6 WALL
Raster=6 1 6 18 6 1 WALL
Raster=3 6 6 3 6 6 SPACE
Raster=6 3 6 3 6 6 SPACE
Line=38 1 38 20 DIRT
Line=1 20 38 20 DIRT
Point=21 3 INBOX
Point=37 6 OUTBOX
*/


/*
Intermission=true
DiamondValue=25 60
DiamondsRequired=2 2 2 2 2
CaveTime=30 25 20 20 20
Colors=Blue Orange White
InitialFill=SPACE

Line=3 1 11 9 FIREFLYl
Line=13 7 17 3 FIREFLYl
Raster=2 1 9 10 2 1 DIRT
Point=14 5 DIAMOND
Point=16 5 DIAMOND
Point=1 2 INBOX
Point=18 5 OUTBOX
*/



/*
DiamondValue=2 10
DiamondsRequired=1 20 20 40 50
CaveTime=200 200 200 200 180
Colors=Blue LightRed White
RandSeed=137 140 100 251 51
RandomFill=BOULDER 255 DIAMOND 127
SlimePermeability=1.0

FillRect=1 16 38 20 BOULDER
Raster=2 1 19 9 2 2 STEELWALL
Raster=2 2 19 9 2 2 DIRT
Line=1 18 38 18 SLIME
Rectangle=1 19 38 20 DIRT
Rectangle=37 1 38 20 DIRT
Point=2 19 INBOX
Point=2 13 OUTBOX
*/



/*
DiamondValue=20 1
DiamondsRequired=21 21 21 21 21
CaveTime=200 180 160 140 120
Colors=Brown Orange White
RandSeed=15 16 17 18 19
RandomFill=BOULDER 60

Rectangle=1 1 38 20 SPACE
Rectangle=2 2 37 13 DIRT
FillRect=1 14 38 20 SPACE
Raster=1 19 9 1 2 1 FIREFLYl
Raster=1 20 19 1 2 1 FIREFLYl
FillRect=19 14 21 20 DIRT SPACE
Raster=5 2 7 3 5 4 DIAMOND
Point=20 17 INBOX
Point=20 19 OUTBOX
*/


/*
DiamondValue=10
DiamondsRequired=36 36 36 36 36
CaveTime=200 150 133 125 120
Colors=LightBlue LightRed White
MagicWallTime=10

FillRect=3 6 9 12 DIRT SPACE
Point=4 8 BUTTERFLYl
Point=6 5 BOULDER
FillRect=12 6 18 15 WALL DIRT
Line=12 16 18 16 WALL
FillRect=13 7 17 11 SPACE
Line=13 6 17 6 DIRT
Raster=12 6 4 1 2 1 HEXPANDINGWALL
Point=13 8 BUTTERFLYl
Point=15 7 DIRT
Point=15 6 BOULDER
FillRect=19 8 28 16 SPACE
FillRect=21 9 27 15 DIRT SPACE
Line=20 9 27 9 WALL
Point=22 11 BUTTERFLYl
Point=24 1 BOULDER
Point=24 3 BOULDER
FillRect=30 6 36 12 DIRT SPACE
Point=31 8 BUTTERFLYl
Point=30 7 BOULDER
Line=30 12 36 12 MAGICWALL
Line=30 13 36 13 MAGICWALL
Point=3 18 INBOX
Point=38 3 OUTBOX
*/



/*
DiamondValue=10 40
DiamondsRequired=20 15 17 15 20
CaveTime=200 200 200 200 200
Colors=Brown LightRed White
RandSeed=10 11 12 13 14
RandomFill=SPACE 189 BOULDER 179 DIAMOND 19

Rectangle=1 1 38 20 DIRT
Point=3 2 INBOX
Point=20 11 OUTBOX
*/



/*
Intermission=true
DiamondValue=10 20
DiamondsRequired=1 1 1 1 1
CaveTime=20 20 20 20 20
Colors=Blue Orange White

FillRect=6 5 8 7 SPACE BOULDER
FillRect=10 2 12 4 SPACE DIAMOND
Point=12 2 FIREFLYl
Point=2 1 INBOX
FillRect=10 8 12 10 FIREFLYl OUTBOX
Line=12 8 12 10 STEELWALL
*/


};

#endif
