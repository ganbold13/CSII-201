#include <stdio.h>
int main(){
    int n,i,b,k=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    b=a[0];
    for(i=0;i<n;i++){
        if(b<a[i]){
            b=a[i];
        } else{
            b=b;
        }
        if(b==a[n-1] && a[0] < a[n-1])
            k=1;
    
    }
    for(i=0;i<n;i++){
        if(b>a[i]){
            b=a[i];
        } else{
            b=b;
        }
        if(b==a[n-1] && a[0] > a[n-1])
            k=-1;
    
    }
    switch (k)
    {
    case -1:
        printf("Buurahaar erembelegdsen");
        break;
    case 1:
        printf("Osohoor erembelegdsen");
        break;
    default:
        printf("Erembelegdeegui");
        break;
    }
    
}