#include <stdio.h>
// https://olimpiada.ic.unicamp.br/pratique/pj/2008/f1/vestib/
int main(void){
   int numeroQuestoes, pontos = 0;
   scanf("%d", &numeroQuestoes);

   char gabarito[82], candidato[82];
   scanf(" %s %s", gabarito, candidato);

   for (int i = 0; i < numeroQuestoes; i++){
      
      if (gabarito[i] == candidato[i]){
         pontos++;
      }
   }

   printf("%d", pontos);
   return 0;
}
