//Homework_2 Ganbold
#include <stdio.h>
int main(){
    int a,b,c,d,num,o1,o2,o3,o4;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    int z[] = {a,b,c,d};
    for(int i=0; i<4; i++){
        o1=z[i];
        for(int j=0;j<4;j++){
            o2 = z[j];
            for(int k=0;k<4;k++){
                o3 = z[k];
                for(int l=0;l<4;l++){
                     o4 = z[l];
                     num = o1*1000+o2*100+o3*10+o4;
                     printf("%d\n", num);
                    }
                }
            }
        }
}