//Copyright (c) 2008-2016 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifdef BOOST_QVM_TEST_SINGLE_HEADER
#   include BOOST_QVM_TEST_SINGLE_HEADER
#else
#   include <boost/qvm/deduce_scalar.hpp>
#   include <boost/qvm/mat.hpp>
#   include <boost/qvm/mat_operations.hpp>
#   include <boost/qvm/vec.hpp>
#   include <boost/qvm/vec_mat_operations3.hpp>
#   include <boost/qvm/swizzle3.hpp>
#endif

#include <boost/core/lightweight_test.hpp>

template <class T>
struct
Wrap
    {
    T t;
    Wrap() { }
    Wrap(T t):t(t) { }
    };

template <class S, class T>
Wrap<T>
operator*(S s, Wrap<T> w)
    {
    return Wrap<T>(s * w.t);
    }

template <class T>
Wrap<T> operator+(Wrap<T> a, Wrap<T> b)
    {
    return Wrap<T>(a.t + b.t);
    }

namespace
boost
    {
    namespace
    qvm
        {
        template <class T>
        struct
        is_scalar<Wrap<T> >
            {
            static bool const value=true;
            };
        template <class S, class T>
        struct
        deduce_scalar<S, Wrap<T> >
            {
                typedef Wrap<typename deduce_scalar<S, T>::type> type;
            };
        }
    }

int
main()
    {
    using namespace boost::qvm;
    mat<double, 3, 3> m = rotz_mat<3>(3.14159);
    vec<Wrap<double>, 3> v = X00(Wrap<double>(1.0));
    vec<Wrap<double>, 3> r = m * v;
    BOOST_TEST_LT(fabs(r.a[0].t+1), 0.0001);
    BOOST_TEST_LT(fabs(r.a[1].t), 0.0001);
    BOOST_TEST_LT(fabs(r.a[2].t), 0.0001);
    return boost::report_errors();
    }