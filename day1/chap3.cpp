#include <stdio.h>
#include <math.h>
#include <cstring>
#define maxn 1010
int a[maxn];

void fun1()
{
  int x, n = 0;

  // int m = scanf("%d", &x);
  // printf("%d\n", m);

  while (scanf("%d", &x) == 1)
  {
    a[n++] = x;
  }

  for (int i = 0; i <= n - 1; i++)
    printf("%d\n", a[i]);

  for (int i = n - 1; i >= 1; i--)
    printf("%d ", a[i]);
  printf("%d\n", a[0]);
}
/**
 * Light problem
 * n, num of lights
 * k,  num of people
 */
void light()
{
  printf("Light problem\n");

  int n;
  int k;
  // #define maxn 1010
  // int a[maxn];
  int first = 1;
  memset(a, 0, sizeof(a));

  // Input n and k
  scanf("%d %d",&n,&k);
  for(int i = 1; i<=k;i++){
    for(int j = 1;j<=n;j++){
      if(j%i == 0){
        a[j] = !a[j];
      }
    }
  }

  // print results
  for(int i = 1;i<=n;i++)
    if(a[i]==1){
      if(first){
        first = 0;
      }else {
        printf(" ");
      }
        printf("%d",i);
    }
    printf("\n");

}

int main()
{
  printf("hi...\n");
  light();

  return 0;
}