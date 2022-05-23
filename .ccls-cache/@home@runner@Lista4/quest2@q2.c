#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LIM 100

int main(void) {
  int a=0,b=0;
  int *pa=NULL,*pb=NULL;

  srand(time(NULL));
  a = rand() % LIM;
  b = rand() % LIM;

  pa = &a;
  pb = &b;
  printf("\nPrimeira ordem: \n[%p]: %d \n[%p]: %d \n",pa,*pa,pb,*pb);
  
  *pa ^= *pb;
  *pb ^= *pa;
  *pa ^= *pb;
  printf("\nValores trocados: \n[%p]: %d \n[%p]: %d \n",pa,*pa,pb,*pb);

  return 0;
}