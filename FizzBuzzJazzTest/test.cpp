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

TEST(FizzBuzzJazzTest, divisible21629Result21629) {
	checkFizzBuzz(21629, "21629");
}

TEST(FizzBuzzJazzTest, divisible21624ResultBuzz) {
	checkFizzBuzz(21624, "Fizz");
}

TEST(FizzBuzzJazzTest, divisible21625ResultBuzz) {
	checkFizzBuzz(21625, "Buzz");
}

TEST(FizzBuzzJazzTest, input3ResultJazz) {
	checkFizzBuzz(7, "Jazz");
}

TEST(FizzBuzzJazzTest, input14ResultJazz) {
	checkFizzBuzz(14, "Jazz");
}

TEST(FizzBuzzJazzTest, divisible216231ResultJazz) {
	checkFizzBuzz(216231, "Fizz");
}


TEST(FizzBuzzJazzTest, divisible15ResultFizzBuzz) {
	checkFizzBuzz(15, "FizzBuzz");
}

TEST(FizzBuzzJazzTest, divisible60ResultFizzBuzz) {
	checkFizzBuzz(60, "FizzBuzz");
}

TEST(FizzBuzzJazzTest, divisible21ResultFizzJazz) {
	checkFizzBuzz(21, "FizzJazz");
}

TEST(FizzBuzzJazzTest, divisible42ResultFizzJazz) {
	checkFizzBuzz(42, "FizzJazz");
}

TEST(FizzBuzzJazzTest, divisible35ResultBuzzJazz) {
	checkFizzBuzz(35, "BuzzJazz");
}

TEST(FizzBuzzJazzTest, divisible140ResultBuzzJazz) {
	checkFizzBuzz(140, "BuzzJazz");
}

TEST(FizzBuzzJazzTest, divisible140ResultFizzBuzzJazz) {
	checkFizzBuzz(105, "FizzBuzzJazz");
}

TEST(FizzBuzzJazzTest, divisible840ResultFizzBuzzJazz) {
	checkFizzBuzz(840, "FizzBuzzJazz");
}