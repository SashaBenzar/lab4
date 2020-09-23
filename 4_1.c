#include <stdio.h>
#include <math.h>

int main()
{
    int x,z,er;
    float y;
    do
    {
    er=0;
    printf("введіть ціле число x:");
    scanf("%d",&x);
    printf("введіть ціле число z:");
    scanf("%d",&z);
    if(sqrt(x)-2*sqrt(x*z)==0)
    {
        printf("помилка, ви ділите на 0\n");
        er=1;
    }
    else if(x==0)
    {
        printf("помилка, ви ділите на 0\n");
        er=1;
    }
    }while(er==1);
    y=sqrt(x)+2*sqrt(x*z)/sqrt(x)-2*sqrt(x*z);
    printf("відповідь:%g",y);
    return 0;
}
