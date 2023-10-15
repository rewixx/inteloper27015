#include "include/head.h"
//TODO: MAKE main LOOK BETTER
game *Game= new game(0,0,WIDTH,HEIGTH,WINDOW_NAME,PIXEL_SIZE);
int main(int argc, char* argv[])
{
  Game->init();
  while(Game->runnig())
  {

    Game->handleEvents();
    Game->update();
    Game->render();
  }; 
  return 0;
};
