#include <stdio.h>
int main(){
    int k,n,m,i,j,l,num=1;
    printf("Orts, Dawhar, Ailiin too gesen daraallaar oruulna uu\n");
    scanf("%d%d%d", &k,&n,&m);
    int a[k][n][m];
    for(i=0;i<k;i++){
        for(j=0;j<n;j++){
            for(l=0;l<m;l++){
                printf("%d dugaartai ail, %d ortsnii %d dawhriin %d-r ail\n", num,i+1,j+1,l+1);
                num++;
            }
        }
    }

}
