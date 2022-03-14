#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char fname[20], lname[20], id[10];
    float gpa;
};
typedef struct Student Student;
void read(Student a[], int n);
void print(Student a[], int n);
void student_write(Student a[], int n, char fname[]);
int student_read(Student a[], char fname[]);
int main(){
    Student a[100], b[100];
    int n,m;
    scanf("%d", &n);
    read(a,n);
    print(a,n);

    student_write(a,n,"info.dat");
    m=student_read(b,"info.dat");
    print(b,m);
    return 0;
}
void read(Student a[], int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%s", a[i].fname);
        scanf("%s", a[i].lname);
        scanf("%s", a[i].id);
        scanf("%f", &a[i].gpa);
    }
}
void print(Student a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%s ", a[i].fname);
        printf("%s ", a[i].lname);
        printf("%s ", a[i].id);
        printf("%.2f\n", a[i].gpa);
    }
}
void student_write(Student a[], int n, char fname[]){
    FILE *file = fopen(fname, "wb");
    int i;
    for(i=0;i<n;i++){
        fwrite(a[i].fname,sizeof(a->fname),n,file);
        fwrite(a[i].lname,sizeof(a->lname),n,file);
        fwrite(a[i].id,sizeof(a->id),n,file);
        fwrite(&a[i].gpa,sizeof(a->gpa),n,file);
    }
    fclose(file);
}
int student_read(Student a[], char fname[]){
    FILE *file = fopen(fname, "rb");
    int num;
    num = fread(a, sizeof(*a), sizeof(a)/sizeof(*a),file);
    fclose(file);
    return num;
}