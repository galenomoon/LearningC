#include <stdio.h>
int main()
{
  float height, width, area, perimeter;
  printf("Digite a altura: ");
  scanf("%f", &height);
  printf("Digite o comprimento: ");
  scanf("%f", &width);
  puts("--------------------------------");
  perimeter = height + width;
  area = height * width;
  printf("Altura: %.1fm, Largura: %.1fm\n", height, width);
  printf("Área: %.1fm, Perímetro: %.1fm\n", area, perimeter);
}