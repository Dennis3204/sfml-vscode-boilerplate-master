#include "Platform/Platform.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/system.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"

//this class acts as the "Game Engine"

class Game {

	private:

      //variables



	  int x;
	  int u1;
	  void makeVariables();
	  void startWindow();

	public:
	  //constructors and destructors
	  Game();
	  virtual ~Game();

	  void update();
	  void render();

};

