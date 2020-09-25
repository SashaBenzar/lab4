#include <stdio.h>
#include <math.h>

int main()
{
    int a = 1, i = 19; 
    while (i <= 80) {
        i++;
        if (i%5!=0) continue;
        a *= i;
    }
    printf("while:%d\n", a);
    return 0;
}
