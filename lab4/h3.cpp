#include <stdio.h>
int main(){
    int s;
    printf("Eregtei bol 1, emegtei bol 0-g oruul\n");
    scanf("%d", &s);
    float h,w,d;
    printf("Undur(cm), jing(kg) oruul\n");
    scanf("%f%f", &h,&w);
    d = (h-150)/2.5;
    if(s){
        if(w > (52+d*1.9)){
            printf("Iluudel jintei");
        } else{
            printf("Hewiin jintei");
        }
        
    } else{
        if(w > (49+d*1.7)){
            printf("Iluudel jintei");
        }else{
            printf("Hewiin jintei");
        }
    }
    
}