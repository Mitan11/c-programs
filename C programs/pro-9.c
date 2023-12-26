#include <stdio.h>
int main()
{
    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;
    int five = 5;
    one += one;
    two += two;
    three += three;
    four += four;
    five += five;
    int sum = (one * 2) + (two * 2) + (three * 2) + (four * 2) + (five * 2);
    printf("sum is %d", sum);
    return 0;
}