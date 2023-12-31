/**
 * @file constants.hpp
 * @author Subhash Chandra
 * @brief 
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

#include <vector>
#include <string>

struct CONSTANTS
{
  // background color for text editor
  static constexpr int BG_COLOR_R = 40;
  static constexpr int BG_COLOR_G = 42;
  static constexpr int BG_COLOR_B = 54;

  // Menu bar size
  static constexpr float MENU_HEIGHT = 30.0f;

  // Menu bar color for text editor
  static constexpr int MENUBAR_COLOR_R = 61;
  static constexpr int MENUBAR_COLOR_G = 71;
  static constexpr int MENUBAR_COLOR_B = 90;

  // count of total menu items
  static constexpr int MENUITEMS_COUNT = 3;

  // width of the menu item
  static constexpr float MENUITEM_WIDTH = 30.0f;
};


#endif // CONSTANTS_HPP