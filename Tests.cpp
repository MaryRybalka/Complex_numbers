#include "gtest/gtest.h"
#include "Complex.h"

TEST(Sum, Plus){
    Complex a(4, 8), b(2,2);
    Complex Sum;
    Sum = a + b;
    float res = Sum.ret_imag(Sum);
    EXPECT_EQ(10, res);
    res = Sum.ret_real(Sum);
    EXPECT_EQ(6, res);
}
TEST(Sub, Minus){
    Complex a(4, 8), b(2,2);
    Complex Sub;
    Sub = a - b;
    float res = Sub.ret_real(Sub);
    EXPECT_EQ(2, res);
    res = Sub.ret_imag(Sub);
    EXPECT_EQ(6, res);
}
TEST(Mul, Multiply){
    Complex a(4, 8), b(2,2);
    Complex Mul;
    Mul = a * b;
    float res = Mul.ret_imag(Mul);
    EXPECT_EQ(24, res);
    res = Mul.ret_real(Mul);
    EXPECT_EQ(-8, res);
}
TEST(Sub, Substraction){
    Complex a(4, 8), b(2,2);
    Complex Sub;
    Sub = a / b;
    float res = Sub.ret_real(Sub);
    EXPECT_EQ(3, res);
    res = Sub.ret_imag(Sub);
    EXPECT_EQ(1, res);
}
TEST(Pe, PlusEqual){
    Complex a(4, 8), b(2,2);
    Complex Pe;
    a += b;
    float res = a.ret_imag(a);;
    EXPECT_EQ(10, res);
    res =a.ret_real(a);;
    EXPECT_EQ(6, res);
}
TEST(Me, MinusEqual){
    Complex a(4, 8), b(2,2);
    Complex Me;
    a -= b;
    float res = a.ret_imag(a);;
    EXPECT_EQ(6, res);
    res =a.ret_real(a);;
    EXPECT_EQ(2, res);
}

TEST(Eq, EqualNotEqual){
    Complex a(4, 8), b(2,2);
    bool res  = (a == b);
    EXPECT_EQ(false, res);
}
TEST(NotEq, NotEqualNotEqual){
    Complex a(4, 8), b(2,2);
    bool res  = (a != b);
    EXPECT_EQ(true, res);
}
TEST(Eq, NotEqualEqual){
    Complex a(4, 8), b(4,8);
    bool res  = (a == b);
    EXPECT_EQ(true, res);
}
TEST(NotEq, NotEqualEqual){
    Complex a(2, 2), b(2,2);
    bool res  = (a != b);
    EXPECT_EQ(false, res);
}

TEST(MakeEqual, ToMakeEqual){
    Complex a(4, 8);
    Complex Sum;
    Sum = a;
    float res = Sum.ret_imag(Sum);
    EXPECT_EQ(8, res);
    res = Sum.ret_real(Sum);
    EXPECT_EQ(4, res);
}

TEST(Less, Less){
    Complex a(4, 8), b(7,9);
    bool res = a<b;
    EXPECT_EQ(true, res);
}
TEST(Less, NLess){
    Complex a(4, 8), b(2,2);
    bool res = a<b;
    EXPECT_EQ(false, res);
}
TEST(More, More){
    Complex a(4, 8), b(2,2);
    bool res = a>b;
    EXPECT_EQ(true, res);
}
TEST(More, NMore){
    Complex a(4, 8), b(54,11);
    bool res = a>b;
    EXPECT_EQ(false, res);
}

TEST(LessOrEqual, Less){
    Complex a(4, 2), b(4,8);
    bool res = a<=b;
    EXPECT_EQ(true, res);
}
TEST(LessOrEqual, Equal){
    Complex a(4, 8), b(4,8);
    bool res = a<=b;
    EXPECT_EQ(true, res);
}
TEST(LessOrEqual, More){
    Complex a(4, 11), b(4,8);
    bool res = a<=b;
    EXPECT_EQ(false, res);
}

TEST(MoreOrEqual, More){
    Complex a(4, 8), b(4,5);
    bool res = a>=b;
    EXPECT_EQ(true, res);
}
TEST(MoreOrEqual, Equal){
    Complex a(4, 8), b(4,8);
    bool res = a>=b;
    EXPECT_EQ(true, res);
}
TEST(MoreOrEqual, Less){
    Complex a(4, 2), b(4,8);
    bool res = a>=b;
    EXPECT_EQ(false, res);
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}