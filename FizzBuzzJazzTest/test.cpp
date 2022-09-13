#include "pch.h"
#include"../FizzBuzzJazz/FizzBuzz.h"
#include <tuple>
#include <vector>


class FizzBuzzTest 
	: public testing::TestWithParam<std::tuple<int, std::string>> {

private:
	std::vector <std::tuple<int, std::string>> testVector;
public:

	FizzBuzzTest();
};


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

FizzBuzzTest::FizzBuzzTest() {
	testVector.push_back(std::tuple <int, std::string> (840, "FizzBuzzJazz"));
	testVector.push_back(std::tuple <int, std::string> (105, "FizzBuzzJazz"));
	testVector.push_back(std::tuple <int, std::string> (140, "BuzzJazz"));
	testVector.push_back(std::tuple <int, std::string> (35, "BuzzJazz"));
	testVector.push_back(std::tuple <int, std::string> (42, "FizzJazz"));
	testVector.push_back(std::tuple <int, std::string> (21, "FizzJazz"));
	testVector.push_back(std::tuple <int, std::string> (60, "FizzBuzz"));
	testVector.push_back(std::tuple <int, std::string> (15, "FizzBuzz"));
	testVector.push_back(std::tuple <int, std::string> (216231, "Fizz"));
	testVector.push_back(std::tuple <int, std::string> (14, "Jazz"));
	testVector.push_back(std::tuple <int, std::string> (7, "Jazz"));
	testVector.push_back(std::tuple <int, std::string> (21625, "Buzz"));
	testVector.push_back(std::tuple <int, std::string> (21624, "Fizz")); 
	testVector.push_back(std::tuple <int, std::string> (10, "Buzz")); 
	testVector.push_back(std::tuple <int, std::string> (6, "Fizz"));
	testVector.push_back(std::tuple <int, std::string> (5, "Buzz"));
	testVector.push_back(std::tuple <int, std::string> (3, "Fizz"));
	testVector.push_back(std::tuple <int, std::string> (2, "2"));
	testVector.push_back(std::tuple <int, std::string> (21629, "21629"));
	testVector.push_back(std::tuple <int, std::string> (1, "1"));
}
