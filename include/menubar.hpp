/**
 * @file menubar.hpp
 * @author Subhash Chandra
 * @brief 
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef MENUBAR_HPP
#define MENUBAR_HPP

/******************************************************
 * User Defined includes
 *****************************************************/
#include <SFML/Graphics.hpp>


/******************************************************
 * Class Declarations
 *****************************************************/
/**
 * @brief Menubar class to display the menu items on
 *        on top end of the text edtor
 */
class Menubar
{
private:
  // shape object to hold menu bar in the editor
  static sf::RectangleShape m_menu;
  static sf::Texture m_menu_texture;

public:
  /**
   * @brief Construct a new Menubar object
   *        initializes the position of the menubar on window
   * @param window_size size of the current rendered window
   */
  Menubar(const sf::Vector2u window_size);

  /**
   * @brief updates the view of menubar for next window display
   * @param window_size size of the current rendered window
   */
  void update(const sf::Vector2u window_size) noexcept;

  /**
   * @brief draws the Menubar on the text editor
   * @param window  instance of text editor window
   */
  void draw(sf::RenderWindow& window) noexcept;
};

#endif // MENUBAR_HPP
