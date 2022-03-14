//Homework_3 Ganbold
#include <stdio.h>
int main(){
    int total = 35;
    float score, percentage;
    scanf("%f",&score);
    percentage = (score/total)*100;
    if(percentage>89){
       printf("A");
    }
    if (90 > percentage && percentage > 79)
    {
       printf("B");
    }
    if (80 > percentage && percentage > 69)
    {
        printf("C");
    }
    if (70 > percentage && percentage > 59)
    {
        printf("D");
    } 
    if (percentage < 60)
    {
        printf("F");
    }
           
}