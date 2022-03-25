/**
 * @file main.cpp
 * @author Hugo Marquez
 * @brief The main executable
 * @version 0.0.1
 * @date 2022-03-24
 * 
 * @copyright Copyright (c) 2022
 */

#include "version.h"

// Include system module's logger
#include <pn/system/Logger.h>

int main(int argc, char const *argv[]) {
  pn::Logger::setLevel(1);
  pn::Logger::info(PN_INFO);
  pn::Logger::debug("This is a debug log");
  pn::Logger::warn("Beware of this log!");
  pn::Logger::error("Oops something went wrong!");
  pn::Logger::critical("I'm ded :(");
  return 0;
}
