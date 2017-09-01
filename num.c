#include <stdio.h>
int main()
{
    double fNum, sNum, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &fNum, &sNum);  
    product = fNum * sNum;  
    printf("Product = %.2lf", product);
    
    return 0;
}
