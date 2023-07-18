/**
 * @file menubar.cpp
 * @author Subhash Chandra
 * @brief 
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */


/******************************************************
 * User Defined includes
 *****************************************************/
#include "menubar.hpp"
#include "constants.hpp"


/******************************************************
 * Global declarations
 *****************************************************/

// initialize menu shape of the 
sf::RectangleShape Menubar::m_menu;
sf::Texture Menubar::m_menu_texture;

/******************************************************
 * Member Functions
 *****************************************************/

/**
 * @brief Construct a new Menubar object
 *        initializes the position of the menubar on window
 * @param window_size size of the current rendered window
 */
Menubar::Menubar(const sf::Vector2u window_size)
{
  // initialize the position of menubar
  m_menu.setPosition(0.0f, 0.0f);

  // set the color of menubar
  sf::Color menu_color(
    CONSTANTS::MENUBAR_COLOR_R,
    CONSTANTS::MENUBAR_COLOR_G,
    CONSTANTS::MENUBAR_COLOR_B
  );
  m_menu.setFillColor(menu_color);

  // set the size of menubar
  m_menu.setSize(sf::Vector2f{
    window_size.x * 1.0f,
    CONSTANTS::MENU_HEIGHT
  });

  // // set texture
  // m_menu.setTexture(&m_menu_texture);
}

/**
 * @brief updates the view of menubar for next window display
 * @param window_size size of the current rendered window
 */
void
Menubar::update(const sf::Vector2u window_size) noexcept
{
  // update the size of menubar
  m_menu.setSize(sf::Vector2f{
    static_cast<float>(window_size.x),
    CONSTANTS::MENU_HEIGHT
  });
}


/**
 * @brief draws the Menubar on the text editor
 * @param window  instance of text editor window
 */
void
Menubar::draw(sf::RenderWindow& window) noexcept
{
  window.draw(m_menu);
}
