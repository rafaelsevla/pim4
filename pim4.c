#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int itsFreeDay = 0;

void writePlaces(char places[6][6])
{
  printf("\n\n\t %c | %c | %c | %c | %c | %c | \n", places[0][0], places[0][1], places[0][2], places[0][3], places[0][4], places[0][5]);
  printf("\t---------------------------\n");
  printf("\t %c | %c | %c | %c | %c | %c | \n", places[1][0], places[1][1], places[1][2], places[1][3], places[1][4], places[1][5]);
  printf("\t---------------------------\n");
  printf("\t %c | %c | %c | %c | %c | %c | \n", places[2][0], places[2][1], places[2][2], places[2][3], places[2][4], places[2][5]);
  printf("\t---------------------------\n");
  printf("\t %c | %c | %c | %c | %c | %c | \n", places[3][0], places[3][1], places[3][2], places[3][3], places[3][4], places[3][5]);
  printf("\t---------------------------\n");
  printf("\t %c | %c | %c | %c | %c | %c | \n", places[4][0], places[4][1], places[4][2], places[4][3], places[4][4], places[4][5]);
  printf("\t---------------------------\n");
  printf("\t %c | %c | %c | %c | %c | %c | \n", places[5][0], places[5][1], places[5][2], places[5][3], places[5][4], places[5][5]);
}

void choiceColumn(int row, char column, char places[6][6], char *hour, char *teather, char *day)
{

  switch (column)
  {
  case 'a':
  case 'A':
    printf("Lugar ocupado. Escolha outro lugar\n");
    break;
  case 'b':
  case 'B':
    places[row][2] = 'X';
    writePlaces(places);
    break;
  case 'c':
  case 'C':
    places[row][3] = 'X';
    writePlaces(places);
    break;
  case 'd':
  case 'D':
    places[row][4] = 'X';
    writePlaces(places);
    break;
  case 'e':
  case 'E':
    places[row][5] = 'X';
    writePlaces(places);
    break;
  default:
    printf("ixi");
    break;
  }
}

void confirmTicketMidEntry(char *hour, char *teather, char *day)
{
  char confirm;

  printf("Meia entrada. Confirmar ingresso? Digite V\n");
  scanf("%s", &confirm);

  if (confirm == 'V' || confirm == 'v')
  {
    printf("\t===============================================\n");
    printf("\t-----------------------------------------------\n");
    printf("\t Teatro: %s \n", teather);
    printf("\t Dia da semana: %s \n", day);
    printf("\t Sessão: %s \n", hour);
    printf("\t Tipo: Meia entrada.\n");
    printf("\t-----------------------------------------------\n");
    printf("\t===============================================\n");

    system("pause");
  }
  else
  {
    printf("\tCompra de ingresso cancelada\n");
    system("pause");
  }
}

void confirmTicketEntryTotal(char *hour, char *teather, char *day)
{
  char confirm;

  printf("Entrada inteira. Confirmar ingresso? Digite V\n");
  scanf("%s", &confirm);

  if (confirm == 'V' || confirm == 'v')
  {
    printf("\t===============================================\n");
    printf("\t-----------------------------------------------\n");
    printf("\t Teatro: %s \n", teather);
    printf("\t Dia da semana: %s \n", day);
    printf("\t Sessão: %s \n", hour);
    printf("\t Tipo: Entrada inteira.\n");
    printf("\t-----------------------------------------------\n");
    printf("\t===============================================\n");

    system("pause");
  }
  else
  {
    printf("\tCompra de ingresso cancelada\n");
    system("pause");
  }
}

void confirmTicketFreeEntry(char *hour, char *teather, char *day)
{
  char confirm;

  printf("Entrada grátis. Confirmar ingresso? Digite V\n");
  scanf("%s", &confirm);

  if (confirm == 'V' || confirm == 'v')
  {
    printf("\t===============================================\n");
    printf("\t-----------------------------------------------\n");
    printf("\t Teatro: %s \n", teather);
    printf("\t Dia da semana: %s \n", day);
    printf("\t Sessão: %s \n", hour);
    printf("\t Tipo: Entrada grátis.\n");
    printf("\t-----------------------------------------------\n");
    printf("\t===============================================\n");

    system("pause");
  }
  else
  {
    printf("\tCompra de ingresso cancelada\n");
    system("pause");
  }
}

void verifyMidEntry(char *hour, char *teather, char *day)
{
  printf("%s", day);

  int age, ra;
  int isFree = 0;
  char teacher, student, hasRa;

  if (itsFreeDay >= 1)
  {

    printf("Você tem R.A.? Digite V se sim.\n");
    scanf("%s", &hasRa);

    if (hasRa == 'V' || hasRa == 'v')
    {
      printf("Digite seu R.A.\n");
      scanf("%i", &ra);
      if (ra == 1929779 || ra == 1980345 || ra == 1981881)
      {
        isFree = 1;
        confirmTicketFreeEntry(hour, teather, day);
      }
    }
  }

  if (isFree == 0 || hasRa != 'V' || hasRa != 'v')
  {
    printf("Qual sua idade?\n");
    scanf("%i", &age);

    if (age >= 2 & age <= 12 || age >= 60)
    {
      confirmTicketMidEntry(hour, teather, day);
    }
    else
    {
      printf("Você é professor público? Digite V se sim.\n");
      scanf("%s", &teacher);
      if (teacher == 'V' || teacher == 'v')
      {
        confirmTicketMidEntry(hour, teather, day);
      }
      else
      {
        printf("Você é aluno? Digite V se sim.\n");
        scanf("%s", &student);
        if (student == 'V' || student == 'v')
        {
          confirmTicketMidEntry(hour, teather, day);
        }
        else
        {
          confirmTicketEntryTotal(hour, teather, day);
        }
      }
    }
  }
}

