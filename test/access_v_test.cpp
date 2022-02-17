// Copyright 2008-2022 Emil Dotchevski and Reverge Studios, Inc.

// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifdef BOOST_QVM_TEST_SINGLE_HEADER
#   include BOOST_QVM_TEST_SINGLE_HEADER
#else
#   include <boost/qvm/vec_access.hpp>
#endif

#include "test_qvm_vector.hpp"

using namespace boost::qvm;

template <int I>
void
check_idx( test_qvm::vector<V1,10> & v, float & (*f)( test_qvm::vector<V1,10> & ) )
    {

    BOOST_TEST((&A<I>(v)==&v.a[I]));
    BOOST_TEST((&f(v)==&v.a[I]));
    }

template <int I>
void
check_element_idx()
    {
    test_qvm::vector<V1,10> v(0, 1);
    BOOST_TEST_EQ(A<0>(v), 0);
    BOOST_TEST_EQ(A<1>(v), 1);
    BOOST_TEST_EQ(A<2>(v), 2);
    BOOST_TEST_EQ(A<3>(v), 3);
    BOOST_TEST_EQ(A<4>(v), 4);
    BOOST_TEST_EQ(A<5>(v), 5);
    BOOST_TEST_EQ(A<6>(v), 6);
    BOOST_TEST_EQ(A<7>(v), 7);
    BOOST_TEST_EQ(A<8>(v), 8);
    BOOST_TEST_EQ(A<9>(v), 9);
    A<I>(v) = 42;
    BOOST_TEST_EQ(A<0>(v), I==0? 42 : 0);
    BOOST_TEST_EQ(A<1>(v), I==1? 42 : 1);
    BOOST_TEST_EQ(A<2>(v), I==2? 42 : 2);
    BOOST_TEST_EQ(A<3>(v), I==3? 42 : 3);
    BOOST_TEST_EQ(A<4>(v), I==4? 42 : 4);
    BOOST_TEST_EQ(A<5>(v), I==5? 42 : 5);
    BOOST_TEST_EQ(A<6>(v), I==6? 42 : 6);
    BOOST_TEST_EQ(A<7>(v), I==7? 42 : 7);
    BOOST_TEST_EQ(A<8>(v), I==8? 42 : 8);
    BOOST_TEST_EQ(A<9>(v), I==9? 42 : 9);
    }

int
main()
    {
    check_element_idx<0>();
    check_element_idx<1>();
    check_element_idx<2>();
    check_element_idx<3>();
    check_element_idx<4>();
    check_element_idx<5>();
    check_element_idx<6>();
    check_element_idx<7>();
    check_element_idx<8>();
    check_element_idx<9>();
        {
        test_qvm::vector<V1,10> v(0, 1);
        BOOST_TEST_EQ(X(v), 0);
        BOOST_TEST_EQ(Y(v), 1);
        BOOST_TEST_EQ(Z(v), 2);
        BOOST_TEST_EQ(W(v), 3);
        X(v) = 42;
        BOOST_TEST_EQ(X(v), 42);
        BOOST_TEST_EQ(Y(v), 1);
        BOOST_TEST_EQ(Z(v), 2);
        BOOST_TEST_EQ(W(v), 3);
        }
        {
        test_qvm::vector<V1,10> v(0, 1);
        BOOST_TEST_EQ(X(v), 0);
        BOOST_TEST_EQ(Y(v), 1);
        BOOST_TEST_EQ(Z(v), 2);
        BOOST_TEST_EQ(W(v), 3);
        Y(v) = 42;
        BOOST_TEST_EQ(X(v), 0);
        BOOST_TEST_EQ(Y(v), 42);
        BOOST_TEST_EQ(Z(v), 2);
        BOOST_TEST_EQ(W(v), 3);
        }
        {
        test_qvm::vector<V1,10> v(0, 1);
        BOOST_TEST_EQ(X(v), 0);
        BOOST_TEST_EQ(Y(v), 1);
        BOOST_TEST_EQ(Z(v), 2);
        BOOST_TEST_EQ(W(v), 3);
        Z(v) = 42;
        BOOST_TEST_EQ(X(v), 0);
        BOOST_TEST_EQ(Y(v), 1);
        BOOST_TEST_EQ(Z(v), 42);
        BOOST_TEST_EQ(W(v), 3);
        }
        {
        test_qvm::vector<V1,10> v(0, 1);
        BOOST_TEST_EQ(X(v), 0);
        BOOST_TEST_EQ(Y(v), 1);
        BOOST_TEST_EQ(Z(v), 2);
        BOOST_TEST_EQ(W(v), 3);
        W(v) = 42;
        BOOST_TEST_EQ(X(v), 0);
        BOOST_TEST_EQ(Y(v), 1);
        BOOST_TEST_EQ(Z(v), 2);
        BOOST_TEST_EQ(W(v), 42);
        }
    return boost::report_errors();
    }
