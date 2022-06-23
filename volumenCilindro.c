#include <stdio.h>

// practicar esto con las funciones
float areaCirculo(float radio) {
  return 3.14159 * radio * radio;
}

float areaDona(float radioInterno, float radioExterno) {
  return areaCirculo(radioExterno) - areaCirculo(radioInterno);
}

float volumenCilindro(float radio, float altura) {
  return areaCirculo(radio) * altura;
}

int main() {
  // escribe texto
  puts("Programa para calcular el area de una dona");
  
  // pedir al usiario...
  printf("Ingrese el radio del clindro ");
  float radio;
  scanf("%f", &radio); // no olviden poner el & (ampersand)
  
  printf("Ingrese la altura del cilindro ");
  float altura;
  scanf("%f", &altura);
  
  // mostrando el radio que digito el usuario
  printf("Este es un cilindro con %.4f de radio y %.4f de altura\n", radio, altura);
  
  // mostrnasdo el area
  printf("La dona tiene un area de %.4f cm2\n", volumenCilindro(radio, altura));
  
  return 0;
}