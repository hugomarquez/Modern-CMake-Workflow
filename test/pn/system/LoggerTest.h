/**
 * @file LoggerTest.h
 * @author Hugo Marquez
 * @brief Teststing our logger interface
 * @version 0.0.1
 * @date 2022-03-24
 * 
 * @copyright Copyright (c) 2022
 */

#include <string>
#include <catch2/catch.hpp>
#include <pn/system/Logger.h>

using namespace pn;

TEST_CASE("pn::Logger", "[System]") {
  
  SECTION("#getInstance()") {

    // Singleton pattern, shouldn't return 0
    REQUIRE(Logger::getInstance() != 0);
  }
}
