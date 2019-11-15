#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

   int amountTicket, teather, sessionHour = 0, FP;

   printf("\t===============================================\n");
   printf("\t===============================================\n");
   printf("\t===============================================\n");
   printf("\t===============================================\n\n");
   printf("\t QUAL PEÇA VOCÊ QUER VER?: \n");
   printf("\t-----------------------------------------------\n");
   printf("\t| PEÇAS EM CARTAZ |\n\n");
   printf("\t| [1] O auto da compadecida |\n");
   printf("\t| [2] A Lenda do Zorro |\n");
   printf("\t| [3] Vestido de Noiva |\n");
   printf("\t----------------------------------------------\n");
   printf("Zero para sair:\n\n ");

   scanf("%i", &teather);

   switch (teather)
   {

   default:

      printf("Opcao invalida.\n");

   case 1:

      printf("\t--------------------------------------\n");

      printf("\t Teatro 1: O Auto da Compadecida\n");

      printf("\t Sessao [1]: 13:30 \n");

      printf("\t Sessao [2]: 15:30 \n");

      printf("\t Sessao [3]: 17:30 \n");

      printf("\tComprar bilhete para qual sessao ? \n\n");

      printf("\t--------------------------------------\n");

      scanf("%i", &sessionHour);

      if (sessionHour == 1)
      {

         printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");

         scanf("%i", &amountTicket);

         if (amountTicket <= 20)
         {

            printf("\t---------------------------------------\n");

            printf("\t FORMAS DE PAGAMENTO : : : \n\n");

            printf("\t [1]Inteira: 8,00 R$ \n");

            printf("\t [2]Meia: 4,00 R$ \n");

            scanf("%i", &FP);

            printf("\t---------------------------------------\n");

            if (FP == 1)
            {
               printf("\tForma de Pagamento :: INTEIRA \n\n");
            }

            else
            {
               printf("\tForma de Pagamento :: MEIA ");
            }

            printf("\tSessao escolhida 1: 13:30\n\n");

            printf("\tSeu bilhete foi adiquirido com sucesso. \n");

            printf("\tDivirta-se. Um bom filme pra voce.\n ");
         }

         else
         {
            printf("\tNao há mais bilhetes\n ");
         }
      }

      if (sessionHour == 2)
      {

         printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");

         scanf("%i", &amountTicket);

         if (amountTicket <= 20)
         {

            printf("\t---------------------------------------\n");

            printf("\t FORMAS DE PAGAMENTO : : : \n\n");

            printf("\t [1]Inteira: 8,00 R$ \n");

            printf("\t [2]Meia: 4,00 R$ \n");

            scanf("%i", &FP);

            printf("\t---------------------------------------\n");

            if (FP == 1)
            {

               printf("\tForma de Pagamento :: INTEIRA \n\n");
            }

            else
            {

               printf("\tForma de Pagamento :: MEIA \n\n");
            }

            printf("\tSeu bilhete foi adiquirido com sucesso. \n");

            printf("\tSessao escolhida 2: 15:30\n");

            printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
         }

         else
         {

            printf("\tNao há mais bilhetes\n ");
         }
      }

      if (sessionHour == 3)
      {

         printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");

         scanf("%i", &amountTicket);

         if (amountTicket <= 20)
         {

            printf("\t---------------------------------------\n");

            printf("\t FORMAS DE PAGAMENTO : : : \n\n");

            printf("\t [1]Inteira: 8,00 R$ \n");

            printf("\t [2]Meia: 4,00 R$ \n");

            scanf("%i", &FP);

            printf("\t---------------------------------------\n");

            if (FP == 1)
            {

               printf("\tForma de Pagamento :: INTEIRA \n\n");
            }

            else
            {

               printf("\tForma de Pagamento :: MEIA \n\n");
            }

            printf("\tSeu bilhete foi adiquirido com sucesso. \n");

            printf("\tSessao escolhida 3: 17:30\n");

            printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
         }

         else
         {

            printf("\tNao há mais bilhetes\n ");
         }
      }

      break;

   case 2:

      printf("\t--------------------------------------\n");

      printf("\t A Lenda do Zorro \n");

      printf("\t Sessao 1: 13:45 \n");

      printf("\t Sessao 2: 16:15 \n");

      printf("\t Sessao 3: 18:45 \n");

      printf("\tComprar bilhete para qual sessao ? \n\n");

      printf("\t--------------------------------------\n");

      scanf("%i", &sessionHour);

      if (sessionHour == 1)
      {

         printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");

         scanf("%i", &amountTicket);

         if (amountTicket <= 20)
         {

            printf("\t---------------------------------------\n");

            printf("\t FORMAS DE PAGAMENTO : : : \n\n");

            printf("\t [1]Inteira: 8,00 R$ \n");

            printf("\t [2]Meia: 4,00 R$ \n");

            scanf("%i", &FP);

            printf("\t---------------------------------------\n");

            if (FP == 1)
            {

               printf("\tForma de Pagamento :: INTEIRA \n\n");
            }

            else
            {

               printf("\tForma de Pagamento :: MEIA \n\n");
            }

            printf("\tSeu bilhete foi adiquirido com sucesso.\n");

            printf("\tSessao escolhida 1: 13:45\n");

            printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
         }

         else
         {

            printf("\tNao há mais bilhetes\n ");
         }
      }

      if (sessionHour == 2)
      {

         printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");

         scanf("%i", &amountTicket);

         if (amountTicket <= 20)
         {

            printf("\t---------------------------------------\n");

            printf("\t FORMAS DE PAGAMENTO : : : \n\n");

            printf("\t [1]Inteira: 8,00 R$ \n");

            printf("\t [2]Meia: 4,00 R$ \n");

            scanf("%i", &FP);

            printf("\t---------------------------------------\n");

            printf("\tSeu bilhete foi adiquirido com sucesso. \n");

            printf("\tSessao escolhida 2: 16:15\n");

            printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
         }

         else
         {

            printf("\tNao há mais bilhetes\n ");
         }
      }

      if (sessionHour == 3)
      {

         printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");

         scanf("%i", &amountTicket);

         if (amountTicket <= 20)
         {

            printf("\t---------------------------------------\n");

            printf("\t FORMAS DE PAGAMENTO : : : \n\n");

            printf("\t [1]Inteira: 8,00 R$ \n");

            printf("\t [2]Meia: 4,00 R$ \n");

            scanf("%i", &FP);

            printf("\t---------------------------------------\n");

            if (FP == 1)
            {

               printf("\tForma de Pagamento :: INTEIRA \n\n");
            }

            else
            {

               printf("\tForma de Pagamento :: MEIA \n\n");
            }

            printf("\tSeu bilhete foi adiquirido com sucesso. \n");

            printf("\tSessao escolhida 3: 18:45\n");

            printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
         }

         else
         {

            printf("\tNao há mais bilhetes\n ");
         }
      }

      break;

   case 3:

      printf("\t-----------------------------------------------\n");

      printf("\t Teatro 3: Vestido de Noiva \n");

      printf("\t Sessao 1: 13:30 \n");

      printf("\t Sessao 2: 15:30 \n");

      printf("\t Sessao 3: 17:30 \n");

      printf("\tComprar bilhete para qual sessao ? \n\n");

      printf("\t-----------------------------------------------\n");

      scanf("%i", &sessionHour);

      if (sessionHour == 1)
      {

         printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");

         scanf("%i", &amountTicket);

         if (amountTicket <= 20)
         {

            printf("\t---------------------------------------\n");

            printf("\t FORMAS DE PAGAMENTO : : : \n\n");

            printf("\t [1]Inteira: 8,00 R$ \n");

            printf("\t [2]Meia: 4,00 R$ \n");

            scanf("%i", &FP);

            printf("\t---------------------------------------\n");

            if (FP == 1)
            {

               printf("\tForma de Pagamento :: INTEIRA \n\n");
            }

            else
            {

               printf("\tForma de Pagamento :: MEIA \n\n");
            }

            printf("\tSeu bilhete foi adiquirido com sucesso.\n");

            printf("\tSessao escolhida 1: 13:30\n");

            printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
         }

         else
         {

            printf("\tNao há mais bilhetes\n ");
         }
      }

      if (sessionHour == 2)
      {

         printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");

         scanf("%i", &amountTicket);

         if (amountTicket <= 20)
         {

            printf("\t---------------------------------------\n");

            printf("\t FORMAS DE PAGAMENTO : : : \n\n");

            printf("\t [1]Inteira: 8,00 R$ \n");

            printf("\t [2]Meia: 4,00 R$ \n");

            scanf("%i", &FP);

            printf("\t---------------------------------------\n");

            if (FP == 1)
            {

               printf("\tForma de Pagamento :: INTEIRA \n\n");
            }

            else
            {

               printf("\tForma de Pagamento :: MEIA \n\n");
            }

            printf("\tSeu bilhete foi adiquirido com sucesso. \n");

            printf("\tSessao escolhida 2: 15:30\n");

            printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
         }

         else
         {

            printf("\tNao há mais bilhetes\n ");
         }
      }

      if (sessionHour == 3)
      {

         printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");

         scanf("%i", &amountTicket);

         if (amountTicket <= 20)
         {

            printf("\t---------------------------------------\n");

            printf("\t FORMAS DE PAGAMENTO : : : \n\n");

            printf("\t [1]Inteira: 8,00 R$ \n");

            printf("\t [2]Meia: 4,00 R$ \n");

            scanf("%i", &FP);

            printf("\t---------------------------------------\n");

            if (FP == 1)
            {

               printf("\tForma de Pagamento :: INTEIRA \n\n");
            }

            else
            {

               printf("\tForma de Pagamento :: MEIA \n\n");
            }

            printf("\tSeu bilhete foi adiquirido com sucesso.\n");

            printf("\tSessao escolhida 3: 17:30\n");

            printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
         }

         else
         {

            printf("\tNao há mais bilhetes\n ");
         }
      }

      break;
   }

   system("pause");
}
