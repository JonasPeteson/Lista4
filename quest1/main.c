#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LIM 100

int main(void) {
  int a=0,b=0,s=0;
  int *pa=NULL,*pb=NULL,*ps=NULL;

  srand(time(NULL));
  
  a = rand() % LIM;
  b = rand() % LIM;

  pa = &a;
  pb = &b;
  ps = &s;

  *ps = *pa + *pb;

  printf("Valores dos dois numeros:\n%d [%p] \n%d [%p]   \nValor da soma:\n%d [%p]\n",*pa,pa,*pb,pb,*ps,ps);
  return 0;
  
}