//cpp libs
#include<iostream>

//sdl stuff
#include<SDL2/SDL.h>

//my stuff

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
    window = SDL_CreateWindow("SDL Templete",
		    0,
		    0,
		    100*5,
		    100*5,
		    SDL_WINDOW_RESIZABLE);

    renderer =SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
   
    SDL_RenderSetScale(renderer,5,5);
    
    while(is_running){
	SDL_Event event;
	while(SDL_PollEvent(&event))
	{
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
