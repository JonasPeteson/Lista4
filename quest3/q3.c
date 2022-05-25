#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int a=0,*pa=NULL,b=0,*pb=NULL;

  puts("Digite um número natural diferente de 0:");
  scanf("%d",&a);
  pa = &a;
  if(*pa>0){
    while(*pa != 0){
    printf("Seu menor número:%d\n",*pa);
    puts("Digite outro número natural:");
    scanf("%d",&b);
    pb = &b;
    if(*pb<*pa){
      *pa = *pb;
      *pb = 0;
    }
    }
    puts("Programa encerrado!");
  }
  else{
    puts("Erro, porfavor tente novamente!");
  }
    return 0;
}