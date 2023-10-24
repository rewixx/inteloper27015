#include "include/head.h"
//TODO: MAKE main LOOK BETTER
sprite* spri = new sprite(0,5,32,32);

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
    
    // the GAMELOOP :
    
    spri->load_texture(renderer,"include/assets/test_texture.png");

    while(is_running){
    SDL_Event event;

//    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
 //   SDL_RenderClear(renderer);
     SDL_RenderClear(renderer);

    
     while(SDL_PollEvent(&event)){

	     if(event.type == SDL_QUIT){

		      is_running=false;
	     };
	  };
    spri->render(renderer);

	  SDL_RenderPresent(renderer);

    };
    
    
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    delete spri;
    return 0;
};
