#include <stdio.h>
struct Rational{
    int d,n; // d/n
};
typedef struct Rational Rational;
void read(Rational *a){
    scanf("%d%d", &a->d, &a->n);
}
void print(Rational *a){
    printf("%d/%d\n", a->d,a->n);
}
Rational add(const Rational *a, const Rational *b){
     Rational c;
     c.d = ((a->n)*(b->d)+(a->d)*(b->n));
     c.n = (a->n)*(b->n);
     return c; 
}
Rational sub(const Rational *a, const Rational *b){
    Rational c;
    c.d = (a->n*b->d-a->d*b->n);
    c.n = a->n*b->n;
    return c; 
}
Rational mult(const Rational *a, const Rational *b){
    Rational c;
    c.d = a->d*b->d;
    c.n = a->n*b->n;
    return c; 
}
Rational div(const Rational *a, const Rational *b){
    Rational c;
    c.d =  a->d*b->n;
    c.n = a->n*b->d;
    return c; 
}
Rational simply(Rational *a){
    Rational c; 
    int i,max=1;
    for(i=2;i<=a->d;i++){
        if(a->d%i==0 && a->n%i==0){
            max=i;
        }
    }
    c.d = a->d/max;
    c.n = a->n/max;
    return c;
}
int main(){
    struct Rational a,b,sum,subst,simplied,multipied,divided;
    read(&a);
    read(&b);
    print(&a);
    print(&b);
    sum = add(&a,&b);
    subst = sub(&a,&b);
    multipied=mult(&a,&b);
    divided=div(&a,&b);
    simplied=simply(&a);
    print(&sum);
    print(&subst);
    print(&multipied);
    print(&divided);
    print(&simplied);
}
