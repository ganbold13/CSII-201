#include <stdio.h>
int main(){
    int n,i,j,s=0;
    scanf("%d", &n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            s=s+a[i][j];
        }
        printf("%d-r mornii niilber %d baina. \n",i+1,s);
        s=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            s=s+a[j][i];
        }
        printf("%d-r baganii niilber %d baina. \n",i+1,s);
        s=0;
    }
     for(i=0;i<n;i++){
            s=s+a[i][i];
    }
    printf("zuun diagonaliin niilber %d baina. \n",s);
    s=0;
    for(i=0,j=n-1;i<n && j>-1;i++,j--){
        s=s+a[i][j];
    }
    printf("baruun diagonaliin niilber %d baina. \n",s);
}