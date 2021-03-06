/******************************************************************************
The MIT License(MIT)

Embedded Template Library.
https://github.com/ETLCPP/etl
http://www.etlcpp.com

Copyright(c) 2018 jwellbelove

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
******************************************************************************/

#include "UnitTest++.h"
#include "ExtraCheckMacros.h"

#include "etl/type_select.h"
#include "etl/null_type.h"

#include <type_traits>

namespace
{
  typedef etl::type_select<etl::null_type<0>> Types1;

  typedef etl::type_select<etl::null_type<0>, etl::null_type<1>, etl::null_type<2>, etl::null_type<3>,
                           etl::null_type<4>, etl::null_type<5>, etl::null_type<6>, etl::null_type<7>> Types8;

  typedef etl::type_select<etl::null_type<0>,  etl::null_type<1>,  etl::null_type<2>,  etl::null_type<3>,
                           etl::null_type<4>,  etl::null_type<5>,  etl::null_type<6>,  etl::null_type<7>,
                           etl::null_type<8>,  etl::null_type<9>,  etl::null_type<10>, etl::null_type<11>,
                           etl::null_type<12>, etl::null_type<13>, etl::null_type<14>, etl::null_type<15>> Types16;

  SUITE(test_type_lookup)
  {
    //*************************************************************************
    TEST(test_type_select1)
    {
      CHECK((std::is_same<etl::null_type<0>, typename Types1::select<0>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types1::select<0>::type>::value));
    }

    //*************************************************************************
    TEST(test_type_select8)
    {
      CHECK((std::is_same<etl::null_type<0>,   typename Types8::select<0>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types8::select<0>::type>::value));
      CHECK((std::is_same<etl::null_type<1>,   typename Types8::select<1>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types8::select<1>::type>::value));
      CHECK((std::is_same<etl::null_type<2>,   typename Types8::select<2>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types8::select<2>::type>::value));
      CHECK((std::is_same<etl::null_type<3>,   typename Types8::select<3>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types8::select<3>::type>::value));
      CHECK((std::is_same<etl::null_type<4>,   typename Types8::select<4>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types8::select<4>::type>::value));
      CHECK((std::is_same<etl::null_type<5>,   typename Types8::select<5>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types8::select<5>::type>::value));
      CHECK((std::is_same<etl::null_type<6>,   typename Types8::select<6>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types8::select<6>::type>::value));
      CHECK((std::is_same<etl::null_type<7>,   typename Types8::select<7>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types8::select<7>::type>::value));
    }

    //*************************************************************************
    TEST(test_type_select16)
    {
      CHECK((std::is_same<etl::null_type<0>,   typename Types16::select<0>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<0>::type>::value));
      CHECK((std::is_same<etl::null_type<1>,   typename Types16::select<1>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<1>::type>::value));
      CHECK((std::is_same<etl::null_type<2>,   typename Types16::select<2>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<2>::type>::value));
      CHECK((std::is_same<etl::null_type<3>,   typename Types16::select<3>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<3>::type>::value));
      CHECK((std::is_same<etl::null_type<4>,   typename Types16::select<4>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<4>::type>::value));
      CHECK((std::is_same<etl::null_type<5>,   typename Types16::select<5>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<5>::type>::value));
      CHECK((std::is_same<etl::null_type<6>,   typename Types16::select<6>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<6>::type>::value));
      CHECK((std::is_same<etl::null_type<7>,   typename Types16::select<7>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<7>::type>::value));
      CHECK((std::is_same<etl::null_type<8>,   typename Types16::select<8>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<8>::type>::value));
      CHECK((std::is_same<etl::null_type<9>,   typename Types16::select<9>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<9>::type>::value));
      CHECK((std::is_same<etl::null_type<10>,  typename Types16::select<10>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<10>::type>::value));
      CHECK((std::is_same<etl::null_type<11>,  typename Types16::select<11>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<11>::type>::value));
      CHECK((std::is_same<etl::null_type<12>,  typename Types16::select<12>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<12>::type>::value));
      CHECK((std::is_same<etl::null_type<13>,  typename Types16::select<13>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<13>::type>::value));
      CHECK((std::is_same<etl::null_type<14>,  typename Types16::select<14>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<14>::type>::value));
      CHECK((std::is_same<etl::null_type<15>,  typename Types16::select<15>::type>::value));
      CHECK(!(std::is_same<etl::null_type<99>, typename Types16::select<15>::type>::value));
    }
  };
}
