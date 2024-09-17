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
