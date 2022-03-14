#include <stdio.h>
#include <math.h>
struct Rational {
    int d,n;
};
typedef struct Rational Rational;
Rational add(Rational a, Rational b);
Rational sub(Rational a, Rational b);
Rational mult(Rational a, Rational b);
Rational div(Rational a, Rational b);
Rational simply(Rational a);
void print(Rational a);
int main(){
    Rational n1, n2,a1,s1,m1,d1,si1,si2;
    scanf("%d%d%d%d", &n1.d, &n1.n, &n2.d, &n2.n);
    a1 = add(n1,n2);
    s1 = sub(n1,n2);
    m1 = mult(n1,n2);
    d1 = div(n1,n2);
    si1 = simply(n1);
    si2 = simply(n2);
    print(n1);
    print(n2);
    printf("Niilber ni %d/%d\n", a1.d, a1.n);
    printf("Ylgawar ni %d/%d\n", s1.d, s1.n);
    printf("Urjwer ni %d/%d\n", m1.d, m1.n);
    printf("Nogdwor ni %d/%d\n", d1.d, d1.n);
    printf("Ehnii rationaliin emhetgesen ni %d/%d\n", si1.d, si1.n);
    printf("2dah rationaliin emhetgesen ni %d/%d\n", si2.d, si2.n);
}
Rational add(Rational a, Rational b){
     Rational c;
     c.d = (a.n*b.d+a.d*b.n);
     c.n = a.n*b.n;
     return c; 
}
Rational sub(Rational a, Rational b){
    Rational c;
    c.d = (a.n*b.d-a.d*b.n);
    c.n = a.n*b.n;
    return c; 
}
Rational mult(Rational a, Rational b){
    Rational c;
    c.d = a.d*b.d;
    c.n = a.n*b.n;
    return c; 
}
Rational div(Rational a, Rational b){
    Rational c;
    c.d =  a.d*b.n;
    c.n = a.n*b.d;
    return c; 
}
Rational simply(Rational a){
    Rational c; 
    int i,max=1;
    for(i=2;i<=a.d;i++){
        if(a.d%i==0 && a.n%i==0){
            max=i;
        }
    }
    c.d = a.d/max;
    c.n = a.n/max;
    return c;
}
void print(Rational a){
    printf("%d/%d\n", a.d,a.n);
}