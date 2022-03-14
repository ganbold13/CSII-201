        #include <stdio.h>
        void reverse(int *begin, int *end);
        int size(int *b, int *e);
        int main(){
            int a[5] = {3,7,1,2,4};
            int i;
            reverse(a, a+3);
            for(i=0;i<5;i++)
                printf("%d ", a[i]);
            return 0;
        }
        void reverse(int *begin, int *end){
            int b, e, i, r;
            b = *begin;
            r = size(begin, end);
            for(i = 0; i<r/2; i++){
                *begin = *end-1;
                *(end-1) = b;
                begin++;
                end--;
            }
        }
        int size(int *b, int *e){
            int r;
            r = e-b;
            return r;
        }