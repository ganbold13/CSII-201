#include <stdio.h>
#include <math.h>
struct Point{
    int x,y;
};
typedef struct Point Point;

struct Triangle_P{
    Point A, B, C;
};
typedef struct Triangle_P Triangle_P;
struct Point read();
double distance(Point a, Point b);
double find_area(Triangle_P tri);
int main(){
    struct Triangle_P triangle;
    triangle.A = read();
    triangle.B = read();
    triangle.C = read();
    printf("%.2f", find_area(triangle));
}
struct Point read(){
    Point o;
    scanf("%d%d", &o.x, &o.y);
    return o;
}
double distance(Point a, Point b){
    double d,dx,dy,m;
    dx = a.x-b.x;
    dy = a.y-b.y;
    m=dx*dx+dy*dy;
    d=sqrt(m);
    return d;
}
double find_area(Triangle_P tri){
    double l,m,n,p,s,r;
    l = distance(tri.A, tri.B);
    m = distance(tri.A, tri.C);
    n = distance(tri.B, tri.C);
    p = (l+m+n)/2;
    s = p*(p-l)*(p-m)*(p-n);
    r = sqrt(s);
    return r;
}
