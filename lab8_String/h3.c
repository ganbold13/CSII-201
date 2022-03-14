#include <stdio.h>
#include <string.h>

int main() {
   char s1[100];
   char s2[100];
   gets(s1);
   gets(s2);
   int n = 0;
   int m = 0;
   int count = 0;
   int len = strlen(s2);      
   while(s1[n] != '\0') {
      if(s1[n] == s2[m]) {     
         while(s1[n] == s2[m]  && s1[n] !='\0') {
            n++;
            m++;
         }
         if(m == len && (s1[n] == ' ' || s1[n] == '\0')) {
            printf("%d-d ehleed %d-d duusch bna.\n", n-1,n+len-1);
            count++;
         }
      } else {            
         while(s1[n] != ' ') {       
            n++;
            if(s1[n] == '\0')
            break;
         }
      }
      n++;
      m=0; 
   }

   if(count == 0){
      printf("-1");
   }

}