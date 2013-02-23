#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int kilostotales,opcion,quepiden,quemasa;
  float total,datoa,datob,datoc,datod,datomasa,finalmasa;
  system("title Pitagoras --- Divel");
  
  inicio: printf("---PITAGORAS---\n");
  printf("\n");
  printf("Pitagoras es la suite matematica de Divel. Elija su opcion:\n");
  printf("1. Solucionador de Problemas\n");
  printf("2. Fraccionador\n");
  printf("3. Ayuda\n");
  printf("4. Salir\n");
  printf("\n");
  printf("Introduzca el numero de la opcion deseada\n");
  scanf("%d",&opcion);
  switch(opcion){
                 case 1 : system("cls");
                          printf("Solucionador de problemas\n");
                          goto solucion;
                 break;
                 case 2 : system("cls");
                 printf("Fraccionador\n");
                 system("Fraccionador.exe");
                 break;
                 case 3 : system("cls");
                 printf("Ayuda\n");
                 goto ayuda;
                 break;
                 case 4 : exit(0);
                 break;
                 
                      }
           
  system("PAUSE");	
  return 0;
  solucion: system("title Solucionador de Problemas");
           printf("¿Que te pide?\n");
           printf("1.KG totales\n");
           printf("2.KG sobrantes\n");
           printf("3.KG corresponden\n");
           printf("4.M totales
           printf("5.M sobrantes
           printf("Introduce el numero de la opcion deseada\n");
           scanf ("%d",&quepiden);
           system("cls");
           switch(quepiden){
                            case 1 : goto kilostotales;
                            break;
                            case 2 : goto kilossobrantes;
                            break;
                            case 3 : goto kiloscorresponden;
                            break;
                            }
           goto inicio;
  
  kilostotales: system("cls");
  printf("Que te dan\n");
  printf("1.La masa de 2 o mas objetos en KG\n");
  printf("2.La masa de un objeto por varias repeticiones en KG\n");
  printf("3.La masa me la da en otra medida\n");
  printf("4.Salir a menu\n");
  printf("Introduce el numero de la opcion correspondiente\n");
  scanf ("%d",&kilostotales);
  system("cls");
  switch(kilostotales){
                       case 1 : printf("Introduzca masa de los objetos uno por uno separados por ENTER\n");
                       scanf("%d",&datoa);
                       scanf("%d",&datob);
                       scanf("%d",&datoc);
                       scanf("%d",&datod);
                       printf("El resulatado: %d KG totales\n", datoa+datob+datoc+datod);
                       system("PAUSE");
                       goto kilostotales;
                       break;
                       case 2 : printf("Introduzca la masa del objeto\n");
                       scanf("%d",&datoa);
                       printf("Introduzca las repeticiones\n");
                       scanf("%d",&datob);
                       printf("El resultado es: %d KG totales\n", datoa*datob);
                       system("PAUSE");
                       goto kilostotales;
                       break;
                       case 3 : goto transformarmasa;
                       break;
                       }
  goto inicio;
  
  transformarmasa: printf("Compruebe si su cantidad esta en alguna de estas unidades\n");
  printf("1.Gramos\n");
  printf("2.Decagramos\n");
  printf("3.Hectogramos\n");
  printf("4.Toneladas\n");
  printf("5.Quintales\n");
  printf("6.Miriagramos\n");
  printf("7.Decigramos\n");
  printf("8.Centigramos\n");
  printf("9.Miligramos\n");
  printf("10.Libras\n");
  printf("Introduzca el numero de su opcion\n");
  scanf ("%d",&quemasa);
  printf("Introduzca la cantidad de %d\n",quemasa);
  scanf ("%u",&datomasa);
  switch(quemasa){
                  case 1 : finalmasa=datomasa*1000;
                  break;
                  case 2 : finalmasa=datomasa*100;
                  break;
                  case 3 : finalmasa=datomasa*10;
                  break;
                  case 4 : finalmasa=datomasa/1000;
                  break;
                  case 5 : finalmasa=datomasa/100;
                  break;
                  case 6 : finalmasa=datomasa/10;
                  break;
                  case 7 : finalmasa=datomasa*10000;
                  break;
                  case 8 : finalmasa=datomasa*100000;
                  break;
                  case 9 : finalmasa=datomasa*1000000;
                  break;
                  case 10 : finalmasa=datomasa*0.453592;
                  break;
                  }
                  printf("El resultado es: %d\n",finalmasa);
                  printf("Pulse ENTER para volver al menu del Solucionador de problemas\n");
                  getchar();
                  goto solucion;
  
  kilossobrantes:
                 
  kiloscorresponden:
  
  ayuda: system("title Ayuda de Pitagoras");
  
  goto inicio;
           
}

