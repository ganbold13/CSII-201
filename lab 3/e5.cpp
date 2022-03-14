//Dasgal_5 Ganbold
#include <stdio.h>
int main(){
    int a,b,c,max,min,avg;
    scanf("%d%d%d", &a,&b,&c);
    max = (a > b)*a + (a < b)*b;
    max = (max > c)*max + (max < c)*c;

    min = (a < b)*a + (a > b)*b;
    min = (min < c)*min + (min > c)*c;

    avg = ((min != a) && (max != a))*a + ((min != b) && (max != b))*b + ((min != c) && (max != c))*c;
    printf(" Hamgiin ih utga: %d\n Hamgiin baga utga: %d\n Dund utga: %d", max,min,avg);
}