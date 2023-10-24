#include "../vec2/vec2.cpp"

class sprite
{
  private:
    SDL_Texture *m_texture;
    SDL_Rect * m_box; //controlling the position and width and heigth
  
  public:
    //cords are in screen space 
    vec2<int> pos;
    vec2<int> scale; //<width, heigth>

  public:
   sprite(int x,int y,int w,int h);
   void load_texture(SDL_Renderer* renderer, const char* filename);
   void render(SDL_Renderer* renderer);

   ~sprite();
};
