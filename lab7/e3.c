#include <stdio.h>
int main(){
    int n,i,j,b=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0,j=n-1;i<n/2 && j>n/2;i++,j--){
        if(a[i] != a[j])
            break;
        else
            b=1;
        
    }
    if(b==1)
        printf("Tegsh hemtei");
    else
        printf("Tegsh hemgui");
}