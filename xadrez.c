#include <stdio.h>
int main () {
int i2 = 0;
int i3 = 0;
   for (int i1 = 0; i1 < 5; i1++) //Aqui usamos o for para mover a Torre cinco casas para direita no tabuleiro
   {
     printf("Torre se noveu para (Direita)\n"); 
   }
   

   do{ //Aqui usamos o do while para mover a o Bispo cinco casas para cima direita (diagonal) no tabuleiro
   printf("Bispo se moveu para (Cima direita)\n");
   i2++;
   } while (i2 < 5);
   
    
   
   while (i3 < 8) //Aqui usamos o while para mover a Rainha oito casas para esquerda no tabuleiro
   {
    printf("Rainha se moveu para (Esquerda)\n");
    i3++;
   }
   
return 0;
}