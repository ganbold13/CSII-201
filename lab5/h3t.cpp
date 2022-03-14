#include <stdio.h>
int main(){
        int k,current,days=31;
        printf("3-r sariin 1 heddeh odor baihiig oruulna uu(Mon(0), Tue(1), Wed(2), Thu(3), Fri(4), Sat(5), Sun(6))\n");
        scanf("%d", &current);
        printf("  Mon  Tue  Wed  Thu  Fri  Sat  Sun\n");
        
        for (k = 0; k < current; k++)
            printf("     ");
  
        for (int j = 1; j <= days; j++) {
            if(k==6 || j==9 ){
                printf("|");
            }
            printf("%5d", j);


            if (++k > 6) {
                k = 0;
                printf("|\n");
            }
        }
  
        if (k)
            printf("|\n");
  
        current = k;
}
