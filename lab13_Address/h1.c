#include <stdio.h>
void find(int a[], int n, int *max, int *min){
    int c,d,i=0;
    c = a[i];
    d = a[i];
    for(i=1;i<n;i++){
        if(c < a[i])
            c = a[i];
        if(d > a[i])
            d = a[i];
    }
    *max = c;
    *min = d; 
}
void read(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
}
void print(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ", a[i]);
        printf("\n");
}
int main(){
    int a[100];
    read(a,5);
    print(a,5);
    int x,y;
    find(a,5,&x,&y);
    printf("Max utga ni: %d\n", x);
    printf("Min utga ni: %d\n", y);
}