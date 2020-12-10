#include "c-echo.h"

#include "gtest/gtest.h"

//Test 1
/*
TEST(EchoTest, HelloWorld) {
  char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
  EXPECT_EQ("hello world", echo(3,test_val));
}
*/

//Test 2
/*
TEST(EchoTest, EmptyString) {
  char* test_val[1]; test_val[0] = "./c-echo";
  EXPECT_EQ("", echo(1,test_val));
}
*/

//Test 3
/*
TEST(EchoTest, EmptyString) {
  char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "new"; test_val[3] = "world";
  EXPECT_EQ("hello new world", echo(4,test_val));
}
*/

//Test 4
/*
TEST(EchoTest, EmptyString) {
  char* test_val[9]; test_val[0] = "./c-echo"; test_val[1] = "the"; test_val[2] = "roman"; test_val[3] = "empire"; test_val[4] = "conquered"; test_val[5] = "both"; test_val[6] = "gaul"; test_val[7] = "and"; test_val[8] = "carthage";
  EXPECT_EQ("the roman empire conquered both gaul and carthage", echo(9,test_val));
}
*/

//Test 5
TEST(EchoTest, EmptyString) {
  char* test_val[10]; test_val[0] = "./c-echo"; test_val[1] = "("; test_val[2] = "X"; test_val[3] = "+"; test_val[4] = "Y"; test_val[5] = ")"; test_val[6] = "="; test_val[7] = "10"; test_val[8] = "*"; test_val[9] = "X";
  EXPECT_EQ("( X + Y ) = 10 * X", echo(10,test_val));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
