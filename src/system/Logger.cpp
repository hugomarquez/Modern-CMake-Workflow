/**
 * @file Logger.cpp
 * @author Hugo Marquez
 * @brief Simple wrapper around spdlog
 * @version 0.0.1
 * @date 2022-03-24
 * 
 * @copyright Copyright (c) 2022
 */

// Include our public library header
#include <pn/system/Logger.h>

/**
 * Notice we included spdlog here instead of the Logger header, 
 * this is because we want to make it a private dependency
 **/
#include <spdlog/spdlog.h>
#include "spdlog/sinks/stdout_color_sinks.h"

namespace pn {
  Logger* Logger::instance = 0;

  void Logger::setLevel(int level)
  {
    switch (level) {
      case 1: spdlog::set_level(spdlog::level::debug); break;
      default: spdlog::set_level(spdlog::level::debug); break;
    }
  }

  void Logger::debug(std::string msg) { spdlog::debug(msg);}
  void Logger::info(std::string msg) { spdlog::info(msg);}
  void Logger::warn(std::string msg) { spdlog::warn(msg);}
  void Logger::error(std::string msg) { spdlog::error(msg);}
  void Logger::critical(std::string msg) { spdlog::critical(msg);}
}