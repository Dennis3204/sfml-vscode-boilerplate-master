// HI Ms. Garnier. THERE ARE CITATIONS AT THE BOTTOM OF THE CODE WITH THE CORRESPONDING NUMBERS AT THE LINE IT WAS USED
#include <iostream>
#include "platform/Platform.hpp"

int main() {
	util::Platform platform;

#if defined(_DEBUG)
	std::cout << "Hello World!" << std::endl;
#endif

	/*this creates the window passing certain perameters into it
		1) videomode sets the length and width of the window
		2) the second parameter is the title of the program in the header of the window
		3) the "Style" are different set templates of a window (default would be one with resizing, minimizing, and a
		close button), where titlebar is just the title bar.
		4) because we only put a title bar (I chose title bar so that the player doesn't mess up the sizing of the window)
		we have to also add a close button using "sf::Style::Close"

		We can use | to pass both titlebar and close into the function
	    ↓	↓	↓	↓	↓	↓	↓	↓	↓	↓	↓	↓	↓	↓	↓   ↓     */

    sf::RenderWindow window(sf::VideoMode(1920,1080),"Dots and Boxes!", sf::Style::Default); // Init window (1)


	sf::Event event; //sfml constantly looks for events that occur with the computer and this event data type captures that

	sf::View view;
	view.setSize(1920.f,1080.f);
	view.setCenter(window.getSize().x/2,window.getSize().y/2);


	//game loop
	while (window.isOpen()){
	  //window.isOpen checks if the created winodw is open or not

	  while (window.pollEvent(event)) {
		//window.pollevent is to check if the code registers an event using the event data type i created "ev"

		switch (event.type)
		{
		  //use this to check the event type (2) (lines 31-50 use this)

		  case sf::Event::Closed: //you'd think that the x button created
		  	window.close(); //this closes the window
			break;

			// we don't process other types of events
          default:
            break;

		}

		if (event.type == sf::Event::MouseButtonPressed) {

    	  if (event.mouseButton.button == sf::Mouse::Right) {
        	std::cout << "the right button was pressed" << std::endl;
        	std::cout << "mouse x: " << event.mouseButton.x << std::endl;
        	std::cout << "mouse y: " << event.mouseButton.y << std::endl;
    	  }
		}

	    else if (event.type == sf::Event::MouseMoved) {

		  std::cout << "mouse y:" << event.mouseMove.y << "  mouse x:" << event.mouseMove.x << std::endl;

    	}

	}

	//this renders
	window.clear();
	window.setView(view); // (3)


	window.setView(window.getDefaultView()); // (4) this will reset the view to the default view at the end of the drawing and the render game elemnts

	//Render UI
	window.display();

   }
	return 0;
}
/*

1)

2) https://www.sfml-dev.org/tutorials/2.5/window-events.php

3) https://www.sfml-dev.org/tutorials/2.5/graphics-view.php and https://www.youtube.com/watch?v=h8LtwbS-1p0&ab_channel=SurajSharma

4) ^ (same one as above)

5)

6)

7)


*/