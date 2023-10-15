#include "game.h"
#include "../texture_manager/texture_manager.cpp"

SDL_Texture *tex;
game::game(int x, int y, int w, int h, char* name ,int pixel_size)
{
        //making the window 
    //dose the init work??
    if(SDL_Init(SDL_INIT_EVERYTHING)<0){
	    std::cout<< "SDL is " <<SDL_GetError() <<"\n";
      is_runnig=false;
    }

    window=nullptr;
    renderer=nullptr;
    window = SDL_CreateWindow(name,
		    x,
		    y,
		    w*pixel_size,
		    h*pixel_size,
		    SDL_WINDOW_MAXIMIZED);

    renderer =SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
   
    SDL_RenderSetScale(renderer,pixel_size,pixel_size);
    is_runnig=true;
    texture_manager tex_man; 
    tex=tex_man.load_texture("test_texture.png",renderer);
    std::cout<<tex<<'\n'; 
   
};

game::~game()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
};

void game::init()
{

};

void game::handleEvents()
{
  SDL_Event event;	
  SDL_PollEvent(&event);
  switch(event.type){
    case SDL_QUIT:
        is_runnig=false;
        break;

    default:
        break;
	};

};

void game::update()
{
  
};

void game::render()
{
 // SDL_Texture *tex;
  //tex=texture_manager::load_texture("../assets/test_texture.png",renderer);
  SDL_RenderClear(renderer);

  SDL_RenderCopy(renderer,tex,nullptr,nullptr);

  //place to put the rendering code
  SDL_RenderPresent(renderer);
};

bool game::runnig()
{
  return is_runnig;
};
