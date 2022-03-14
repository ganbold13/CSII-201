#include <stdio.h>


int main(){
    int i, s=0, n=50;
    for(i=1; i<=n; i+=i){
        if(i%3==2 || i%7==0)
            break;
        s+=1;
        
    }  
    printf("%d ", s); 
}