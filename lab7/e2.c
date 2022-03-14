#include <stdio.h>
int main(){
    int n,i,s=0,count=0;
    double avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++){
        if(a[i] > avg)
            count++;
    }
    printf("Dundjaas deesh undurtei huuhdiin too %d", count);
}