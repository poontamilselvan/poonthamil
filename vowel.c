#include <stdio.h>
int main()
{
    char c;
    int isLowl, isUppl;
    printf("Enter an alphabet:");
    scanf("%c",&c);
    isLowl = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppl = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowl || isUppl)
        printf("%c is a vowel.",c);
    else
        printf("%c is a consonant.",c);
    return 0;
}
