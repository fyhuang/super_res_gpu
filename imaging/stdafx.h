// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers



// reference additional headers your program requires here
#include <stdio.h>

#include <cassert>
#include <cmath>
#include <memory>
#include <vector>
#include <algorithm>

#pragma warning(push)
#pragma warning(disable : 4819)
#include <opencv2/opencv.hpp>
#pragma warning(pop)