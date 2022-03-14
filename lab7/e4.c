#include <stdio.h>
int main(){
    int n,m,i,j,countEven=0,countMax=0,maxCol;
    scanf("%d%d", &n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            if(a[i][j]%2==0)
                countEven++;
        }
        if(countEven > countMax){
            countMax=countEven;
            maxCol=j;
        }
        countEven=0;
    }
    printf("Hamgiin ih tegsh tootoi bagana bol %d-r bagana", maxCol+1);
}