# Create a shared library and include the sources
add_library(pn-system SHARED 
  Logger.cpp
)

# Dependencies and compilation flags for this library
# Find spdlog
find_package(spdlog REQUIRED)
if(spdlog_FOUND)
  message(STATUS "[SYSTEM][BUILD]: Required library spdlog found!")

  # Link to the boost library as a private dependency, this means
  # that if another module links to the pn-system library it 
  # won't be able to access the boost library.
  target_link_libraries(pn-system PRIVATE spdlog::spdlog)
endif(spdlog_FOUND)

# Include the header files as public and everything else as private
# This means that if another module wants to link to this library
# it will only be able to access our public headers (./include/pn/system/)
# everything else will remain private.
target_include_directories(pn-system 
  PUBLIC include
  PRIVATE .
)
