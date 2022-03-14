#include <stdio.h>
#include <math.h>
int main(){
    int x1,x2,x3,y1,y2,y3,dis1,dis2,dis3;
    printf("Tseguudiig x1 y1 x2 ... daraallaar oruulna uu\n");
    scanf("%d%d%d%d%d%d", &x1,&y1,&x2,&y2,&x3,&y3);
    dis1 = pow(x1,2) + pow(y1,2);
    dis2 = pow(x2,2) + pow(y2,2);
    dis3 = pow(x3,2) + pow(y3,2);
    
    if(dis1 > dis2){
        if(dis1 > dis3){
            printf("(%d,%d) tseg hamgiin hol ni\n", x1,y1);
        } else {
            printf("(%d,%d) tseg hamgiin hol ni\n", x3,y3);
        }
    } else {
        if (dis2 > dis3){
            printf("(%d,%d) tseg hamgiin hol ni\n", x2,y2);
        } else{
            printf("(%d,%d) tseg hamgiin hol ni\n", x3,y3);
        }
        
    }
    if(dis1 < dis2){
        if(dis1 < dis3){
            printf("(%d,%d) tseg hamgiin oir ni\n", x1,y1);
        } else {
            printf("(%d,%d) tseg hamgiin oir ni\n", x3,y3);
        }
    } else {
        if (dis2 < dis3){
            printf("(%d,%d) tseg hamgiin oir ni\n", x2,y2);
        } else{
            printf("(%d,%d) tseg hamgiin oir ni\n", x3,y3);
        }
        
    }
    
}