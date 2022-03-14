#include <stdio.h>
#include <math.h>
struct Point
{
    int x,y;
};
double distance(struct Point a, struct Point b){
    double d,dx,dy,m;
    dx = a.x-b.x;
    dy = a.y-b.y;
    m=dx*dx-dy*dy;
    d=sqrt(m);
    return d;
}
int main(){
    struct Point p1;
    struct Point p2;
    double d1;
    scanf("%d%d%d%d", &p1.x, &p1.y, &p2.x, &p2.y);
    d1=distance(p1,p2);
    printf("%.2f", d1);
}
