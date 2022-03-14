#include <stdio.h>
#include <string.h>

void main(){
    char fName[100];
    char lName[100];
    int bYear;
    int bMonth;
    int bDay;
    char color[100];
    char hobby[100];
    char freeTime[100];
    printf("Enter your first name\n");
    scanf("%s", fName);
    printf("Enter your last name\n");
    scanf("%s", lName);
    printf("Enter your birth year\n");
    scanf("%d", &bYear);
    printf("Enter your birth month\n");
    scanf("%d", &bMonth);
    printf("Enter your birth day\n");
    scanf("%d", &bDay);
    printf("Enter your favorite color\n");
    scanf("%s", color);
    printf("Enter your hobby\n");
    scanf("%s", hobby);
    printf("Enter what do you do in your freetime\n");
    scanf("%s", freeTime);
    int age;
    age=2021-bYear;

    printf("%s овогтой %s нь %d-%d-%d өдөр төрсөн. Одоо %d настай. Түүний дуртай өнгө бол %s. Тэр чөлөөт цагаараа %s хийдэг. Түүний хобби бол %s.", lName,fName,bYear,bMonth,bDay,age,color,freeTime,hobby);
}