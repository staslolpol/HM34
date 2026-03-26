#include "logic.h"

string find_smaller_squares(int number) {
    string result = "1 ";

    for (int i = 2; i * i <= number; i++) {
        result += to_string(i * i) + " ";
    }

    return result;

}