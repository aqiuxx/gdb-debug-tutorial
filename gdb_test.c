#include <stdio.h>
#include <string.h>

int mult(int big, int tmp);
int main()
{
    int sum, i;
    char string[120];

    sum = 0;
    strcpy(string, "Hello!");

    for (i=1; i<=10; i++)
    {
        sum += i;
        sum = mult(sum, i);
    }

    printf("sum = %d\n", sum);

    return 0;
}

int mult(int big, int tmp)
{
    int i;

    i = big;
    if (big > 10) 
        i = i%10;

    return (i*tmp);
}
