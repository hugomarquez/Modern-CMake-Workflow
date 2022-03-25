# Add modules
add_subdirectory(system)

# Create our main executable
add_executable(main main.cpp)

# Link privately our main executable with our shared libraries
target_link_libraries(main PRIVATE pn-system)
