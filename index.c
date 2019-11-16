#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int valorglobal = 1;

void function()
{
   printf("%i", valorglobal);
   valorglobal = 2;
}

int main()
{

   function();
   printf("%i", valorglobal);

   system("pause");
}