void choicePlaceTicket(char *hour, char *teather, char *day)
{
  int amountTicket, number, FP = 0;
  char letter;
  char places[6][6] = {
      {' ', 'A', 'B', 'C', 'D', 'E'},
      {'1', 'X', ' ', ' ', ' ', ' '},
      {'2', ' ', ' ', ' ', ' ', ' '},
      {'3', ' ', ' ', ' ', ' ', ' '},
      {'4', ' ', ' ', ' ', ' ', ' '},
      {'5', ' ', ' ', ' ', ' ', ' '},
  };
  writePlaces(places);

  printf("\tInforme o número da coluna que você deseja:\n");
  scanf("%i", &number);

  switch (number)
  {
  case 1:
    printf("\tInforme a letra da fileira que você deseja:\n");
    scanf("%s", &letter);
    if (letter == 'a' || letter == 'A')
    {
      printf("Lugar ocupado. Escolha outro lugar\n");
      choicePlaceTicket(hour, teather, day);
    }
    else
    {
      choiceColumn(number, letter, places, hour, teather, day);
      verifyMidEntry(hour, teather, day);
    }
    break;
  case 2:
    printf("\tInforme a letra da fileira que você deseja:\n");
    scanf("%s", &letter);
    choiceColumn(number, letter, places, hour, teather, day);
    verifyMidEntry(hour, teather, day);
    break;
  case 3:
    printf("\tInforme a letra da fileira que você deseja:\n");
    scanf("%s", &letter);
    choiceColumn(number, letter, places, hour, teather, day);
    verifyMidEntry(hour, teather, day);
    break;
  case 4:
    printf("\tInforme a letra da fileira que você deseja:\n");
    scanf("%s", &letter);
    choiceColumn(number, letter, places, hour, teather, day);
    verifyMidEntry(hour, teather, day);
    break;
  case 5:
    printf("\tInforme a letra da fileira que você deseja:\n");
    scanf("%s", &letter);
    choiceColumn(number, letter, places, hour, teather, day);
    verifyMidEntry(hour, teather, day);
    break;
  default:
    printf("\tNão existe essa opção, tente novamente.");
    choicePlaceTicket(hour, teather, day);
    break;
  }
}

void choiceHour(char *teather, char *day)
{
  int sessionHour = 0;
  printf("\t-----------------------------------------------\n");
  printf("\t Teatro: %s \n", teather);
  printf("\t Dia da semana: %s \n", day);
  printf("\t Comprar bilhete para qual sessao? \n\n");
  printf("\t-----------------------------------------------\n");
  printf("\t Sessao 1: 13:30 \n");
  printf("\t Sessao 2: 15:30 \n");
  printf("\t Sessao 3: 17:30 \n");
  printf("\t-----------------------------------------------\n\t");

  scanf("%i", &sessionHour);
  switch (sessionHour)
  {
  case 1:
    choicePlaceTicket("13:30", teather, day);
    break;
  case 2:
    choicePlaceTicket("15:30", teather, day);
    break;
  case 3:
    choicePlaceTicket("17:30", teather, day);
    break;
  default:
    break;
  }
}

void choiceDay(char *teather)
{
  int choiceDay;
  printf("\t-----------------------------------------------\n");
  printf("\t Teatro: %s \n", teather);
  printf("\t Comprar bilhete para qual dia? \n\n");
  printf("\t [1] Segunda \n");
  printf("\t [2] Terça \n");
  printf("\t [3] Quarta \n");
  printf("\t [4] Quinta \n");
  printf("\t [5] Sexta \n");
  printf("\t [6] Sabado \n");
  printf("\t [7] Domingo \n");
  printf("\t-----------------------------------------------\n\t");

  scanf("%i", &choiceDay);
  switch (choiceDay)
  {
  case 1:
    choiceHour(teather, "Segunda");
    break;
  case 2:
    itsFreeDay = 1;
    choiceHour(teather, "Terça");
    break;
  case 3:
    choiceHour(teather, "Quarta");
    break;
  case 4:
    choiceHour(teather, "Quinta");
    break;
  case 5:
    choiceHour(teather, "Sexta");
    break;
  case 6:
    choiceHour(teather, "Sabado");
    break;
  case 7:
    choiceHour(teather, "Domingo");
    break;
  default:
    break;
  }
}

int main()
{

  int teather = 0;

  printf("\t===============================================\n");
  printf("\t===============================================\n");
  printf("\t===============================================\n");
  printf("\t===============================================\n\n");
  printf("\t QUAL PEÇA VOCÊ QUER VER?: \n");
  printf("\t-----------------------------------------------\n");
  printf("\t| PEÇAS EM CARTAZ           |\n\n");
  printf("\t| [1] O auto da compadecida |\n");
  printf("\t| [2] A Lenda do Zorro      | \n");
  printf("\t| [3] Vestido de Noiva      |\n\n");
  printf("\t----------------------------------------------\n");
  printf("\t===============================================\n");
  printf("\t===============================================\n");

  scanf("%i", &teather);

  switch (teather)
  {

  default:
    printf("Opção invalida.\n");
    break;

  case 1:
    choiceDay("O Auto da Compadecida");
    break;

  case 2:
    choiceDay("A Lenda do Zorro");
    break;

  case 3:
    choiceDay("Teatro 3: Vestido de Noiva");
    break;
  }

  system("pause");
}
