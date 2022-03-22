#include <stdio.h>
#include <math.h>

int main() {
  // Declaração de variáveis
  float x, y, d, dt;

  // Pegar as informações necessárias
  printf("Por favor, digite as informações necessárias.\n");

  // x = valocidade da barca
  printf("Velocidade da barca (km/h): ");
  scanf("%f", &x);

  // y = valocidade do carro
  printf("Velocidade do carro (km/h): ");
  scanf("%f", &y);

  // d = distância da estação até a cidade
  d = 100 - sqrt((1600 * pow(x, 2)) / (pow(y, 2) - pow(x, 2)));

  // dt = distância da ilha até a cidade
  dt = d + sqrt(1600 + pow(100 - d, 2));

  // Saídas
  printf("\nDistância da estação até a cidade: %.2fkm\n", d);
  printf("Distância da ilha até a cidade : %.2fkm\n", dt);
  
  return 0;
}
