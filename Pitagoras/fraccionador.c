#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])


{
  float num,den,equi,equidos,equitres,equicuatro,emergencia;
  float deci;
  printf("Bienvenidos a Fraccioneitor\n");
  printf("----------DIVEL------------\n");
  printf("Pulse ENTER para empezar\n");
  getchar();
  system("cls");
  printf("Introduzca numerador\n");
  scanf("%f",&num);
  system("cls");
  printf("Introduzca el denominador\n");
  scanf("%f",&den);
  system("cls");
  deci = (float) num/den;
  printf("Fraccion:% 1f/% 1f\n",num,den);
  printf("Valor decimal:%f\n",deci);
  printf("\n");
  if(num == 0){
         printf("Esta es una fraccion de numerador 0, su resultado siempre es 0\n");
         }
  if(den == 0){
         printf("Esta es una fraccion de denominador 0, carece de solucion\n");
         }
  if(num<den){
              printf("Esta es una fraccion propia o con sentido\n");
              }
  if(num>den){
              printf("Esta es una fraccion impropia o carente de sentido\n");
              }
  equi = (int) num*2;
  equidos = (int) den*2;
  printf("Fraccion equivalente x2: %f/%f\n",equi,equidos);
  equitres = (int) num/2;
  equicuatro = (int) den/2;
  /*if(equitres || equicuatro == (float)0){
              printf("Fraccion irreducible\n");
              }else{
                    printf("Fraccion equivalente :2 : %f/%f\n",equitres,equicuatro);
                    printf("Fraccion reducible\n");
                    }
  */
  printf("Fraccion equivalente :2 : %f/%f\n", equitres,equicuatro);
  system("PAUSE");	
  return 0;
}
