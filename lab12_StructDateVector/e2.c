#include <stdio.h>
struct Date
{
    int d,m,y;
};
typedef struct Date Date;
void read(Date dt[], int n);
void print(Date dt[], int n);
int main(){
    
    int n;
    scanf("%d", &n);
    struct Date dt[n];
    read(dt,n);
    print(dt,n);
}
void read(Date dt[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("On/Sar/Odor daraallaar oruulna uu\n");
        scanf("%d%d%d", &dt[i].y, &dt[i].m, &dt[i].d);
        } 
}
void print(Date dt[], int n){
    int i;
    for(i=0;i<n;i++){
        if(dt[i].d < 1 || dt[i].d > 31 || dt[i].m < 1 || dt[i].m > 12)
        printf("Aldaatai utga baina\n"); 
    else if(dt[i].d < 10 && dt[i].m < 10)
        printf("%d/0%d/0%d\n", dt[i].y,dt[i].m,dt[i].d);
    else if (dt[i].m < 10)
        printf("%d/0%d/%d\n", dt[i].y,dt[i].m,dt[i].d);
    else  if(dt[i].d < 10)
        printf("%d/%d/0%d\n", dt[i].y,dt[i].m,dt[i].d);
    }
}