#include "sprite.h"

sprite::sprite(int x,int y,int w,int h)
{
  this->pos.x=x,this->pos.y=y;
  this->scale.x=w,this->scale.y=h;
  m_texture= nullptr;
  m_box = new SDL_Rect;

  m_box->x=this->pos.x;
  m_box->y=this->pos.y;
  m_box->h=this->scale.x;
  m_box->w=this->scale.y;
};

sprite::~sprite()
{ 
  delete m_box;
  SDL_DestroyTexture(m_texture);
};

void sprite::load_texture(SDL_Renderer *renderer, const char* filename)
{
  texture_manager::load_texture(filename,renderer);
};

void sprite::render(SDL_Renderer* renderer)
{
  texture_manager::Draw(this->m_texture,this->m_box,renderer);
};
