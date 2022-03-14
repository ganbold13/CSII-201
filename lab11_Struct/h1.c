#include <stdio.h>
#include <string.h>
struct Student
{
    char fName[20], lName[20], id[10];
    float golch;
};
typedef struct Student Student;
void read_students(Student a[], int n);
void print_students(Student a[], int n);
int search_by_fname(Student a[], int n, char fname[]);
int search_by_lname(Student a[], int n, char lname[]);
int search_by_id(Student a[], int n, char id[]);
int search_by_golch(Student a[], int n, float golch);
void sort_by_golch(Student a[], int n);
int main(){
    int n;
    char fname_search[20],lname_search[20], id_search[10];
    float golch_search;
    scanf("%d", &n);
    Student a[n];
    printf("Haih fname-g oruul\n");
    scanf("%s", fname_search);
    printf("Haih lname-g oruul\n");
    scanf("%s", lname_search);
    printf("Haih id-g oruul\n");
    scanf("%s", id_search);
    printf("Haih golch-g oruul\n");
    scanf("%f", &golch_search);
    read_students(a,n);
    print_students(a,n);
    printf("fname-r haihad %d-r suragch oldloo\n", search_by_fname(a,n, fname_search));
    printf("lname-r haihad %d-r suragch oldloo\n", search_by_lname(a,n, lname_search));
    printf("id-r haihad %d-r suragch oldloo\n", search_by_id(a,n, id_search));
    printf("golch-r haihad %d-r suragch oldloo\n", search_by_golch(a,n, golch_search));
}
void read_students(Student a[], int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%s", a[i].fName);
        scanf("%s", a[i].lName);
        scanf("%s", a[i].id);
        scanf("%f", &a[i].golch);
    }
}
void print_students(Student a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%s ", a[i].fName);
        printf("%s ", a[i].lName);
        printf("%s ", a[i].id);
        printf("%.2f\n", a[i].golch);
    }
}
int search_by_fname(Student a[], int n, char fname[]){
    int i,c;
    for(i=0;i<n;i++){
        c = strcmp(fname, a[i].fName);
        if(c==0)
            break;
        else
            return 0;
    }
    return i+1;
}
int search_by_lname(Student a[], int n, char lname[]){
    int i,c;
    for(i=0;i<n;i++){
        c = strcmp(lname, a[i].lName);
        if(c==0)
            break;
        else
            return 0;
    }
    return i+1;
}
int search_by_id(Student a[], int n, char id[]){
    int i,c;
    for(i=0;i<n;i++){
        c = strcmp(id, a[i].id);
        if(c==0)
            break;
        else
            return 0;
    }
    return i+1;
}
int search_by_golch(Student a[], int n, float golch){
    int i,c;
    for(i=0;i<n;i++){
       if(golch == a[i].golch)
           break;
        else
            return 0;
    }
    return i+1;
}