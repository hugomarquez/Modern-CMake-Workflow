# Find required package/framework for testing
# In this case I'll be using Catch2
find_package(Catch2 REQUIRED)

# Create main test executable
add_executable(Test Test.cpp)

# Link with pn-system library
target_link_libraries(Test PRIVATE pn-system)

# Link with Catch2 testing framework
if(Catch2_FOUND)
  message("-- [TEST]: Required library Catch2 found!")
  set(Catch2_test_util "${Catch2_LIB_DIRS}/cmake/Catch2")
  target_link_libraries(Test PRIVATE Catch2::Catch2)
endif(Catch2_FOUND)

include(CTest)
include(${Catch2_test_util}/Catch.cmake)
catch_discover_tests(Test)
