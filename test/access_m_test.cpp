// Copyright 2008-2022 Emil Dotchevski and Reverge Studios, Inc.

// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifdef BOOST_QVM_TEST_SINGLE_HEADER
#   include BOOST_QVM_TEST_SINGLE_HEADER
#else
#   include <boost/qvm/mat_access.hpp>
#endif

#include "test_qvm_matrix.hpp"

using namespace boost::qvm;

template <class M>
void
check_write_ref()
    {
    M m;
    BOOST_TEST((&A<0,0>(m)==&m.a[0][0]));
    BOOST_TEST((&A<0,1>(m)==&m.a[0][1]));
    BOOST_TEST((&A<0,2>(m)==&m.a[0][2]));
    BOOST_TEST((&A<0,3>(m)==&m.a[0][3]));
    BOOST_TEST((&A<0,4>(m)==&m.a[0][4]));
    BOOST_TEST((&A<0,5>(m)==&m.a[0][5]));
    BOOST_TEST((&A<0,6>(m)==&m.a[0][6]));
    BOOST_TEST((&A<0,7>(m)==&m.a[0][7]));
    BOOST_TEST((&A<0,8>(m)==&m.a[0][8]));
    BOOST_TEST((&A<0,9>(m)==&m.a[0][9]));
    BOOST_TEST((&A<1,0>(m)==&m.a[1][0]));
    BOOST_TEST((&A<1,1>(m)==&m.a[1][1]));
    BOOST_TEST((&A<1,2>(m)==&m.a[1][2]));
    BOOST_TEST((&A<1,3>(m)==&m.a[1][3]));
    BOOST_TEST((&A<1,4>(m)==&m.a[1][4]));
    BOOST_TEST((&A<1,5>(m)==&m.a[1][5]));
    BOOST_TEST((&A<1,6>(m)==&m.a[1][6]));
    BOOST_TEST((&A<1,7>(m)==&m.a[1][7]));
    BOOST_TEST((&A<1,8>(m)==&m.a[1][8]));
    BOOST_TEST((&A<1,9>(m)==&m.a[1][9]));
    BOOST_TEST((&A<2,0>(m)==&m.a[2][0]));
    BOOST_TEST((&A<2,1>(m)==&m.a[2][1]));
    BOOST_TEST((&A<2,2>(m)==&m.a[2][2]));
    BOOST_TEST((&A<2,3>(m)==&m.a[2][3]));
    BOOST_TEST((&A<2,4>(m)==&m.a[2][4]));
    BOOST_TEST((&A<2,5>(m)==&m.a[2][5]));
    BOOST_TEST((&A<2,6>(m)==&m.a[2][6]));
    BOOST_TEST((&A<2,7>(m)==&m.a[2][7]));
    BOOST_TEST((&A<2,8>(m)==&m.a[2][8]));
    BOOST_TEST((&A<2,9>(m)==&m.a[2][9]));
    BOOST_TEST((&A<3,0>(m)==&m.a[3][0]));
    BOOST_TEST((&A<3,1>(m)==&m.a[3][1]));
    BOOST_TEST((&A<3,2>(m)==&m.a[3][2]));
    BOOST_TEST((&A<3,3>(m)==&m.a[3][3]));
    BOOST_TEST((&A<3,4>(m)==&m.a[3][4]));
    BOOST_TEST((&A<3,5>(m)==&m.a[3][5]));
    BOOST_TEST((&A<3,6>(m)==&m.a[3][6]));
    BOOST_TEST((&A<3,7>(m)==&m.a[3][7]));
    BOOST_TEST((&A<3,8>(m)==&m.a[3][8]));
    BOOST_TEST((&A<3,9>(m)==&m.a[3][9]));
    BOOST_TEST((&A<4,0>(m)==&m.a[4][0]));
    BOOST_TEST((&A<4,1>(m)==&m.a[4][1]));
    BOOST_TEST((&A<4,2>(m)==&m.a[4][2]));
    BOOST_TEST((&A<4,3>(m)==&m.a[4][3]));
    BOOST_TEST((&A<4,4>(m)==&m.a[4][4]));
    BOOST_TEST((&A<4,5>(m)==&m.a[4][5]));
    BOOST_TEST((&A<4,6>(m)==&m.a[4][6]));
    BOOST_TEST((&A<4,7>(m)==&m.a[4][7]));
    BOOST_TEST((&A<4,8>(m)==&m.a[4][8]));
    BOOST_TEST((&A<4,9>(m)==&m.a[4][9]));
    BOOST_TEST((&A<5,0>(m)==&m.a[5][0]));
    BOOST_TEST((&A<5,1>(m)==&m.a[5][1]));
    BOOST_TEST((&A<5,2>(m)==&m.a[5][2]));
    BOOST_TEST((&A<5,3>(m)==&m.a[5][3]));
    BOOST_TEST((&A<5,4>(m)==&m.a[5][4]));
    BOOST_TEST((&A<5,5>(m)==&m.a[5][5]));
    BOOST_TEST((&A<5,6>(m)==&m.a[5][6]));
    BOOST_TEST((&A<5,7>(m)==&m.a[5][7]));
    BOOST_TEST((&A<5,8>(m)==&m.a[5][8]));
    BOOST_TEST((&A<5,9>(m)==&m.a[5][9]));
    BOOST_TEST((&A<5,0>(m)==&m.a[5][0]));
    BOOST_TEST((&A<5,1>(m)==&m.a[5][1]));
    BOOST_TEST((&A<5,2>(m)==&m.a[5][2]));
    BOOST_TEST((&A<5,3>(m)==&m.a[5][3]));
    BOOST_TEST((&A<5,4>(m)==&m.a[5][4]));
    BOOST_TEST((&A<5,5>(m)==&m.a[5][5]));
    BOOST_TEST((&A<5,6>(m)==&m.a[5][6]));
    BOOST_TEST((&A<5,7>(m)==&m.a[5][7]));
    BOOST_TEST((&A<5,8>(m)==&m.a[5][8]));
    BOOST_TEST((&A<5,9>(m)==&m.a[5][9]));
    BOOST_TEST((&A<7,0>(m)==&m.a[7][0]));
    BOOST_TEST((&A<7,1>(m)==&m.a[7][1]));
    BOOST_TEST((&A<7,2>(m)==&m.a[7][2]));
    BOOST_TEST((&A<7,3>(m)==&m.a[7][3]));
    BOOST_TEST((&A<7,4>(m)==&m.a[7][4]));
    BOOST_TEST((&A<7,5>(m)==&m.a[7][5]));
    BOOST_TEST((&A<7,6>(m)==&m.a[7][6]));
    BOOST_TEST((&A<7,7>(m)==&m.a[7][7]));
    BOOST_TEST((&A<7,8>(m)==&m.a[7][8]));
    BOOST_TEST((&A<7,9>(m)==&m.a[7][9]));
    BOOST_TEST((&A<8,0>(m)==&m.a[8][0]));
    BOOST_TEST((&A<8,1>(m)==&m.a[8][1]));
    BOOST_TEST((&A<8,2>(m)==&m.a[8][2]));
    BOOST_TEST((&A<8,3>(m)==&m.a[8][3]));
    BOOST_TEST((&A<8,4>(m)==&m.a[8][4]));
    BOOST_TEST((&A<8,5>(m)==&m.a[8][5]));
    BOOST_TEST((&A<8,6>(m)==&m.a[8][6]));
    BOOST_TEST((&A<8,7>(m)==&m.a[8][7]));
    BOOST_TEST((&A<8,8>(m)==&m.a[8][8]));
    BOOST_TEST((&A<8,9>(m)==&m.a[8][9]));
    BOOST_TEST((&A<9,0>(m)==&m.a[9][0]));
    BOOST_TEST((&A<9,1>(m)==&m.a[9][1]));
    BOOST_TEST((&A<9,2>(m)==&m.a[9][2]));
    BOOST_TEST((&A<9,3>(m)==&m.a[9][3]));
    BOOST_TEST((&A<9,4>(m)==&m.a[9][4]));
    BOOST_TEST((&A<9,5>(m)==&m.a[9][5]));
    BOOST_TEST((&A<9,6>(m)==&m.a[9][6]));
    BOOST_TEST((&A<9,7>(m)==&m.a[9][7]));
    BOOST_TEST((&A<9,8>(m)==&m.a[9][8]));
    BOOST_TEST((&A<9,9>(m)==&m.a[9][9]));
    BOOST_TEST(&A00(m)==&m.a[0][0]);
    BOOST_TEST(&A01(m)==&m.a[0][1]);
    BOOST_TEST(&A02(m)==&m.a[0][2]);
    BOOST_TEST(&A03(m)==&m.a[0][3]);
    BOOST_TEST(&A04(m)==&m.a[0][4]);
    BOOST_TEST(&A05(m)==&m.a[0][5]);
    BOOST_TEST(&A06(m)==&m.a[0][6]);
    BOOST_TEST(&A07(m)==&m.a[0][7]);
    BOOST_TEST(&A08(m)==&m.a[0][8]);
    BOOST_TEST(&A09(m)==&m.a[0][9]);
    BOOST_TEST(&A10(m)==&m.a[1][0]);
    BOOST_TEST(&A11(m)==&m.a[1][1]);
    BOOST_TEST(&A12(m)==&m.a[1][2]);
    BOOST_TEST(&A13(m)==&m.a[1][3]);
    BOOST_TEST(&A14(m)==&m.a[1][4]);
    BOOST_TEST(&A15(m)==&m.a[1][5]);
    BOOST_TEST(&A16(m)==&m.a[1][6]);
    BOOST_TEST(&A17(m)==&m.a[1][7]);
    BOOST_TEST(&A18(m)==&m.a[1][8]);
    BOOST_TEST(&A19(m)==&m.a[1][9]);
    BOOST_TEST(&A20(m)==&m.a[2][0]);
    BOOST_TEST(&A21(m)==&m.a[2][1]);
    BOOST_TEST(&A22(m)==&m.a[2][2]);
    BOOST_TEST(&A23(m)==&m.a[2][3]);
    BOOST_TEST(&A24(m)==&m.a[2][4]);
    BOOST_TEST(&A25(m)==&m.a[2][5]);
    BOOST_TEST(&A26(m)==&m.a[2][6]);
    BOOST_TEST(&A27(m)==&m.a[2][7]);
    BOOST_TEST(&A28(m)==&m.a[2][8]);
    BOOST_TEST(&A29(m)==&m.a[2][9]);
    BOOST_TEST(&A30(m)==&m.a[3][0]);
    BOOST_TEST(&A31(m)==&m.a[3][1]);
    BOOST_TEST(&A32(m)==&m.a[3][2]);
    BOOST_TEST(&A33(m)==&m.a[3][3]);
    BOOST_TEST(&A34(m)==&m.a[3][4]);
    BOOST_TEST(&A35(m)==&m.a[3][5]);
    BOOST_TEST(&A36(m)==&m.a[3][6]);
    BOOST_TEST(&A37(m)==&m.a[3][7]);
    BOOST_TEST(&A38(m)==&m.a[3][8]);
    BOOST_TEST(&A39(m)==&m.a[3][9]);
    BOOST_TEST(&A40(m)==&m.a[4][0]);
    BOOST_TEST(&A41(m)==&m.a[4][1]);
    BOOST_TEST(&A42(m)==&m.a[4][2]);
    BOOST_TEST(&A43(m)==&m.a[4][3]);
    BOOST_TEST(&A44(m)==&m.a[4][4]);
    BOOST_TEST(&A45(m)==&m.a[4][5]);
    BOOST_TEST(&A46(m)==&m.a[4][6]);
    BOOST_TEST(&A47(m)==&m.a[4][7]);
    BOOST_TEST(&A48(m)==&m.a[4][8]);
    BOOST_TEST(&A49(m)==&m.a[4][9]);
    BOOST_TEST(&A50(m)==&m.a[5][0]);
    BOOST_TEST(&A51(m)==&m.a[5][1]);
    BOOST_TEST(&A52(m)==&m.a[5][2]);
    BOOST_TEST(&A53(m)==&m.a[5][3]);
    BOOST_TEST(&A54(m)==&m.a[5][4]);
    BOOST_TEST(&A55(m)==&m.a[5][5]);
    BOOST_TEST(&A56(m)==&m.a[5][6]);
    BOOST_TEST(&A57(m)==&m.a[5][7]);
    BOOST_TEST(&A58(m)==&m.a[5][8]);
    BOOST_TEST(&A59(m)==&m.a[5][9]);
    BOOST_TEST(&A50(m)==&m.a[5][0]);
    BOOST_TEST(&A51(m)==&m.a[5][1]);
    BOOST_TEST(&A52(m)==&m.a[5][2]);
    BOOST_TEST(&A53(m)==&m.a[5][3]);
    BOOST_TEST(&A54(m)==&m.a[5][4]);
    BOOST_TEST(&A55(m)==&m.a[5][5]);
    BOOST_TEST(&A56(m)==&m.a[5][6]);
    BOOST_TEST(&A57(m)==&m.a[5][7]);
    BOOST_TEST(&A58(m)==&m.a[5][8]);
    BOOST_TEST(&A59(m)==&m.a[5][9]);
    BOOST_TEST(&A70(m)==&m.a[7][0]);
    BOOST_TEST(&A71(m)==&m.a[7][1]);
    BOOST_TEST(&A72(m)==&m.a[7][2]);
    BOOST_TEST(&A73(m)==&m.a[7][3]);
    BOOST_TEST(&A74(m)==&m.a[7][4]);
    BOOST_TEST(&A75(m)==&m.a[7][5]);
    BOOST_TEST(&A76(m)==&m.a[7][6]);
    BOOST_TEST(&A77(m)==&m.a[7][7]);
    BOOST_TEST(&A78(m)==&m.a[7][8]);
    BOOST_TEST(&A79(m)==&m.a[7][9]);
    BOOST_TEST(&A80(m)==&m.a[8][0]);
    BOOST_TEST(&A81(m)==&m.a[8][1]);
    BOOST_TEST(&A82(m)==&m.a[8][2]);
    BOOST_TEST(&A83(m)==&m.a[8][3]);
    BOOST_TEST(&A84(m)==&m.a[8][4]);
    BOOST_TEST(&A85(m)==&m.a[8][5]);
    BOOST_TEST(&A86(m)==&m.a[8][6]);
    BOOST_TEST(&A87(m)==&m.a[8][7]);
    BOOST_TEST(&A88(m)==&m.a[8][8]);
    BOOST_TEST(&A89(m)==&m.a[8][9]);
    BOOST_TEST(&A90(m)==&m.a[9][0]);
    BOOST_TEST(&A91(m)==&m.a[9][1]);
    BOOST_TEST(&A92(m)==&m.a[9][2]);
    BOOST_TEST(&A93(m)==&m.a[9][3]);
    BOOST_TEST(&A94(m)==&m.a[9][4]);
    BOOST_TEST(&A95(m)==&m.a[9][5]);
    BOOST_TEST(&A96(m)==&m.a[9][6]);
    BOOST_TEST(&A97(m)==&m.a[9][7]);
    BOOST_TEST(&A98(m)==&m.a[9][8]);
    BOOST_TEST(&A99(m)==&m.a[9][9]);
    }

