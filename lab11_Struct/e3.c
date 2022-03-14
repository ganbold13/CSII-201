#include <stdio.h>
#include <math.h>
struct Triangle
{
    int a,b,c;
};
double find_area(struct Triangle tri){
    double p = (tri.a+tri.b+tri.c)/2;
    double z = p*(p-tri.a)*(p-tri.b)*(p-tri.c);
    double area = sqrt(z);
    return area;
}
int main(){
    struct Triangle tri1;
    struct Triangle tri2;
    double a1,a2;
    scanf("%d%d%d%d%d%d", &tri1.a,&tri1.b,&tri1.c,&tri2.a,&tri2.b,&tri2.c);
    a1=find_area(tri1);
    a2=find_area(tri2);
    if(a1>a2)
        printf("%d, %d, %d taltai gurwaljin tom\n", tri1.a, tri1.b,tri1.c);
    else
        printf("%d, %d, %d taltai gurwaljin tom\n", tri2.a, tri2.b,tri2.c);
}
