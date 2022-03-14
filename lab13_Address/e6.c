#include <stdio.h>
#include <string.h>
struct Student{
    char fName[20], lName[20], id[10];
    float golch;
};
void read(struct Student *s){
    printf("Neriig oruul\n");
    scanf("%s", s->fName);
    printf("Ovgiig oruul\n");
    scanf("%s", s->lName);
    printf("ID-iig oruul\n");
    scanf("%s", s->id);
    printf("Golchiig oruul\n");
    scanf("%f", &s->golch);
}
void print(struct Student s){
    printf("%s ", s.fName);
    printf("%s ", s.lName);
    printf("%s ", s.id);
    printf("%.2f\n", s.golch);
}
void set_fName(struct Student *p, char ner[]){
    strcpy(p->fName,ner);
}
void set_lName(struct Student *p, char ovog[]){
    strcpy(p->lName,ovog);
}
void set_id(struct Student *p, char id[]){
    strcpy(p->id,id);
}
void set_golch(struct Student *p, float golch){
    p->golch = golch;
}
int main(){
    struct Student bat,t;
    read(&bat);
    print(bat);
    set_fName(&t, "dorj");
    set_lName(&t, "bold");
    set_id(&t, "1324");
    set_golch(&t, 3);
    print(t);
    return 0;
}
