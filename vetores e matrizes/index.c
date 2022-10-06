#include <stdio.h>

int main(){
  int number, selected_number, i = 0;
  for (i = 1; i < 110; i++)
  {
    scanf("%d", &number);
    number > selected_number ? selected_number = number : 0;
  }
  printf("O maior dos números lidos foi: %d", selected_number);
  return 0;
}