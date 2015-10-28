
#include "SDL.h"
#include "sdl_util.h"


static SDL_Window* window;
static SDL_Renderer* renderer;
static SDL_Texture* texture;
static int initialized = 0;
static int fpsMill;
static int row;

static void SetSDLIcon(SDL_Window* window)
{
	// this will "paste" the struct my_icon into this function
#include "bd_icon.c"

	// these masks are needed to tell SDL_CreateRGBSurface(From)
	// to assume the data it gets is byte-wise RGB(A) data
	Uint32 rmask, gmask, bmask, amask;
#if SDL_BYTEORDER == SDL_BIG_ENDIAN
	int shift = (bd_icon.bytes_per_pixel == 3) ? 8 : 0;
	rmask = 0xff000000 >> shift;
	gmask = 0x00ff0000 >> shift;
	bmask = 0x0000ff00 >> shift;
	amask = 0x000000ff >> shift;
#else // little endian, like x86
	rmask = 0x000000ff;
	gmask = 0x0000ff00;
	bmask = 0x00ff0000;
	amask = (bd_icon.bytes_per_pixel == 3) ? 0 : 0xff000000;
#endif

	SDL_Surface* icon = SDL_CreateRGBSurfaceFrom((void*)bd_icon.pixel_data, bd_icon.width,
			bd_icon.height, bd_icon.bytes_per_pixel*8, bd_icon.bytes_per_pixel*bd_icon.width,
			rmask, gmask, bmask, amask);
	SDL_SetWindowIcon(window, icon);

	SDL_FreeSurface(icon);
}

void sdl_init(int h, int v,const char* title, int fps)
{
	SDL_EnableScreenSaver();
	window = SDL_CreateWindow( title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, h,v, SDL_WINDOW_SHOWN );
	SetSDLIcon(window);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED| SDL_RENDERER_PRESENTVSYNC);
	texture = SDL_CreateTexture(renderer,SDL_PIXELFORMAT_ARGB8888,SDL_TEXTUREACCESS_STREAMING,h,v);
	fpsMill = 1000/fps;
	initialized=1;
	row=h;
};

void sdl_deinit(void)
{
	initialized=0;
	SDL_DestroyTexture(texture);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}
		
//static int current_time;

void sdl_loop(const void* pixels)
{
	
	SDL_UpdateTexture(texture, NULL, pixels, row * sizeof(Uint32));//update only the updated rects
//	SDL_RenderClear(renderer);//neccessary?
	SDL_RenderCopy(renderer, texture, NULL, NULL);
	SDL_RenderPresent(renderer);
}

