#include <stdio.h>
int main()
{
    int base , exponent , power = 1 , expo;
    double power1=1.0;

    printf("Enter the base: ");
    scanf("%d" , &base);

    printf("Enter the exponent: ");
    scanf("%d" , &exponent);
    expo = exponent;

    if(exponent>0)
    {
        while(exponent != 0)
        {
            power = power*base;
            exponent--;
        }
        printf("Answer is %d\n" , power);
    }
    else
    {
        while(exponent != 0)
        {
            power1 = power1*(1.0/base);
            exponent++;
        }
        printf("Answer is %.5f" , power1);
    }
}

