#include "armstrong_numbers.h"
#include <math.h>

int get_length_of_candidate(int n) {
    // get the number of digits in the number
    int count = 0;
    while (n != 0) {
        n = n/10;
        count++;
    }
    return count;
}

bool is_armstrong_number(int candidate) {
    int num_digits = get_length_of_candidate(candidate);
    int actual_sum = candidate;
    int angstrom_sum = 0;

    if (num_digits == 1) {
        return true;
    } else {
        for (int i = 0; i < num_digits; i++) {
            int tt = candidate % 10;
            angstrom_sum += pow(tt, num_digits);
            candidate = candidate / 10;
        }
        if (angstrom_sum == actual_sum) {
            return true;
        } else {
            return false;
        }
    }
}