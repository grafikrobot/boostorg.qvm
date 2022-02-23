#ifndef BOOST_QVM_IS_SCALAR_HPP_INCLUDED
#define BOOST_QVM_IS_SCALAR_HPP_INCLUDED

// Copyright 2008-2022 Emil Dotchevski and Reverge Studios, Inc.

// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/qvm/config.hpp>

namespace boost { namespace qvm {

template <class T>
struct
is_scalar
    {
    BOOST_QVM_STATIC_INTEGRAL_CONSTANT(value,0);
    };
template <class T>
struct
is_scalar<T const>:
    is_scalar<T>
    {
    };
template <> struct is_scalar<signed char> { BOOST_QVM_STATIC_INTEGRAL_CONSTANT(value,1); };
template <> struct is_scalar<unsigned char> { BOOST_QVM_STATIC_INTEGRAL_CONSTANT(value,1); };
template <> struct is_scalar<signed short> { BOOST_QVM_STATIC_INTEGRAL_CONSTANT(value,1); };
template <> struct is_scalar<unsigned short> { BOOST_QVM_STATIC_INTEGRAL_CONSTANT(value,1); };
template <> struct is_scalar<signed int> { BOOST_QVM_STATIC_INTEGRAL_CONSTANT(value,1); };
template <> struct is_scalar<unsigned int> { BOOST_QVM_STATIC_INTEGRAL_CONSTANT(value,1); };
template <> struct is_scalar<signed long> { BOOST_QVM_STATIC_INTEGRAL_CONSTANT(value,1); };
template <> struct is_scalar<unsigned long> { BOOST_QVM_STATIC_INTEGRAL_CONSTANT(value,1); };
template <> struct is_scalar<float> { BOOST_QVM_STATIC_INTEGRAL_CONSTANT(value,1); };
template <> struct is_scalar<double> { BOOST_QVM_STATIC_INTEGRAL_CONSTANT(value,1); };
template <> struct is_scalar<long double> { BOOST_QVM_STATIC_INTEGRAL_CONSTANT(value,1); };
} }

#endif
