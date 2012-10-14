/*
 * Copyright 2012 AS3NUI
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */
#ifndef KinectExtension_AKUtilityFunctions_h
#define KinectExtension_AKUtilityFunctions_h

#ifdef AIRKINECT_OS_WINDOWS
    #include "FlashRuntimeExtensions.h"
#else
    #include <Adobe AIR/Adobe AIR.h>
#endif

unsigned int createUnsignedIntFromFREObject(FREObject freObject);
double createDoubleFromFREObject(FREObject freObject);
bool createBoolFromFREObject(FREObject freObject);

FREObject createFREObjectForUTF8(const char* str);
FREObject createFREObjectForUnsignedInt(unsigned int i);
FREObject createFREObjectForDouble(double d);
FREObject createFREObjectForBool(bool b);

#ifdef AIRKINECT_TARGET_MSSDK
NUI_IMAGE_RESOLUTION getNuiImageResolutionForGivenWidthAndHeight(int width, int height);
#endif

#endif