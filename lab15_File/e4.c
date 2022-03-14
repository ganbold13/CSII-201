#include <stdio.h>
#include <stdlib.h>
int main(){
    int sum = 0,n;
    FILE* fp = fopen("input.txt", "r");
    int i;
    if(fp==NULL){
        printf("Error Reading File\n");
        exit(0);
    }
    fscanf(fp, "%d", &n);
    int num[n];
    for(i=0;i<n;i++){
        fscanf(fp,"%d", &num[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+num[i];
    }
    fclose(fp);
    printf("%d\n", sum);
}