template <class M>
void
check_read( M const & m )
    {
    BOOST_TEST_EQ((A<0,0>(m)), 0);
    BOOST_TEST_EQ((A<0,1>(m)), 1);
    BOOST_TEST_EQ((A<0,2>(m)), 2);
    BOOST_TEST_EQ((A<0,3>(m)), 3);
    BOOST_TEST_EQ((A<0,4>(m)), 4);
    BOOST_TEST_EQ((A<0,5>(m)), 5);
    BOOST_TEST_EQ((A<0,6>(m)), 6);
    BOOST_TEST_EQ((A<0,7>(m)), 7);
    BOOST_TEST_EQ((A<0,8>(m)), 8);
    BOOST_TEST_EQ((A<0,9>(m)), 9);
    BOOST_TEST_EQ((A<1,0>(m)), 10);
    BOOST_TEST_EQ((A<1,1>(m)), 11);
    BOOST_TEST_EQ((A<1,2>(m)), 12);
    BOOST_TEST_EQ((A<1,3>(m)), 13);
    BOOST_TEST_EQ((A<1,4>(m)), 14);
    BOOST_TEST_EQ((A<1,5>(m)), 15);
    BOOST_TEST_EQ((A<1,6>(m)), 16);
    BOOST_TEST_EQ((A<1,7>(m)), 17);
    BOOST_TEST_EQ((A<1,8>(m)), 18);
    BOOST_TEST_EQ((A<1,9>(m)), 19);
    BOOST_TEST_EQ((A<2,0>(m)), 20);
    BOOST_TEST_EQ((A<2,1>(m)), 21);
    BOOST_TEST_EQ((A<2,2>(m)), 22);
    BOOST_TEST_EQ((A<2,3>(m)), 23);
    BOOST_TEST_EQ((A<2,4>(m)), 24);
    BOOST_TEST_EQ((A<2,5>(m)), 25);
    BOOST_TEST_EQ((A<2,6>(m)), 26);
    BOOST_TEST_EQ((A<2,7>(m)), 27);
    BOOST_TEST_EQ((A<2,8>(m)), 28);
    BOOST_TEST_EQ((A<2,9>(m)), 29);
    BOOST_TEST_EQ((A<3,0>(m)), 30);
    BOOST_TEST_EQ((A<3,1>(m)), 31);
    BOOST_TEST_EQ((A<3,2>(m)), 32);
    BOOST_TEST_EQ((A<3,3>(m)), 33);
    BOOST_TEST_EQ((A<3,4>(m)), 34);
    BOOST_TEST_EQ((A<3,5>(m)), 35);
    BOOST_TEST_EQ((A<3,6>(m)), 36);
    BOOST_TEST_EQ((A<3,7>(m)), 37);
    BOOST_TEST_EQ((A<3,8>(m)), 38);
    BOOST_TEST_EQ((A<3,9>(m)), 39);
    BOOST_TEST_EQ((A<4,0>(m)), 40);
    BOOST_TEST_EQ((A<4,1>(m)), 41);
    BOOST_TEST_EQ((A<4,2>(m)), 42);
    BOOST_TEST_EQ((A<4,3>(m)), 43);
    BOOST_TEST_EQ((A<4,4>(m)), 44);
    BOOST_TEST_EQ((A<4,5>(m)), 45);
    BOOST_TEST_EQ((A<4,6>(m)), 46);
    BOOST_TEST_EQ((A<4,7>(m)), 47);
    BOOST_TEST_EQ((A<4,8>(m)), 48);
    BOOST_TEST_EQ((A<4,9>(m)), 49);
    BOOST_TEST_EQ((A<5,0>(m)), 50);
    BOOST_TEST_EQ((A<5,1>(m)), 51);
    BOOST_TEST_EQ((A<5,2>(m)), 52);
    BOOST_TEST_EQ((A<5,3>(m)), 53);
    BOOST_TEST_EQ((A<5,4>(m)), 54);
    BOOST_TEST_EQ((A<5,5>(m)), 55);
    BOOST_TEST_EQ((A<5,6>(m)), 56);
    BOOST_TEST_EQ((A<5,7>(m)), 57);
    BOOST_TEST_EQ((A<5,8>(m)), 58);
    BOOST_TEST_EQ((A<5,9>(m)), 59);
    BOOST_TEST_EQ((A<6,0>(m)), 60);
    BOOST_TEST_EQ((A<6,1>(m)), 61);
    BOOST_TEST_EQ((A<6,2>(m)), 62);
    BOOST_TEST_EQ((A<6,3>(m)), 63);
    BOOST_TEST_EQ((A<6,4>(m)), 64);
    BOOST_TEST_EQ((A<6,5>(m)), 65);
    BOOST_TEST_EQ((A<6,6>(m)), 66);
    BOOST_TEST_EQ((A<6,7>(m)), 67);
    BOOST_TEST_EQ((A<6,8>(m)), 68);
    BOOST_TEST_EQ((A<6,9>(m)), 69);
    BOOST_TEST_EQ((A<7,0>(m)), 70);
    BOOST_TEST_EQ((A<7,1>(m)), 71);
    BOOST_TEST_EQ((A<7,2>(m)), 72);
    BOOST_TEST_EQ((A<7,3>(m)), 73);
    BOOST_TEST_EQ((A<7,4>(m)), 74);
    BOOST_TEST_EQ((A<7,5>(m)), 75);
    BOOST_TEST_EQ((A<7,6>(m)), 76);
    BOOST_TEST_EQ((A<7,7>(m)), 77);
    BOOST_TEST_EQ((A<7,8>(m)), 78);
    BOOST_TEST_EQ((A<7,9>(m)), 79);
    BOOST_TEST_EQ((A<8,0>(m)), 80);
    BOOST_TEST_EQ((A<8,1>(m)), 81);
    BOOST_TEST_EQ((A<8,2>(m)), 82);
    BOOST_TEST_EQ((A<8,3>(m)), 83);
    BOOST_TEST_EQ((A<8,4>(m)), 84);
    BOOST_TEST_EQ((A<8,5>(m)), 85);
    BOOST_TEST_EQ((A<8,6>(m)), 86);
    BOOST_TEST_EQ((A<8,7>(m)), 87);
    BOOST_TEST_EQ((A<8,8>(m)), 88);
    BOOST_TEST_EQ((A<8,9>(m)), 89);
    BOOST_TEST_EQ((A<9,0>(m)), 90);
    BOOST_TEST_EQ((A<9,1>(m)), 91);
    BOOST_TEST_EQ((A<9,2>(m)), 92);
    BOOST_TEST_EQ((A<9,3>(m)), 93);
    BOOST_TEST_EQ((A<9,4>(m)), 94);
    BOOST_TEST_EQ((A<9,5>(m)), 95);
    BOOST_TEST_EQ((A<9,6>(m)), 96);
    BOOST_TEST_EQ((A<9,7>(m)), 97);
    BOOST_TEST_EQ((A<9,8>(m)), 98);
    BOOST_TEST_EQ((A<9,9>(m)), 99);
    BOOST_TEST_EQ(A00(m), 0);
    BOOST_TEST_EQ(A01(m), 1);
    BOOST_TEST_EQ(A02(m), 2);
    BOOST_TEST_EQ(A03(m), 3);
    BOOST_TEST_EQ(A04(m), 4);
    BOOST_TEST_EQ(A05(m), 5);
    BOOST_TEST_EQ(A06(m), 6);
    BOOST_TEST_EQ(A07(m), 7);
    BOOST_TEST_EQ(A08(m), 8);
    BOOST_TEST_EQ(A09(m), 9);
    BOOST_TEST_EQ(A10(m), 10);
    BOOST_TEST_EQ(A11(m), 11);
    BOOST_TEST_EQ(A12(m), 12);
    BOOST_TEST_EQ(A13(m), 13);
    BOOST_TEST_EQ(A14(m), 14);
    BOOST_TEST_EQ(A15(m), 15);
    BOOST_TEST_EQ(A16(m), 16);
    BOOST_TEST_EQ(A17(m), 17);
    BOOST_TEST_EQ(A18(m), 18);
    BOOST_TEST_EQ(A19(m), 19);
    BOOST_TEST_EQ(A20(m), 20);
    BOOST_TEST_EQ(A21(m), 21);
    BOOST_TEST_EQ(A22(m), 22);
    BOOST_TEST_EQ(A23(m), 23);
    BOOST_TEST_EQ(A24(m), 24);
    BOOST_TEST_EQ(A25(m), 25);
    BOOST_TEST_EQ(A26(m), 26);
    BOOST_TEST_EQ(A27(m), 27);
    BOOST_TEST_EQ(A28(m), 28);
    BOOST_TEST_EQ(A29(m), 29);
    BOOST_TEST_EQ(A30(m), 30);
    BOOST_TEST_EQ(A31(m), 31);
    BOOST_TEST_EQ(A32(m), 32);
    BOOST_TEST_EQ(A33(m), 33);
    BOOST_TEST_EQ(A34(m), 34);
    BOOST_TEST_EQ(A35(m), 35);
    BOOST_TEST_EQ(A36(m), 36);
    BOOST_TEST_EQ(A37(m), 37);
    BOOST_TEST_EQ(A38(m), 38);
    BOOST_TEST_EQ(A39(m), 39);
    BOOST_TEST_EQ(A40(m), 40);
    BOOST_TEST_EQ(A41(m), 41);
    BOOST_TEST_EQ(A42(m), 42);
    BOOST_TEST_EQ(A43(m), 43);
    BOOST_TEST_EQ(A44(m), 44);
    BOOST_TEST_EQ(A45(m), 45);
    BOOST_TEST_EQ(A46(m), 46);
    BOOST_TEST_EQ(A47(m), 47);
    BOOST_TEST_EQ(A48(m), 48);
    BOOST_TEST_EQ(A49(m), 49);
    BOOST_TEST_EQ(A50(m), 50);
    BOOST_TEST_EQ(A51(m), 51);
    BOOST_TEST_EQ(A52(m), 52);
    BOOST_TEST_EQ(A53(m), 53);
    BOOST_TEST_EQ(A54(m), 54);
    BOOST_TEST_EQ(A55(m), 55);
    BOOST_TEST_EQ(A56(m), 56);
    BOOST_TEST_EQ(A57(m), 57);
    BOOST_TEST_EQ(A58(m), 58);
    BOOST_TEST_EQ(A59(m), 59);
    BOOST_TEST_EQ(A60(m), 60);
    BOOST_TEST_EQ(A61(m), 61);
    BOOST_TEST_EQ(A62(m), 62);
    BOOST_TEST_EQ(A63(m), 63);
    BOOST_TEST_EQ(A64(m), 64);
    BOOST_TEST_EQ(A65(m), 65);
    BOOST_TEST_EQ(A66(m), 66);
    BOOST_TEST_EQ(A67(m), 67);
    BOOST_TEST_EQ(A68(m), 68);
    BOOST_TEST_EQ(A69(m), 69);
    BOOST_TEST_EQ(A70(m), 70);
    BOOST_TEST_EQ(A71(m), 71);
    BOOST_TEST_EQ(A72(m), 72);
    BOOST_TEST_EQ(A73(m), 73);
    BOOST_TEST_EQ(A74(m), 74);
    BOOST_TEST_EQ(A75(m), 75);
    BOOST_TEST_EQ(A76(m), 76);
    BOOST_TEST_EQ(A77(m), 77);
    BOOST_TEST_EQ(A78(m), 78);
    BOOST_TEST_EQ(A79(m), 79);
    BOOST_TEST_EQ(A80(m), 80);
    BOOST_TEST_EQ(A81(m), 81);
    BOOST_TEST_EQ(A82(m), 82);
    BOOST_TEST_EQ(A83(m), 83);
    BOOST_TEST_EQ(A84(m), 84);
    BOOST_TEST_EQ(A85(m), 85);
    BOOST_TEST_EQ(A86(m), 86);
    BOOST_TEST_EQ(A87(m), 87);
    BOOST_TEST_EQ(A88(m), 88);
    BOOST_TEST_EQ(A89(m), 89);
    BOOST_TEST_EQ(A90(m), 90);
    BOOST_TEST_EQ(A91(m), 91);
    BOOST_TEST_EQ(A92(m), 92);
    BOOST_TEST_EQ(A93(m), 93);
    BOOST_TEST_EQ(A94(m), 94);
    BOOST_TEST_EQ(A95(m), 95);
    BOOST_TEST_EQ(A96(m), 96);
    BOOST_TEST_EQ(A97(m), 97);
    BOOST_TEST_EQ(A98(m), 98);
    BOOST_TEST_EQ(A99(m), 99);
    }

