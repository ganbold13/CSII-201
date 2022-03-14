#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_2darray(int a[][100], int n, int m)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d", &a[i][j]);
}
void print_2darray(int a[][100], int n, int m)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
void min(int a[][100], int n, int m, int row[], int col[]){
    int i,j,min;
    for(i=0;i<n;i++){
        min = a[i][0];
        for(j=0;j<n;j++){
            if(a[i][j] < min){
                min = a[i][j];
            }
        }
        row[i] = min;
    }
    for(i=0;i<n;i++){
        min = a[0][i];
        for(j=0;j<n;j++){
            if(a[j][i] < min){
                min = a[j][i];
            }
        }
        col[i] = min;
    }
}
int main(){
    int c_row, c_col,i;
    int A[100], B[100];
    int C[100][100];

    printf("Husnegtiin mor, baganii toog oruul: ");
    scanf("%d%d", &c_row, &c_col);

    read_2darray(C, c_row, c_col);
    print_2darray(C, c_row, c_col);

    min(C, c_row, c_col, A, B);
    printf("mor buriin hamgiin baga: ");
    for(i=0;i<c_row;i++){
        printf("%d-r moriin hamgiin baga too %d\n", i+1, A[i]);
    }
    printf("bagana buriin hamgiin baga: ");
    for(i=0;i<c_col;i++){
        printf("%d-r baganii hamgiin baga too %d\n", i+1, B[i]);
    }
    return 0;
}