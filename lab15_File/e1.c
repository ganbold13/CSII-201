#include <stdio.h>
#include <stdlib.h>
int main(){
    int sum = 0;
    FILE* fp = fopen("input.txt", "r");
    int num[2];
    int i;
    if(fp==NULL){
        printf("Error Reading File\n");
        exit(0);
    }
    for(i=0;i<2; i++){
        fscanf(fp, "%d", &num[i]);
    }
    for(i=0;i<2;i++){
        sum=sum+num[i];
    }
    fclose(fp);
    printf("%d\n", sum);
}