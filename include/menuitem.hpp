/**
 * @file menuitem.hpp
 * @author Subhash Chandra
 * @brief Declares class for menu item to be used in menu bar
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
#include <string>

/******************************************************
 * Global Declarations
 *****************************************************/


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
  // texture and sprite to hold the menu item icon
  static sf::Texture m_texture;
  static sf::Sprite m_sprite;

  static int m_id_counter;

  int m_id;
  bool m_isActive;

public:

  /**
   * @brief Construct a new MenuItem object
   *
   */
  MenuItem(const std::string icon_path, const sf::Vector2f item_pos);

  /**
   * @brief updates the view of the menu item
   * 
   */
  void update() noexcept;

  /**
   * @brief udraws the menu item on display buffer
   * 
   */
  void draw(sf::RenderWindow& window) noexcept;

  /**
   * @brief function to check if current menu item is active
   * 
   */
  bool isItemActive();

};

#endif // MENUITEM_HPP