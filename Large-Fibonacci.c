#include <stdio.h>
int main()
{
   int n;
    scanf("%d", &n);
   int F[n + 1];
    F[0] = 0;
      F[1] = 1;
    for(int i = 2; i <= n; i++)
       F[i] = (F[i - 1] + F[i - 2]) % 10;
           printf("Last digit of a large Fibonacci number:%d\n", F[3]);
  return 0;
}
