#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct Student{
    char fname[20], lname[20], id[10];
    float gpa;
};
typedef struct Student Student;
Student read(){
    Student stud;
    printf("fname: \n");
    scanf("%s", stud.fname);
    printf("lname: \n");
    scanf("%s", stud.lname);
    printf("id: \n");
    scanf("%s", stud.id);
    printf("gpa: \n");
    scanf("%f", &stud.gpa);
    return stud;
}
int main(){
    int n,i;
    scanf("%d", &n);
    Student studList[n];
    for(i=0;i<n;i++){
        studList[i]=read();
    }
    FILE *fp=fopen("students.txt", "w");
    if(fp==NULL){
        printf("Error");
        exit(1);
    }
    fwrite(studList, sizeof(struct Student), n, fp);
    fclose(fp);
}
