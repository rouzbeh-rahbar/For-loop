#include <stdio.h>

int main(void) 
{
  int z;
  printf("Dieses Programm liest eine Zahl ein und gibt anschließend entsprechend oft \"Hello World\" aus.\n\n");
  printf("Wie oft soll \"Hello World\" ausgegeben werden: ");
  scanf("%d",&z);
  for(int i=1; i<=z ; i++)
  {
    printf("Hello World (%d. mal)\n",i);
  }
  
  return 0;
}