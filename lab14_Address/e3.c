#include <stdio.h>
int *find(int *begin, int *end, int x);
int main(){
    int a[5] = {3,7,1,2,4};
    int *p, x;
    printf("Haih too: ");
    scanf("%d", &x);
    p = find(a, a+5, x);
    if(p==NULL)
        printf("%d too oldsongui\n", x);
    else
        printf("%d too %ld bairlald oldloo\n", x, p-a);
        return 0;
}
int *find(int *begin, int *end, int x){
    int *p;
    for(p=begin;p<end;p++){
        if(*p == x)
            return p+1;
    }
    return NULL;
}