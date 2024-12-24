#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main () {
char s[1000];
fgets(s, sizeof(s), stdin);
int n= strlen(s)-2;
for (int i=0; i<=n/2; i++)
{
if (s[i] != s[n-i])
{
printf("NO");
return 0;
}
}
printf("YES");
return 0;
}
