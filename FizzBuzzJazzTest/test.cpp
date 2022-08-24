#include "pch.h"
#include"../FizzBuzzJazz/FizzBuzz.h"

void checkFizzBuzz(int value, std::string expect) {
	std::string result = FizzBuzz(value);
	EXPECT_EQ(expect, result);
}

TEST(FizzBuzzJazzTest, input1Result1) {
	checkFizzBuzz(1, "1");
 }

TEST(FizzBuzzJazzTest, input2Result2) {
	checkFizzBuzz(2, "2");
}

TEST(FizzBuzzJazzTest, input3ResultFizz) {
	checkFizzBuzz(3, "Fizz");
}

TEST(FizzBuzzJazzTest, input5ResultBuzz) {
	checkFizzBuzz(5, "Buzz");
}

TEST(FizzBuzzJazzTest, divisible3ResultFizz) {
	checkFizzBuzz(6, "Fizz");
}

TEST(FizzBuzzJazzTest, divisible5ResultFizz) {
	checkFizzBuzz(10, "Buzz");
}
