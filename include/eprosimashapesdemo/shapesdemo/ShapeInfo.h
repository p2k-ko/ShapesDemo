// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file Shape.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _SHAPEINFO_H_
#define _SHAPEINFO_H_

#include <fastrtps/rtps/common/Time_t.h>
#include <fastrtps/rtps/common/Guid.h>
#include <fastrtps/rtps/common/InstanceHandle.h>

#include <cstdint>
#include <sstream>
#include <QString>

#include "ShapeDefinitions.h"
#include "ShapePubSubTypes.h"

using namespace eprosima::fastrtps;
using namespace eprosima::fastrtps::rtps;

class Shape
{
    public:

        Shape() : m_strength(0), m_hasOwner(true),
        m_dirX(0), m_dirY(0), m_changeDir(true) {}

        virtual ~Shape() {}

        void define(SD_COLOR color = SD_BLUE, uint32_t x = 30,
                uint32_t y = 30, uint32_t size = 30)
        {
            m_shape.color(getColorStr(color));
            m_shape.x(x);
            m_shape.y(y);
            m_shape.shapesize(size);
            m_strength = 0;
        }

        ShapeType m_shape;
        TYPESHAPE m_type;
        Time_t m_time;
        GUID_t m_writerGuid;
        uint32_t m_strength;
        bool m_hasOwner;
        float m_dirX;
        float m_dirY;
        bool m_changeDir;
};

typedef std::pair<SD_COLOR, InstanceHandle_t> colorPair;

class ColorInstanceHandle
{
public:
    colorPair PurpleIH;
    colorPair BlueIH;
    colorPair RedIH;
    colorPair GreenIH;
    colorPair YellowIH;
    colorPair CyanIH;
    colorPair MagentaIH;
    colorPair OrangeIH;
    colorPair GrayIH;
    colorPair BlackIH;
    ShapeTypePubSubType m_topic;
    ColorInstanceHandle()
    {
        Shape shape;
        shape.define(SD_PURPLE);
        m_topic.getKey((void*)&shape.m_shape, &PurpleIH.second);
        shape.define(SD_BLUE);
        m_topic.getKey((void*)&shape.m_shape, &BlueIH.second);
        shape.define(SD_RED);
        m_topic.getKey((void*)&shape.m_shape, &RedIH.second);
        shape.define(SD_GREEN);
        m_topic.getKey((void*)&shape.m_shape, &GreenIH.second);
        shape.define(SD_YELLOW);
        m_topic.getKey((void*)&shape.m_shape, &YellowIH.second);
        shape.define(SD_CYAN);
        m_topic.getKey((void*)&shape.m_shape, &CyanIH.second);
        shape.define(SD_MAGENTA);
        m_topic.getKey((void*)&shape.m_shape, &MagentaIH.second);
        shape.define(SD_ORANGE);
        m_topic.getKey((void*)&shape.m_shape, &OrangeIH.second);
        shape.define(SD_GRAY);
        m_topic.getKey((void*)&shape.m_shape, &GrayIH.second);
        shape.define(SD_BLACK);
        m_topic.getKey((void*)&shape.m_shape, &BlackIH.second);
        //        cout << PurpleIH.second << endl;
        //        cout << BlueIH.second << endl;
        //        cout << RedIH.second<<endl;
    }
    ~ColorInstanceHandle()
    {

    }
};


const ColorInstanceHandle c_ShapesHandles;


inline SD_COLOR getColorFromInstanceHandle(InstanceHandle_t& iHandle)
{
    if(iHandle == c_ShapesHandles.BlueIH.second)
    {
        return SD_BLUE;
    }
    if(iHandle == c_ShapesHandles.PurpleIH.second)
    {
        return SD_PURPLE;
    }
    if(iHandle == c_ShapesHandles.RedIH.second)
    {
        return SD_RED;
    }
    if(iHandle == c_ShapesHandles.MagentaIH.second)
    {
        return SD_MAGENTA;
    }
    if(iHandle == c_ShapesHandles.OrangeIH.second)
    {
        return SD_ORANGE;
    }
    if(iHandle == c_ShapesHandles.YellowIH.second)
    {
        return SD_YELLOW;
    }
    if(iHandle == c_ShapesHandles.GreenIH.second)
    {
        return SD_GREEN;
    }
    if(iHandle == c_ShapesHandles.CyanIH.second)
    {
        return SD_CYAN;
    }
    if(iHandle == c_ShapesHandles.GrayIH.second)
    {
        return SD_GRAY;
    }
    return SD_BLACK;
}

#endif // _SHAPEINFO_H_