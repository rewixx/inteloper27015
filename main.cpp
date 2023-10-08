#include "include/head.h"
//TODO: MAKE main LOOK BETTER
int main(int argc, char* argv[])
{
    //making the window 
    //dose the init work??
    if(SDL_Init(SDL_INIT_EVERYTHING)<0){
	    std::cout<< "SDL is " <<SDL_GetError() <<"\n";
    }

    SDL_Window* window=nullptr;
    SDL_Renderer* renderer=nullptr;
    bool is_running=true;
    //defines the window 
    window = SDL_CreateWindow(WINDOW_NAME,
		    0,
		    0,
		    WIDTH*PIXEL_SIZE,
		    HEIGTH*PIXEL_SIZE,
		    SDL_WINDOW_MAXIMIZED);

    renderer =SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
   
    SDL_RenderSetScale(renderer,PIXEL_SIZE,PIXEL_SIZE);

    // the GAMELOOP :
    while(is_running){
    SDL_Event event;	

     while(SDL_PollEvent(&event)){

	     if(event.type == SDL_QUIT){

		      is_running=false;
	     };
	  };

	  SDL_RenderPresent(renderer);

    };
    
    
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
};
