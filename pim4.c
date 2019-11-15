#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void choiceHour(char *hour, char *teather)
{
  int amountTicket, FP = 0;
  printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
  scanf("%i", &amountTicket);

  if (amountTicket <= 20)
  {

    printf("\t---------------------------------------\n");

    printf("\t FORMAS DE PAGAMENTO : : : \n\n");

    printf("\t [1]Inteira: 8,00 R$ \n");

    printf("\t [2]Meia: 4,00 R$ \n");
    scanf("%i", &FP);

    if (FP == 1)
    {

      printf("\tForma de Pagamento :: INTEIRA \n\n");
    }

    else
    {

      printf("\tForma de Pagamento :: MEIA \n\n");
    }

    printf("\tSeu bilhete foi adiquirido com sucesso. \n");

    printf("\tPeça escolhida: %s\n", teather);
    printf("\tSessao escolhida 2: 15:30\n");

    printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
  }
}

void choiceTeather(char *teather)
{
  int sessionHour = 0;
  printf("\t-----------------------------------------------\n");
  printf("\t Teatro: %s \n", teather);
  printf("\t Sessao 1: 13:30 \n");
  printf("\t Sessao 2: 15:30 \n");
  printf("\t Sessao 3: 17:30 \n");
  printf("\tComprar bilhete para qual sessao ? \n\n");
  printf("\t-----------------------------------------------\n");

  scanf("%i", &sessionHour);
  switch (sessionHour)
  {
  case 1:
    choiceHour("13:30", teather);
    break;
  case 2:
    choiceHour("15:30", teather);
    break;
  case 3:
    choiceHour("17:30", teather);
    break;
  default:
    break;
  }
}

int main()
{

  int amountTicket, teather = 0, FP;
  char tttt[50];

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
    printf("Opção invalida.\n");
    break;

  case 1:
    choiceTeather("O Auto da Compadecida");
    break;

  case 2:
    choiceTeather("A Lenda do Zorro");
    break;

  case 3:
    choiceTeather("Teatro 3: Vestido de Noiva");
    break;
  }

  system("pause");
}
