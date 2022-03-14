#include <stdio.h>
void swap(int *a, int *b){
    int c = *a;
    int d = *b;
    *a = d;
    *b = c;
}
int main(){
    int x=1,y=2;
    swap(&x,&y);
    printf("%d %d\n", x,y);
    return 0;
}