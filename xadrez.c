#include <stdio.h>

void movertorre(int casas){// ultilizando recursividade
   if (casas > 0)
   {
      printf("Torre uma casa p/ Cima\n");
      movertorre(casas -1);
   }
   
}

void moverbispo(int casas){// ultilizando recursividade
   if (casas > 0)
   {
    printf("Bispo uma casa p/ direita!\n");
    moverbispo(casas -1);
   }
   
}

void moverrainha(int casas){// ultilizando recursividade
   if (casas > 0)
   {
      printf("Rainha uma casa p/ Esquerda\n");
      moverrainha(casas -1);
   }
   
}

int main(){

 int c=1; //declarando as variavel para cavalo

 //movimentação da torre usando Recursividade
 //Torre anda 5 casas para cima
   movertorre(5);



 printf("\n");
 printf("\n");



 //movimentação da Bispo usando Recursividade e for(repetição)
 //Bispo anda 5 casas para cima e direita
 for (int i = 0; i < 5; i++)
 {
   printf(" Bispo uma casa p/ cima!\n ");
   moverbispo(1);
 }
 

 printf("\n");
 printf("\n");

 //Movimentação da rainha ultilizando recursividade
 //Rainha anda 8 casas para cima
 moverrainha(8);


 printf("\n");
 printf("\n");


 //movimentação do Cavalo usando loops aninhados
 //Cavalo anda 2 casas p/ cima e uma para direita
  while (c--)
 {
    for ( int a = 0;a < 2; a++)
    {
        printf("Cavalo  uma casa p/ cima!\n");
    }
        printf("Cavalo  uma casa p/ Direita!\n");
    
 }

 

 






    return 0;
}