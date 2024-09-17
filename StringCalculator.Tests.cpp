#include "StringCalculator.h"
#include <gtest/gtest.h>
class StringCalculatorFixture:public testing:Test{
protected:
      string input;
      int expectedValue;
      int actualValue;
};

TEST_F(StringCalculatorFixture,add_emptyInputString_ZeroisExpected){
//Arrange
  input=" ";
  ExpectedValue = 0;
//Act
  actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, ExpectedValue);
}
TEST(StringCalculatorTestSuite,add_numberZero_ZeroisExpected){
//Arrange
 string input= "0";
 int ExpectedValue = 0;
//Act
 int actualValue = Add(input);
//Assert
 ASSERT_EQ(actualValue, ExpectedValue);
}
TEST(StringCalculatorTestSuite,add_numberOne_OneisExpected){
//Arrange
 string input= "1";
 int ExpectedValue = 1;
//Act
 int actualValue = Add(input);
//Assert
 ASSERT_EQ(actualValue, ExpectedValue);
}
TEST(StringCalculatorTestSuite,add_two_comma_delimited_numbers_sumisexpected){
//Arrange
string input= "1,3";
int ExpectedValue = 4;
//Act
int actualValue = Add(input);
//Assert
ASSERT_EQ(actualValue, ExpectedValue);
}
TEST(StringCalculatorTestSuite,inputstring_negativenumber_invalidargument){
//Arrange
string input = "1,-2,-5,3";
ASSERT_THROW(Add(input),invalid_argument);
}
TEST(StringCalculatorTestSuite,add_three_comma_delimited_numbers_sumisexpected){
//Arrange
string input= "1,3,4";
int ExpectedValue = 8;
//Act
int actualValue = Add(input);
//Assert
ASSERT_EQ(actualValue, ExpectedValue);
}

