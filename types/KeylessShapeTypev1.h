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
 * @file KeylessShapeType.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#include <fastcdr/config.h>

#if FASTCDR_VERSION_MAJOR == 1

#ifndef _FAST_DDS_GENERATED_SHAPES_DEMO_TYPESUPPORT_IDL_KEYLESSSHAPETYPE_H_
#define _FAST_DDS_GENERATED_SHAPES_DEMO_TYPESUPPORT_IDL_KEYLESSSHAPETYPE_H_


#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(KEYLESSSHAPETYPE_SOURCE)
#define KEYLESSSHAPETYPE_DllAPI __declspec( dllexport )
#else
#define KEYLESSSHAPETYPE_DllAPI __declspec( dllimport )
#endif // KEYLESSSHAPETYPE_SOURCE
#else
#define KEYLESSSHAPETYPE_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define KEYLESSSHAPETYPE_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima



namespace shapes_demo_typesupport {
    namespace idl {


        /*!
         * @brief This class represents the structure KeylessShapeType defined by the user in the IDL file.
         * @ingroup KeylessShapeType
         */
        class KeylessShapeType
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport KeylessShapeType();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~KeylessShapeType();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object shapes_demo_typesupport::idl::KeylessShapeType that will be copied.
             */
            eProsima_user_DllExport KeylessShapeType(
                    const KeylessShapeType& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object shapes_demo_typesupport::idl::KeylessShapeType that will be copied.
             */
            eProsima_user_DllExport KeylessShapeType(
                    KeylessShapeType&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object shapes_demo_typesupport::idl::KeylessShapeType that will be copied.
             */
            eProsima_user_DllExport KeylessShapeType& operator =(
                    const KeylessShapeType& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object shapes_demo_typesupport::idl::KeylessShapeType that will be copied.
             */
            eProsima_user_DllExport KeylessShapeType& operator =(
                    KeylessShapeType&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x shapes_demo_typesupport::idl::KeylessShapeType object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const KeylessShapeType& x) const;

            /*!
             * @brief Comparison operator.
             * @param x shapes_demo_typesupport::idl::KeylessShapeType object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const KeylessShapeType& x) const;

            /*!
             * @brief This function copies the value in member color
             * @param _color New value to be copied in member color
             */
            eProsima_user_DllExport void color(
                    const std::string& _color);

            /*!
             * @brief This function moves the value in member color
             * @param _color New value to be moved in member color
             */
            eProsima_user_DllExport void color(
                    std::string&& _color);

            /*!
             * @brief This function returns a constant reference to member color
             * @return Constant reference to member color
             */
            eProsima_user_DllExport const std::string& color() const;

            /*!
             * @brief This function returns a reference to member color
             * @return Reference to member color
             */
            eProsima_user_DllExport std::string& color();


            /*!
             * @brief This function sets a value in member x
             * @param _x New value for member x
             */
            eProsima_user_DllExport void x(
                    int32_t _x);

            /*!
             * @brief This function returns the value of member x
             * @return Value of member x
             */
            eProsima_user_DllExport int32_t x() const;

            /*!
             * @brief This function returns a reference to member x
             * @return Reference to member x
             */
            eProsima_user_DllExport int32_t& x();


            /*!
             * @brief This function sets a value in member y
             * @param _y New value for member y
             */
            eProsima_user_DllExport void y(
                    int32_t _y);

            /*!
             * @brief This function returns the value of member y
             * @return Value of member y
             */
            eProsima_user_DllExport int32_t y() const;

            /*!
             * @brief This function returns a reference to member y
             * @return Reference to member y
             */
            eProsima_user_DllExport int32_t& y();


            /*!
             * @brief This function sets a value in member shapesize
             * @param _shapesize New value for member shapesize
             */
            eProsima_user_DllExport void shapesize(
                    int32_t _shapesize);

            /*!
             * @brief This function returns the value of member shapesize
             * @return Value of member shapesize
             */
            eProsima_user_DllExport int32_t shapesize() const;

            /*!
             * @brief This function returns a reference to member shapesize
             * @return Reference to member shapesize
             */
            eProsima_user_DllExport int32_t& shapesize();


            /*!
            * @brief This function returns the maximum serialized size of an object
            * depending on the buffer alignment.
            * @param current_alignment Buffer alignment.
            * @return Maximum serialized size.
            */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const shapes_demo_typesupport::idl::KeylessShapeType& data,
                    size_t current_alignment = 0);



            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);




            /*!
            * @brief This function tells you if the Key has been defined for this type
            */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
            * @brief This function serializes the key members of an object using CDR serialization.
            * @param cdr CDR serialization object.
            */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;


        private:

            std::string m_color;
            int32_t m_x;
            int32_t m_y;
            int32_t m_shapesize;

        };

    } // namespace idl
} // namespace shapes_demo_typesupport

#endif // _FAST_DDS_GENERATED_SHAPES_DEMO_TYPESUPPORT_IDL_KEYLESSSHAPETYPE_H_



#endif // FASTCDR_VERSION_MAJOR == 1
