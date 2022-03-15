#include <stdio.h>
#include <math.h>

int main() {
  // Declaração de variáveis
  float v, x, y, h, r, al, ab, at, p;

  // Pegar as informações necessárias
  printf("Por favor, digite as informações necessárias.\n");

  // v = volume
  printf("Volume da lata (cm³): ");
  scanf("%f", &v);

  // x = preço do material da base da lata
  printf("Preço do material da base da lata (por m²): ");
  scanf("%f", &x);

  // y = preço do material da lateral da lata
  printf("Preço do material da lateral da lata (por m²): ");
  scanf("%f", &y);

  // r = raio da lata; cbrt = raiz cúbica; M_PI = π
  r = cbrt((v * y) / (2 * x * M_PI));

  // h = altura da lata; pow = potenciação
  h = v / (M_PI * pow(r, 2));

  // al = área lateral
  al = h * 2 * M_PI * r;

  // ab = área da base
  ab = M_PI * pow(r, 2);

  // at = área total
  at = al + ab * 2;

  // p = preço total da lata
  p = al * y + ab * 2 * x;

  // Saídas
  printf("\nRaio da base da lata: %.2f\n", r);
  printf("Altura da lata: %.2f\n", h);
  printf("Área total da superficie da lata: %.2f\n", at);
  printf("Custo total do material usado na lata: %.2f\n", p);
  
  return 0;
}
