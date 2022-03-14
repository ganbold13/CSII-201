#include <stdio.h>
struct Date
{
    int d,m,y;
};
typedef struct Date Date;
struct Date read();
void print(Date);
int less(Date a, Date b);
int main(){
    struct Date dt;
    struct Date dt1;
    dt = read();
    dt1 = read();
    print(dt);
    print(dt1);
    printf("%d", less(dt,dt1));
}
struct Date read(){
    struct Date dt1;
    printf("On/Sar/Odor daraallaar oruulna uu\n");
    scanf("%d%d%d", &dt1.y, &dt1.m, &dt1.d);
    return dt1;
}
void print(Date dt){
    if(dt.d < 1 || dt.d > 31 || dt.m < 1 || dt.m > 12)
        printf("Aldaatai utga baina\n"); 
    else if(dt.d < 10 && dt.m < 10)
        printf("%d/0%d/0%d\n", dt.y,dt.m,dt.d);
    else if (dt.m < 10)
        printf("%d/0%d/%d\n", dt.y,dt.m,dt.d);
    else  if(dt.d < 10)
        printf("%d/%d/0%d\n", dt.y,dt.m,dt.d);
}
int less(Date a, Date b){
    if(b.y - a.y < 0)
        return 0;
    else if(b.m - a.m < 0)
        return 0;
    else if(b.d - a.d < 0)
        return 0;
    return 1;
}

