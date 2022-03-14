#include <stdio.h>
int main(){
    int y,m,d,yn=2021,mn=9,dn=27;
    printf("On, sar, odriig oruulna uu\n");
    scanf("%d%d%d", &y,&m,&d);
    if(y>yn){
        printf("%d-%d-%d bol ireedui\n",y,m,d);
    } else{
        if(m>mn){
            printf("%d-%d-%d bol ireedui\n",y,m,d);
        } else{
            if(d>dn){
            printf("%d-%d-%d bol ireedui\n",y,m,d);
        }
    }
    if(y<yn){
        printf("%d-%d-%d bol ungursun\n",y,m,d);
    } else{
        if(m<mn){
            printf("%d-%d-%d bol ungursun\n",y,m,d);
        } else{
            if(d<dn){
                printf("%d-%d-%d bol ungursun\n",y,m,d);
              }
            }
        }
    }
}