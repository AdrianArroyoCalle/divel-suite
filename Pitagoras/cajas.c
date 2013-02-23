#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MANZANAS 1.00
#define PLATANOS 1.20


int main(int argc, char *argv[])
{
  int i=0;
  int seleccion;
  float peso,total;
  while(i==0){
  system("title Divel Cajas");
  printf("Introduce el codigo de articulo y despues el peso\n");
  scanf("%d",&seleccion);
  scanf("%f",&peso);
  switch(seleccion){
                    case 1 : printf("Son %f €\n",peso*MANZANAS);
                    break;
                    case 2 : printf("Son %f €\n",peso*PLATANOS);
                    break;
                    case 0 : exit(0);
                    break;
                    }
  fflush(stdin);
  getchar();
  }
  
  system("PAUSE");	
  return 0;
}
