#include <stdio.h>
int *search(int a[], int value, int size){
    int i;
    for(i=0;i<size;i++){
        if(a[i] == value)
            return &a[i];
    }
    return NULL;
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
    int *p;
    p = search(a,3,5);
    if(p==NULL)
        printf("Oldsongui\n");
    else 
        printf("%d too %ld-r bairlald oldloo\n", *p, p-a+1);
    return 0;
}