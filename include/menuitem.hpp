/**
 * @file menuitem.hpp
 * @author Subhash Chandra
 * @brief 
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef MENUITEM_HPP
#define MENUITEM_HPP

/******************************************************
 * Library includes
 *****************************************************/
#include <SFML/Graphics.hpp>


/******************************************************
 * Class Declarations
 *****************************************************/
/**
 * @brief Class to provide menu options in 
 *        the text editor, positioned in menu bar
 */
class MenuItem
{
private:
  sf::Sprite sprite;

  bool m_isActive;

public:
  /**
   * @brief updates the view of the menu item
   * 
   */
  virtual void update() noexcept;

  /**
   * @brief udraws the menu item on display buffer
   * 
   */
  virtual void draw(sf::RenderWindow& window) noexcept;

}

#endif // MENUITEM_HPP