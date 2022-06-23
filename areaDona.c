#include <stdio.h>

// practicar esto con las funciones
float areaCirculo(float radio) {
  return 3.14159 * radio * radio;
}

float areaDona(float radioInterno, float radioExterno) {
  return areaCirculo(radioExterno) - areaCirculo(radioInterno);
}

int main() {
  // escribe texto
  puts("Programa para calcular el area de una dona");
  
  // pedir al usiario...
  printf("Ingrese el radio del circulo externo");
  float radioE;
  scanf("%f", &radioE); // no olviden poner el & (ampersand)
  
  printf("Ingrese el radio del circulo interno");
  float radioI;
  scanf("%f", &radioI);
  
  // mostrando el radio que digito el usuario
  printf("Usted ah elegido una dona con radio interno de %.4f cm y radio externo de %.4f\n", radioI, radioE);
  
  // mostrnasdo el area
  printf("La dona tiene un area de %.4f cm2\n", areaDona(radioI, radioE));
  
  return 0;
}