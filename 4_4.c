#include <stdio.h>
#include <math.h>
#include <float.h>

int main()
{
    double y,x,a=-6,b=3, dx=0.75;
    for (a; a<=b; a+=dx){
    x=a;
    y=pow(x,3);
    printf("%g\t%7.2lf\n", x, y);
}
    return 0;
}
