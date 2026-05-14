#include <stdio.h>

int main(){

 int t=0,b=0,r=0; //declarando as variaveis torre,bispo e rainha.

 //movimentação da torre usando "for"

 for ( t = 0; t < 5; t++)
 {
    printf("Torre andou uma casa para direita!\n");
 }
 printf("\n");//espaço
 printf("\n");

 //Movimentação do bispo usando "while" 
 while (b < 5)
 {
    printf("Bispo andou p/cima e p/ direita!\n");


    b++;
 }

 printf("\n");
 printf("\n");

 //movimentação da rainha usando "do while"
 do
 {
    
    printf("Rainha andou p/ esquerda!\n");
    
    r++;
 } while (r < 8 );
 

 






    return 0;
}