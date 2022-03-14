#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student{
    char fname[20], lname[20], id[10];
    float gpa;
};
typedef struct Student Student;
int main(){
    FILE* fp = fopen("student.txt", "r");
    int i, n;
    scanf("%d", &n);
    Student a[n];
    if(fp==NULL){
        printf("Error Reading File\n");
        exit(0);
    }
    fread(a, sizeof(struct Student), n, fp);
    fclose(fp);
}