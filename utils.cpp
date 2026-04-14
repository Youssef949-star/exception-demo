#include <iostream>
#include <regex>
#include <string>
#include "utils.hpp"
using namespace std;

void check_email(string email) {
    regex pattern(R"(.+@.+\..+)");
    if (!regex_match(email, pattern)) throw invalid_argument("Email is invalid");
}