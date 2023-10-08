#include "../vec2/vec2.cpp"
#include "../texture_manager/texture_manager.cpp"
class sprite 
{
  public:
    vec2<float> pos;
    float dir;
    
    SDL_Texture* m_texture;
    
    //animation suff
    int anim_idx;
    
    //the timer must be reset to zero
    int anim_timer;

  public:
      
};

