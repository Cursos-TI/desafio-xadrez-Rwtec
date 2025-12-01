#include <stdio.h>
#include <stdlib.h>

//Função para movimento da Torre (usando recursividade)
void moverTorre (int casas){
   if (casas > 0){
      printf ("Direita\n");
      moverTorre (casas - 1);
   }
}
//função para movimento do bispo (usando recursividade)
// Função para movimento do bispo (usando loops aninhados)
void moverBispo(int casas) {
   printf("Movimento na diagonal: \n");
   
   // Loop externo para movimento vertical (cima)
   for (int vertical = 0; vertical < casas; vertical++) {
      // Loop interno para movimento horizontal (direita)
      for (int horizontal = 0; horizontal < casas; horizontal++) {
         // Como é diagonal, ambos os movimentos acontecem simultaneamente
         // Imprimimos apenas uma vez por casa na diagonal
         if (vertical == horizontal) {
            printf("Cima, Direita\n");
         }
      }
   }
}

//função para movimento da Rainha (usando recursidade)
void moverRainha (int casas){
      if (casas > 0){
      printf ("Esquerda\n");
      moverRainha(casas - 1);
}
}
//função para movimento do Cavalo(utilizando loops aninhados com múltiplas variáveis,continue,break)
void moverCavalo (int movimentos) {
     printf("Movimento do Cavalo em L:\n");
     printf("Padrão: 2 casas para CIMA, 1 casa para DIREITA\n\n");
    
    // Loop para cada movimento completo em "L"
    for (int movimento = 1; movimento <= movimentos; movimento++) {
        printf("Movimento %d:\n", movimento);
        
        // Primeira parte do L: 2 casas para cima
        for (int casa = 1; casa <= 2; casa++) {
            printf("  Cima");
            
            // Usando continue para adicionar informação extra
            if (casa == 2) {
                printf(" (segunda casa vertical)");
                continue; // Vai para próxima iteração (ou fim do loop)
            }
            
            printf(" (primeira casa vertical)\n");
        }
        
        // Segunda parte do L: 1 casa para direita
        printf("  Direita (casa horizontal)\n");
        
        // Usando break se atingir limite
        if (movimento == 3) {
            printf("  (Limite de 3 movimentos em L atingido)\n");
            break;
        }
    }
      }
   



   int main() {

   int movimentoTorre = 5; //A Torre move-se em linha reta horizontalmente ou verticalmente.
   int movimentobispo = 5; //Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
   int movimentoRainha = 8; // Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
   int movimentoCavalo = 3; // O cavalo se movimenta em "L" ex("baixo,baixo,esquerda")

   // movimento da torre 
   printf("******Jogo de xadrez !*******\n");
   printf("Movimento da Torre!\n");
   printf("A Torre move-se em linha reta horizontalmente ou verticalmente.\n");
   printf("Movendo 5 casas para a direita:\n");
   moverTorre (movimentoTorre);
      

   // movimento do bispo 
   printf("Movimento do Bispo!\n");
   printf("O Bispo move-se na diagonal\n");
   printf("Movendo 5 casas na diagonal para cima e direita:\n");
   moverBispo(movimentobispo);
      
   //movimento da Rainha 
   printf(" Movimento da Rainha!\n");
   printf("A Rainha move-se em todas as direções. \n");
   printf("Movendo 8 casas para a esquerda: \n");
   moverRainha(movimentoRainha);
   
   
   // A principal diferença é que o Cavalo se move em "L", o que exigirá o uso de loops aninhados (um loop dentro do outro) para simular esse movimento
    printf("Movimento do Cavalo \n");
    printf("O cavalo move-se em 'L'.");
    printf("Movendo-se duas casa na vertical/horizotal e um casa na vertical/horizontal!\n");
   moverCavalo(movimentoCavalo);
   
     
   printf ("\n Fim dos movimentos! \n");
      return 0;
   
   }