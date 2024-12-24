#include <stdio.h>

int max(int a,int b)
{
 if(a>b) return a; else return b;
}

void nhap(int a[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

int kq(int n, int a[100][100])
{
 int tg[n][n];
 tg[0][0]=a[0][0];
 
 for (int j = 1; j < n; j++) {
        tg[0][j] = tg[0][j - 1] + a[0][j];
    }
 
 for (int i = 1; i < n; i++) {
        tg[i][0] = tg[i - 1][0] + a[i][0];
    }
 
 
  for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            tg[i][j] = max(tg[i - 1][j], tg[i][j - 1]) + a[i][j];
        }
    }
    return tg[n-1][n-1];
}

int main()
{
 int n,a[100][100];
 scanf("%d",&n);
 nhap(a,n);

    printf("%d", kq(n,a));
}
