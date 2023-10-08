#include "texture_manager.h"

SDL_Texture* texture_manager::load_texture(const char* filename,SDL_Renderer* renderer)
{
  SDL_Surface* tmp_surface =IMG_Load(filename);
  SDL_Texture* tex=SDL_CreateTextureFromSurface(renderer,tmp_surface);
  SDL_FreeSurface(tmp_surface);
  
  return tex;
};
