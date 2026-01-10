#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number)
{
    unsigned int sum;

    sum = number * (1 + number) * (number * 2 + 1) / 6;
    return sum;
}

unsigned int square_of_sum(unsigned int number)
{
    unsigned int square;

    square = (1 + number) * number / 2;
    square *= square;
    return square;
}
unsigned int difference_of_squares(unsigned int number)
{
    unsigned int difference;

    difference = square_of_sum(number) - sum_of_squares(number);
    return difference;
}