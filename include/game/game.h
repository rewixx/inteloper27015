class game
{
  private:
    SDL_Window* window=nullptr;
    SDL_Renderer* renderer=nullptr;
    bool is_runnig;
  public:
    game(int x, int y, int w, int h, char* name, int pixel_size);
    
    void init();
    void update();
    void render();
    void handleEvents();
   
    bool runnig();
    ~game();
};
