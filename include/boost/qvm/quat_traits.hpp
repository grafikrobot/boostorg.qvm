#ifndef BOOST_QVM_QUAT_TRAITS
#define BOOST_QVM_QUAT_TRAITS

// Copyright 2008-2022 Emil Dotchevski and Reverge Studios, Inc.

// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/qvm/is_scalar.hpp>
#include <boost/qvm/enable_if.hpp>
#include <boost/qvm/inline.hpp>

namespace boost { namespace qvm {

template <class Q>
struct
quat_traits
    {
    typedef void scalar_type;
    };

template <class T>
struct
is_quat
    {
    static bool const value = is_scalar<typename quat_traits<T>::scalar_type>::value;
    };

namespace
qvm_detail
    {
    struct qtr_dispatch_type1 { int a[1]; };
    struct qtr_dispatch_type2 { int a[2]; };

    template <class T, class U>
    qtr_dispatch_type1 qtr_dispatch(T (*)(U));
    qtr_dispatch_type2 qtr_dispatch(...);
    }

template <class Q>
struct
quat_write_element_ref
    {
    static bool const value = sizeof(qvm_detail::qtr_dispatch(&quat_traits<Q>::template write_element<0>)) == sizeof(qvm_detail::qtr_dispatch_type1);
    };

template <int I, class Q>
BOOST_QVM_CONSTEXPR BOOST_QVM_INLINE_CRITICAL
typename enable_if_c<
    quat_write_element_ref<Q>::value,
    void>::type
write_quat_element( Q & q, typename quat_traits<Q>::scalar_type s )
    {
    quat_traits<Q>::template write_element<I>(q) = s;
    }

template <int I, class Q>
BOOST_QVM_CONSTEXPR BOOST_QVM_INLINE_CRITICAL
typename enable_if_c<
    !quat_write_element_ref<Q>::value,
    void>::type
write_quat_element( Q & q, typename quat_traits<Q>::scalar_type s )
    {
    quat_traits<Q>::template write_element<I>(q, s);
    }

template <class Q>
BOOST_QVM_CONSTEXPR BOOST_QVM_INLINE_CRITICAL
typename enable_if_c<
    quat_write_element_ref<Q>::value,
    void>::type
write_quat_element_idx( int i, Q & q, typename quat_traits<Q>::scalar_type s )
    {
    quat_traits<Q>::template write_element_idx(i, q) = s;
    }

template <class Q>
BOOST_QVM_CONSTEXPR BOOST_QVM_INLINE_CRITICAL
typename enable_if_c<
    !quat_write_element_ref<Q>::value,
    void>::type
write_vec_element_idx( int i, Q & q, typename quat_traits<Q>::scalar_type s )
    {
    quat_traits<Q>::template write_element_idx(i, q, s);
    }

} }

#endif
