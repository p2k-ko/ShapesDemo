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
 * @file Shape.cpp
 * This source file contains the implementation of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Shape.h"

#if FASTCDR_VERSION_MAJOR == 1

#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

namespace helper { namespace internal {

enum class Size {
    UInt8,
    UInt16,
    UInt32,
    UInt64,
};

constexpr Size get_size(int s) {
    return (s <= 8 ) ? Size::UInt8:
           (s <= 16) ? Size::UInt16:
           (s <= 32) ? Size::UInt32: Size::UInt64;
}

template<Size s>
struct FindTypeH;

template<>
struct FindTypeH<Size::UInt8> {
    using type = std::uint8_t;
};

template<>
struct FindTypeH<Size::UInt16> {
    using type = std::uint16_t;
};

template<>
struct FindTypeH<Size::UInt32> {
    using type = std::uint32_t;
};

template<>
struct FindTypeH<Size::UInt64> {
    using type = std::uint64_t;
};
}

template<int S>
struct FindType {
    using type = typename internal::FindTypeH<internal::get_size(S)>::type;
};
}

#define ShapeType_max_cdr_typesize 276ULL;




ShapeType::ShapeType()
{
    // /type_d() m_color

    // long m_x
    m_x = 0;
    // long m_y
    m_y = 0;
    // long m_shapesize
    m_shapesize = 0;

}

ShapeType::~ShapeType()
{
}

ShapeType::ShapeType(
        const ShapeType& x)
{
    m_color = x.m_color;


    m_x = x.m_x;


    m_y = x.m_y;


    m_shapesize = x.m_shapesize;

}

ShapeType::ShapeType(
        ShapeType&& x) noexcept
{
    m_color = std::move(x.m_color);


    m_x = x.m_x;


    m_y = x.m_y;


    m_shapesize = x.m_shapesize;

}

ShapeType& ShapeType::operator =(
        const ShapeType& x)
{
    m_color = x.m_color;


    m_x = x.m_x;


    m_y = x.m_y;


    m_shapesize = x.m_shapesize;

    return *this;
}

ShapeType& ShapeType::operator =(
        ShapeType&& x) noexcept
{
    m_color = std::move(x.m_color);


    m_x = x.m_x;


    m_y = x.m_y;


    m_shapesize = x.m_shapesize;

    return *this;
}

bool ShapeType::operator ==(
        const ShapeType& x) const
{
    return (m_color == x.m_color &&
           m_x == x.m_x &&
           m_y == x.m_y &&
           m_shapesize == x.m_shapesize);
}

bool ShapeType::operator !=(
        const ShapeType& x) const
{
    return !(*this == x);
}

size_t ShapeType::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ShapeType_max_cdr_typesize;
}

size_t ShapeType::getCdrSerializedSize(
        const ShapeType& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.color().size() + 1;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}


void ShapeType::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m_color.c_str();

    scdr << m_x;

    scdr << m_y;

    scdr << m_shapesize;

}

void ShapeType::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m_color;



    dcdr >> m_x;



    dcdr >> m_y;



    dcdr >> m_shapesize;


}


bool ShapeType::isKeyDefined()
{
    return true;
}

void ShapeType::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
    scdr << m_color.c_str();
       
     
     
      
}

/*!
 * @brief This function copies the value in member color
 * @param _color New value to be copied in member color
 */
void ShapeType::color(
        const std::string& _color)
{
    m_color = _color;
}

/*!
 * @brief This function moves the value in member color
 * @param _color New value to be moved in member color
 */
void ShapeType::color(
        std::string&& _color)
{
    m_color = std::move(_color);
}

/*!
 * @brief This function returns a constant reference to member color
 * @return Constant reference to member color
 */
const std::string& ShapeType::color() const
{
    return m_color;
}

/*!
 * @brief This function returns a reference to member color
 * @return Reference to member color
 */
std::string& ShapeType::color()
{
    return m_color;
}


/*!
 * @brief This function sets a value in member x
 * @param _x New value for member x
 */
void ShapeType::x(
        int32_t _x)
{
    m_x = _x;
}

/*!
 * @brief This function returns the value of member x
 * @return Value of member x
 */
int32_t ShapeType::x() const
{
    return m_x;
}

/*!
 * @brief This function returns a reference to member x
 * @return Reference to member x
 */
int32_t& ShapeType::x()
{
    return m_x;
}


/*!
 * @brief This function sets a value in member y
 * @param _y New value for member y
 */
void ShapeType::y(
        int32_t _y)
{
    m_y = _y;
}

/*!
 * @brief This function returns the value of member y
 * @return Value of member y
 */
int32_t ShapeType::y() const
{
    return m_y;
}

/*!
 * @brief This function returns a reference to member y
 * @return Reference to member y
 */
int32_t& ShapeType::y()
{
    return m_y;
}


/*!
 * @brief This function sets a value in member shapesize
 * @param _shapesize New value for member shapesize
 */
void ShapeType::shapesize(
        int32_t _shapesize)
{
    m_shapesize = _shapesize;
}

/*!
 * @brief This function returns the value of member shapesize
 * @return Value of member shapesize
 */
int32_t ShapeType::shapesize() const
{
    return m_shapesize;
}

/*!
 * @brief This function returns a reference to member shapesize
 * @return Reference to member shapesize
 */
int32_t& ShapeType::shapesize()
{
    return m_shapesize;
}




#endif // FASTCDR_VERSION_MAJOR == 1
