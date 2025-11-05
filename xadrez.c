#include <stdio.h>

   int main(){

   int movimentoTorre = 0; //A Torre move-se em linha reta horizontalmente ou verticalmente.
   int movimentobispo = 0; //Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
   int movimentoRainha = 0; // Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
   

   // movimento da torre usado o for 
   printf("******Jogo de xadrez !*******\n");
   printf("Movimento da Torre!\n");
   printf("A Torre move-se em linha reta horizontalmente ou verticalmente.\n");
   printf("Movendo 5 casas para a direita:\n");
   for ( int movimentoTorre = 0; movimentoTorre < 5; movimentoTorre++) {
      printf("Direita\n");
   }

   // movimento do bispo usado o while
   printf("\nMovimento do Bispo.\n");
   printf("O Bispo move-se na diagonal.\n");
   printf("Movendo 5 casas na diagonal para cima e direita:\n");
   
   while ( movimentobispo < 5 )
   { movimentobispo++;
      printf ("cima, Direita\n");
      
   }
   //movimento da Rainha usado do while
   printf("\n Movimento da Rainha \n");
   printf("A Rainha move-se em todas as direções. \n");
   printf("Movendo 8 casas para a esquerda: \n");
   do {
      printf("Esquerda.\n");
      movimentoRainha++;
   } 
      while (movimentoRainha < 8);
   
      printf ("\n Fim dos movimentos! \n");
    
      return 0;
   
   }