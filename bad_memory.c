#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test1()
{
    const int NUM_HEIGHT = 3;
    int *heights = malloc(NUM_HEIGHT);
    /** int *heights = malloc(NUM_HEIGHT * sizeof(*heights)); */
    char *ch;
    printf("%d, %d, %d\n",sizeof(*heights),sizeof(*ch), sizeof(char *));
    for (int i = 0; i < NUM_HEIGHT; i++)
    {
        heights[i] = i * i;
        printf("%d: %d\n", i, heights[i]);
    }
}

void main()
{
    test1();
    return ;
}
