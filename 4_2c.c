#include <stdio.h>
#include <math.h>

int main()
{
    int c = 1, k = 19; 
    do {
        if (k % 5 == 0) 
        c *= k;
        k++;
    } while (k <= 80);
    printf("do while:%d", c);
    return 0;
}
