#pragma once

/**
 * @file version.h
 * @author Hugo Marquez
 * @brief Project description and version
 * @version 0.0.1
 * @date 2022-03-24
 * 
 * @copyright Copyright (c) 2022
 */

#include <string>

#define PN_VERSION_MAJOR 0
#define PN_VERSION_MINOR 0
#define PN_VERSION_PATCH 1

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

#define PN_VERSION "v" TOSTRING(PN_VERSION_MAJOR) "." TOSTRING(PN_VERSION_MINOR) "." TOSTRING(PN_VERSION_PATCH)
#define PN_NAME "Project Name"
#define PN_DESCRIPTION "Project Description"
#define PN_COPYRIGHT "http://hugomarquez.mx \t (C) 2022"

#define PN_INFO "\n" PN_NAME ": " PN_DESCRIPTION "\n" PN_VERSION "\n" PN_COPYRIGHT "\n"