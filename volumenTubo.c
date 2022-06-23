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

float volumenTubo(float radioInterno, float radioExterno, float longitud) {
  return areaDona(radioInterno, radioExterno) * longitud;
}

int main() {
  // escribe texto
  puts("Programa para calcular el area de una dona");
  
  // pedir al usiario...
  printf("Ingrese el radio del tubo ");
  float radio;
  scanf("%f", &radio); // no olviden poner el & (ampersand)
  
  printf("Ingrese el radio interior del tubo ");
  float radioI;
  scanf("%f", &radioI);
  
  printf("Ingrese la longitud del tubo ");
  float altura;
  scanf("%f", &altura);
  
  // mostrando el radio que digito el usuario
  printf("Este es un tubo con %.4f de radio y %.4f de altura\n", radio, altura);
  
  // mostrnasdo el area
  printf("El tubo tiene un volumen de %.4f cm3\n", volumenTubo(radioI, radio, altura));
  
  return 0;
}