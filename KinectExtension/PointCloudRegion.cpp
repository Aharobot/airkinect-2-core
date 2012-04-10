#include "PointCloudRegion.h"

#ifdef AIRKINECT_OS_WINDOWS
    #include "stdafx.h"
#else
    #include <iostream>
#endif

PointCloudRegion::PointCloudRegion()
{
}

void PointCloudRegion::setProperties(unsigned int regionId, double x, double y, double z, double width, double height, double depth)
{
    this->regionId = regionId;
    this->x = x;
    this->y = y;
    this->z = z;
    this->width = width;
    this->height = height;
    this->depth = depth;
    
    maxX = x + width;
    maxY = y + height;
    maxZ = z + depth;
}
