#pragma once

/**
 * @file Logger.h
 * @author Hugo Marquez
 * @brief Simple wrapper around spdlog
 * @version 0.0.1
 * @date 2022-03-24
 * 
 * @copyright Copyright (c) 2022
 */

/**
 * Notice we didn't include the spdlog library here,
 * it was included in the source file so we can make it a
 * private dependancy.
 * 
 * If you include a header of a dependency on a public library header,
 * then that dependency needs to be declared public as well.
 **/

#include <string>

namespace pn {
  class Logger {
    public:
      // Singleton Manager
      static Logger *getInstance()
      {
        if (instance == nullptr) {
          instance = new Logger();
          return instance;
        }
        return instance;
      }
      
      static void setLevel(int level);
      static void debug(std::string msg);
      static void info(std::string msg);
      static void warn(std::string msg);
      static void error(std::string msg);
      static void critical(std::string msg);
    
    private:
      Logger(){ setLevel(1);}
      static Logger *instance;
  };
}
