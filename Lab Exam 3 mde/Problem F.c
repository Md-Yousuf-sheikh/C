#include<stdio.h>

int main ()
{
    long long number;
    int counts=0;
    scanf("%lld", &number);
    while(number!=0)
    {
        if(number%10 ==7 || number%10 == 4)
            counts++;
        number=number/10;
    }
    if(counts==7 || counts==4)
        printf("YES");
    else
        printf("NO");

}
