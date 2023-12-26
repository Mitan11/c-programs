#include <stdio.h>
int main()
{
    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;
    int five = 5;
    int six = 6;

    two+=two;
    five+=five;
    six+=six;

    three*=3;
    four*=3;

    printf("%d",one+two+three+four+five+six);
    return 0;
}