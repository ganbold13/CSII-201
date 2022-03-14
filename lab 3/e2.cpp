//dasgal_2 Ganbold
#include <stdio.h>
int main(){
    int a,b,c,d, s1, s2;
    printf("Buhel too oruulna uu!\n");
    scanf("%d%d%d", &a, &b, &c);
    s1 = (a > b)*a + (a <= b)*b;  
    d = (s1 > c)*s1 + (s1 <= c)*c;
    printf("Oruulsan toonuudiin hamgiin ih ni %d\n", d);  
}