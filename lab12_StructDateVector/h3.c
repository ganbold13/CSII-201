#include <stdio.h>
#include <math.h>
struct Vector {
    int dim;
    float dat[100];
};
typedef struct Vector Vector;
// a*b
int dot_product(Vector a, Vector b);
//a-g t scalar
Vector scalar_mult(Vector a, int t);
//sqrt(a*a)
double len(Vector a);
Vector read();
void print(Vector a);
int main(){
    Vector vector1,vector2,resultVec;
    int t;
    vector1 = read();
    vector2 = read();
    printf("t toog oruul(scalar urjweriin):\n");
    scanf("%d", &t);
    resultVec = scalar_mult(vector1, t);
    printf("Scalar urjwer ni: %d\n", dot_product(vector1,vector2));
    printf("Urt ni: %.2f\n", len(vector1));
    printf("Urt ni: %.2f\n", len(vector2));
    printf("%d-r urjuuslen scalar urjwer ni ", t);
    print(resultVec);
    
}
double len(Vector a){
    int s=0,i,r;
    for(i=0;i<a.dim;i++){
        s=s+a.dat[i]*a.dat[i];
    }
    r = sqrt(s);
    return r;
}
Vector read(){
    Vector vec;
    int i;
    printf("Vectoriin hemjeesiig oruulna uu(dimension):\n");
    scanf("%d", &vec.dim);
    printf("Vectoriig oruulna uu:\n");
    for(i=0;i<vec.dim;i++){
        scanf("%f", &vec.dat[i]);
    }
    return vec;
}
void print(Vector a){
    int i;
    for(i=0;i<a.dim;i++){
        printf("%.2f ", a.dat[i]);
    }
    printf("\n");
}
int dot_product(Vector a, Vector b){
    int i,s=0;
    if(a.dim == b.dim){
        for(i=0;i<a.dim;i++){
            s=s+a.dat[i]*b.dat[i];
        }
        return s;
    } else
        return -1;
}
Vector scalar_mult(Vector a, int t){
    Vector b;
    int i;
    b.dim=a.dim;
    for(i=0;i<a.dim;i++){
        b.dat[i] = a.dat[i]*t;
    }
    return b;
}
