#include <stdio.h>

int main(){

 int t=0,b=0,r=0,c=1; //declarando as variaveis torre T,bispo B ,rainha ,Cavalo C.

 //movimentação da torre usando "for"

 for ( t = 0; t < 5; t++)
 {
    printf("Torre andou uma casa para direita!\n");
 }
 printf("\n");
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





 printf("\n");
 printf("\n");
 //Movimentação do cavalo ultilizando loops aninhados
 while (c--)
 {
    for ( int a = 0;a < 2; a++)
    {
        printf("Cavalo andou uma casa p/ baixo!\n"); //anda duas casas p/ baixo
    }
        printf("Cavalo andou uma casa p/ esquerda!\n"); //anda uma casa p/ esquerda
    
 }
 

 






    return 0;
}