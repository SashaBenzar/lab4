#include <stdio.h>
#include <math.h>

int main()
{
    int a = 1, i = 19, b = 1, j, c = 1, k = 19; 
    while (i <= 80) {
        i++;
        if (i%5!=0) continue;
        a *= i;
    }
    for(j=19; j <= 80; j++)
    {
        if (j%5!=0) continue;
        b *= j;
    }
    do {
        if (k % 5 == 0) 
        c *= k;
        k++;
    } while (k <= 80);

    printf("while:%d\n", a);
    printf("for:%d\n", b);
    printf("do while:%d", c);
    return 0;
}
