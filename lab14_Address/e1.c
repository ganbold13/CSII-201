#include <stdio.h>
int main(){
    int i, a[100], *ptr;
    for(i=0;i<5;i++)
        scanf("%d", a + i);
    ptr = a;
    for(i=0;i<5;i++){
        printf("%d ", *ptr);
        ptr++;
    }
}