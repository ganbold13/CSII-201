
#include<stdio.h>
int main()
{
    int a, b, c, s = 0;
    printf("Enter a number:\n");
    scanf("%d", a);
    c = a;
    while(a > 0)
    {
       b = a%10;
       s = (s*10)+b;
       a = a/10;
    }
    if(s == c) 
        printf("The number %c is a palindrome", c);
    else 
        printf("The number %c is not a palindrome", c);
 return 0;
}
