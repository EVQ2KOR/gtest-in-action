#include "StringCalculator.h"
#include <gtest/gtest.h>

//Macro by google
TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){
//Arrange
  string input=" ";
  int ExpectedValue = 0;
//Act
  int actualValue=Add(input);
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
int ExpectedValue = 3;
//Act
int actualValue = Add(input);
//Assert
ASSERT_EQ(actualValue, ExpectedValue);
}
