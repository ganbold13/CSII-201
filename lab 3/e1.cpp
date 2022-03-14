//dasgal_1 Ganbold
#include <stdio.h>

 int main(){
     int a,b,c;
     scanf("%d%d", &a, &b);
     c = a > b;
     printf(">-n utga %d\n", c);
     scanf("%d%d", &a, &b);
     c = a < b;
     printf("<-n utga %d\n", c);
     scanf("%d%d", &a, &b);
     c = a == b;
     printf("==-n utga %d\n", c);
     scanf("%d%d", &a, &b);
     c = a <= b;
     printf("<=-n utga %d\n", c);
     scanf("%d%d", &a, &b);
     c = a >= b;
     printf(">=-n utga %d\n", c);
     scanf("%d%d", &a, &b);
     c = a != b;
     printf("!=-n utga %d\n", c);
 }