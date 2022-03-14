#include <stdio.h>
int main(){
    int g,r;
    printf("Dung oruul\n");
    scanf("%d", &g);
    r=g/10;
    if(g>100 || 0>g){
        printf("Aldaatai utga");
    } else {
        switch (r)
        {
        case 10:
            printf("A");
            break;
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
    printf("F");
        break;
    }
    }
}