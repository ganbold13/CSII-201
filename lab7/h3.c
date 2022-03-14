#include <stdio.h>
 
int main()
{
  int m, n, k, i, d, p, sum = 0;
  scanf("%d%d%d", &m, &n,&k);
  int a[n][m], b[m][k], c[10][10];
  for (i = 0; i < m; i++)
    for (d = 0; d < n; d++)
      scanf("%d", &a[i][d]);
  for (i = 0; i < m; i++)
    for (d = 0; d < k; d++)
      scanf("%d", &b[i][d]);
 

    for (i = 0; i < n; i++) {
      for (d = 0; d < k; d++) {
        for (p = 0; p < m; p++) {
          sum = sum + a[i][p]*b[p][d];
        }
        c[i][d] = sum;
        sum = 0;
      }
    }
 
    for (i = 0; i < m; i++) {
      for (d = 0; d < k; d++)
        printf("%d\t", c[i][d]);
 
      printf("\n");
    }
}
 

