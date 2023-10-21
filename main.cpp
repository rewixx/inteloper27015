#include "include/head.h"
//TODO: MAKE main LOOK BETTER

int main()
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
    
    SDL_Texture *tex;
    sprite* spri = new sprite(0,5,32,32);
    // the GAMELOOP :
    tex=texture_manager::load_texture("include/assets/test_texture.png",renderer);
    
    spri->load_texture(renderer,tex);

    while(is_running){
    SDL_Event event;

    
     while(SDL_PollEvent(&event)){

	     if(event.type == SDL_QUIT){

		      is_running=false;
	     };
	  };
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    spri->render(renderer);

	  SDL_RenderPresent(renderer);
    
    };
    
    
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    delete spri;
    return 0;
};
