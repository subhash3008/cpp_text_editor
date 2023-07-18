/**
 * @file main.cpp
 * @author Subhash Chandra
 * @brief Contains main function to initiate the app run
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/******************************************************
 * Libray includes
 *****************************************************/
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

/******************************************************
 * User Defined includes
 *****************************************************/
#include "constants.hpp"
#include "menubar.hpp"

/**
 * @brief Main Function to initiate the app run
 *
 * @return int 
 */
int main()
{
  std::cout << "Welcome to Text Editor.." << std::endl;

  // Window object to render the text editor window
  sf::RenderWindow window{
    sf::VideoMode(1280, 720),
    "SC Notepad"
  };

  // set the frame rate of window display update
  window.setFramerateLimit(60);

  // create the background color for the text editor
  sf::Color bg_color(
    CONSTANTS::BG_COLOR_R,
    CONSTANTS::BG_COLOR_G,
    CONSTANTS::BG_COLOR_B
  );

  // create Menubar
  Menubar the_menu(window.getSize());

  // loop to handle everything till the window stays open
  while (window.isOpen())
  {
    window.clear(bg_color);
    sf::Event event;

    // Process the user events
    while (window.pollEvent(event))
    {
      switch(event.type)
      {
        // if the window is closed
        case sf::Event::Closed:
        {
          window.close();
          break;
        }
        // if the window is resized
        case sf::Event::Resized:
        {
          std::cout << "Windows width change to:: " << window.getSize().x << std::endl;
          std::cout << "Windows height change to:: " << window.getSize().y << std::endl;
          window.setView(sf::View(sf::FloatRect(0, 0, event.size.width, event.size.height)));
          break;
        }
        default:
        // do nothing
          break;
      }
    }

    // update the text editor components
    the_menu.update(window.getSize());

    // Display the drawn buffers on window
    the_menu.draw(window);

    window.display();
  }

  return 0;
}