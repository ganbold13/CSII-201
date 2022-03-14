#include <stdio.h>
void *find(int *begin, int *end, int x, int y);
int main(){
    int a[5] = {3,7,3,2,4};
    int *p, x, y, i;
    printf("Haih too: ");
    scanf("%d", &x);
    printf("Solih too: ");
    scanf("%d", &y);
    find(a, a+5, x, y);
    for(i=0;i<5;i++)
        printf("%d ", a[i]);

}
void *find(int *begin, int *end, int x, int y){
    int *p;
    for(p=begin;p<end;p++){
        if(*p == x)
            *p = y;
    }
}