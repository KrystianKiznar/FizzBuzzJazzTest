#include "pch.h"
#include "FizzBuzz.h"

std::string FizzBuzz(int input) {
    if (input % 3 == 0)
        return "Fizz";
    else if (input % 5 == 0)
        return "Buzz";

    return std::to_string(input);
}
