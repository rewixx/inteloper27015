class texture_manager
{
  public:
    static SDL_Texture* load_texture(const char* filename,SDL_Renderer* renderer);

    static void Draw(SDL_Texture *tex,SDL_Rect *dest,SDL_Renderer *renderer);
};
