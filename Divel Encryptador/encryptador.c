#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
  char explorar,imagen,rar,datos,otra;
    
  inicio:system("title Divel Encrypter 1.3");
  system("cls");
  printf("DIVEL ENCRYPTER\n\n");
  printf("Para iniciar el programa, presiona ENTER\n");
  getchar();
  system("cls");
  printf("Pasos iniciales:\n 1. Debes tener dos archivos 1 de imagen (JPEG) y otro de WinRar (RAR) con los archivos a encriptar\n 2. Copialos a la carpeta donde esta guardado este programa (ahora se abrira un programa para que los copies)\n 3. Cambia el nombre a imagen al archivo JPG y rar al archivo RAR. Esto es IMPORTANTE ya que si no se realizara la encriptacion\n\n Pulsa ENTER para abrir el explorador de archivos de Windows y copiar los archivos a la carpeta de ejecucion\n");
  getchar();
  explorar:system("explorer.exe");
  system("cls");
  printf("Has copiado los archivos correctamente?Has cambiado el nombre correctamente?\n Presiona Y si quieres continuar o N si quieres volver a copiar\n");
  scanf("%c", &explorar);
  if(explorar !='Y'){
              goto explorar;
              }
  system("cls");
  printf("Presiona ENTER para empezar la encriptacion");
  getchar();
  system(" copy /b imagen.jpg+rar.rar encriptado.jpg");
  
  system("cls");
  printf("Proceso terminado, para otra encriptacion pulse R");
  scanf("%c",&otra);
  if(otra='R'){
               goto inicio;
               }
  

  system("PAUSE");	
  return 0;
}
