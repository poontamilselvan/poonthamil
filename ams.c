#include <stdio.h>
int main()
{
    int number, onum, rem, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

    oNum = number;

    while (oNum != 0)
    {
        rem = oNum%10;
        result += rem*rem*rem;
        oNum /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}
