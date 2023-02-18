
#include <stdio.h>

int main(void)
{
    if (true())
    {
        printf("Hello World");
    }
    return 0;
}

int true()
{
    return 1;
}