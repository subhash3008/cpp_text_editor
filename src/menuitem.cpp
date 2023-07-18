/**
 * @file menuitem.cpp
 * @author Subhash Chandra
 * @brief defines the menuitem class functions
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/******************************************************
 * User Defined includes
 *****************************************************/
#include "menuitem.hpp"

/******************************************************
 * Global declarations
 *****************************************************/

// initialize texture and sprite for menu item
sf::Texture MenuItem::m_texture;
sf::Sprite MenuItem::m_sprite;

// intitialize the id counter for the items
int MenuItem::m_id_counter = 0;


/******************************************************
 * Member functions
 *****************************************************/

/**
 * @brief Construct a new MenuItem object
 *
 */
MenuItem::MenuItem(const std::string icon_path, const sf::Vector2f item_pos)
{
  // assign the item with an ID
  m_id = m_id_counter++;

  // Initialize texture and sprite with input data
  m_texture.loadFromFile(icon_path);
  m_sprite.setTexture(m_texture);

  // set the position of the icon
  m_sprite.setPosition(item_pos);

  // fill color
  m_sprite.setColor(sf::Color::White);
}

/**
 * @brief updates the view of the menu item
 * 
 */
void
MenuItem::update() noexcept
{
  // do nothing
}

/**
 * @brief udraws the menu item on display buffer
 * 
 */
void
MenuItem::draw(sf::RenderWindow& window) noexcept
{
  window.draw(m_sprite);
}