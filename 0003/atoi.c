#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int myAtoi(char* str) {
    long total = 0;
    int sign = 1;
    while (isspace(*str)) str++;
    if (*str == '+' || *str == '-') {
        sign = (*str == '-') ? -1: 1;
        str++;
    }
    while (isdigit(*str)) {
        total = 10*total + (*str-'0');
        str++;
        if (sign*total > INT_MAX) {
            total = INT_MAX;
            break;
        }
        else if (sign*total < INT_MIN) {
            total = INT_MIN;
            break;
        }
    }
    return sign == 1 ? total : -total;
}

