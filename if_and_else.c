#include <stdio.h>

int main()
{
  int value;
  printf("Digite um número: ");
  scanf("%d", &value);

  if (value % 2 == 0)
    printf("O número %d é par.", value);
  else
    printf("O número %d é ímpar.", value);
  
  return 0;
}
