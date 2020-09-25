#include <stdio.h>
#include <math.h>

int main()
{
    int b = 1, j; 
    for(j=19; j <= 80; j++)
    {
        if (j%5!=0) continue;
        b *= j;
    }
    printf("for:%d\n", b);
    return 0;
}
