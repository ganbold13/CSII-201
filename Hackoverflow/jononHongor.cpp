#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n=8,m=8,x=4,y=4;
    scanf("%d%d%d%d", &n,&m,&x,&y);
    int i,j,k=0;
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if( (((x+2) == i || (x-2)==i) && ((y+1) == j || (y-1) == j)) || 
                (((y+2) == j || (y-2)==j) && ((x+1) == i || (x-1) == i))){
                k++;
            }
        }
    }
    
    printf("%d", k);
}
