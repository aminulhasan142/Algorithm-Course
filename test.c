#include <stdio.h>

int main()
{
    int a = 0;
    while (1)
    {
        printf("Hi!!! There...time(%d)\n", a);
        if (a == 5)
        {
            break;
        }
        a++;
    }
}