template <class M>
void
check_write()
    {
       {
        M m(99, -1);
        A<0,0>(m) = 0;
        A<0,1>(m) = 1;
        A<0,2>(m) = 2;
        A<0,3>(m) = 3;
        A<0,4>(m) = 4;
        A<0,5>(m) = 5;
        A<0,6>(m) = 6;
        A<0,7>(m) = 7;
        A<0,8>(m) = 8;
        A<0,9>(m) = 9;
        A<1,0>(m) = 10;
        A<1,1>(m) = 11;
        A<1,2>(m) = 12;
        A<1,3>(m) = 13;
        A<1,4>(m) = 14;
        A<1,5>(m) = 15;
        A<1,6>(m) = 16;
        A<1,7>(m) = 17;
        A<1,8>(m) = 18;
        A<1,9>(m) = 19;
        A<2,0>(m) = 20;
        A<2,1>(m) = 21;
        A<2,2>(m) = 22;
        A<2,3>(m) = 23;
        A<2,4>(m) = 24;
        A<2,5>(m) = 25;
        A<2,6>(m) = 26;
        A<2,7>(m) = 27;
        A<2,8>(m) = 28;
        A<2,9>(m) = 29;
        A<3,0>(m) = 30;
        A<3,1>(m) = 31;
        A<3,2>(m) = 32;
        A<3,3>(m) = 33;
        A<3,4>(m) = 34;
        A<3,5>(m) = 35;
        A<3,6>(m) = 36;
        A<3,7>(m) = 37;
        A<3,8>(m) = 38;
        A<3,9>(m) = 39;
        A<4,0>(m) = 40;
        A<4,1>(m) = 41;
        A<4,2>(m) = 42;
        A<4,3>(m) = 43;
        A<4,4>(m) = 44;
        A<4,5>(m) = 45;
        A<4,6>(m) = 46;
        A<4,7>(m) = 47;
        A<4,8>(m) = 48;
        A<4,9>(m) = 49;
        A<5,0>(m) = 50;
        A<5,1>(m) = 51;
        A<5,2>(m) = 52;
        A<5,3>(m) = 53;
        A<5,4>(m) = 54;
        A<5,5>(m) = 55;
        A<5,6>(m) = 56;
        A<5,7>(m) = 57;
        A<5,8>(m) = 58;
        A<5,9>(m) = 59;
        A<6,0>(m) = 60;
        A<6,1>(m) = 61;
        A<6,2>(m) = 62;
        A<6,3>(m) = 63;
        A<6,4>(m) = 64;
        A<6,5>(m) = 65;
        A<6,6>(m) = 66;
        A<6,7>(m) = 67;
        A<6,8>(m) = 68;
        A<6,9>(m) = 69;
        A<7,0>(m) = 70;
        A<7,1>(m) = 71;
        A<7,2>(m) = 72;
        A<7,3>(m) = 73;
        A<7,4>(m) = 74;
        A<7,5>(m) = 75;
        A<7,6>(m) = 76;
        A<7,7>(m) = 77;
        A<7,8>(m) = 78;
        A<7,9>(m) = 79;
        A<8,0>(m) = 80;
        A<8,1>(m) = 81;
        A<8,2>(m) = 82;
        A<8,3>(m) = 83;
        A<8,4>(m) = 84;
        A<8,5>(m) = 85;
        A<8,6>(m) = 86;
        A<8,7>(m) = 87;
        A<8,8>(m) = 88;
        A<8,9>(m) = 89;
        A<9,0>(m) = 90;
        A<9,1>(m) = 91;
        A<9,2>(m) = 92;
        A<9,3>(m) = 93;
        A<9,4>(m) = 94;
        A<9,5>(m) = 95;
        A<9,6>(m) = 96;
        A<9,7>(m) = 97;
        A<9,8>(m) = 98;
        A<9,9>(m) = 99;
        check_read(m);
        }
       {
        M m(99, -1);
        A00(m) = 0;
        A01(m) = 1;
        A02(m) = 2;
        A03(m) = 3;
        A04(m) = 4;
        A05(m) = 5;
        A06(m) = 6;
        A07(m) = 7;
        A08(m) = 8;
        A09(m) = 9;
        A10(m) = 10;
        A11(m) = 11;
        A12(m) = 12;
        A13(m) = 13;
        A14(m) = 14;
        A15(m) = 15;
        A16(m) = 16;
        A17(m) = 17;
        A18(m) = 18;
        A19(m) = 19;
        A20(m) = 20;
        A21(m) = 21;
        A22(m) = 22;
        A23(m) = 23;
        A24(m) = 24;
        A25(m) = 25;
        A26(m) = 26;
        A27(m) = 27;
        A28(m) = 28;
        A29(m) = 29;
        A30(m) = 30;
        A31(m) = 31;
        A32(m) = 32;
        A33(m) = 33;
        A34(m) = 34;
        A35(m) = 35;
        A36(m) = 36;
        A37(m) = 37;
        A38(m) = 38;
        A39(m) = 39;
        A40(m) = 40;
        A41(m) = 41;
        A42(m) = 42;
        A43(m) = 43;
        A44(m) = 44;
        A45(m) = 45;
        A46(m) = 46;
        A47(m) = 47;
        A48(m) = 48;
        A49(m) = 49;
        A50(m) = 50;
        A51(m) = 51;
        A52(m) = 52;
        A53(m) = 53;
        A54(m) = 54;
        A55(m) = 55;
        A56(m) = 56;
        A57(m) = 57;
        A58(m) = 58;
        A59(m) = 59;
        A60(m) = 60;
        A61(m) = 61;
        A62(m) = 62;
        A63(m) = 63;
        A64(m) = 64;
        A65(m) = 65;
        A66(m) = 66;
        A67(m) = 67;
        A68(m) = 68;
        A69(m) = 69;
        A70(m) = 70;
        A71(m) = 71;
        A72(m) = 72;
        A73(m) = 73;
        A74(m) = 74;
        A75(m) = 75;
        A76(m) = 76;
        A77(m) = 77;
        A78(m) = 78;
        A79(m) = 79;
        A80(m) = 80;
        A81(m) = 81;
        A82(m) = 82;
        A83(m) = 83;
        A84(m) = 84;
        A85(m) = 85;
        A86(m) = 86;
        A87(m) = 87;
        A88(m) = 88;
        A89(m) = 89;
        A90(m) = 90;
        A91(m) = 91;
        A92(m) = 92;
        A93(m) = 93;
        A94(m) = 94;
        A95(m) = 95;
        A96(m) = 96;
        A97(m) = 97;
        A98(m) = 98;
        A99(m) = 99;
        check_read(m);
        }
    }

int
main()
    {
    check_read(test_qvm::matrix<M1,10,10,float,true>(0,1));
    check_read(test_qvm::matrix<M1,10,10,float,false>(0,1));
    check_write<test_qvm::matrix<M1,10,10,float,true> >();
    check_write<test_qvm::matrix<M1,10,10,float,false> >();
    check_write_ref<test_qvm::matrix<M1,10,10,float,true> >();
    return boost::report_errors();
    }
