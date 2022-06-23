#include <stdio.h>

// practicar esto con las funciones
float areaCirculo(float radio) {
  return 3.14159 * radio * radio;
}

int main() {
  // escribe texto
  puts("Programa para calcular el area de un circulo");
  
  // pedir al usiario...
  printf("Ingrese el radio del circulo ");
  
  // necesitamos guardarlo en una variable
  float radio;
  scanf("%f", &radio); // no olviden poner el & (ampersand)
  
  /*
  printf("El circulo tiene un radio de %.2f cm\n", radio);
  printf("El circulo tiene un radio de %.3f cm\n", radio);
  printf("El circulo tiene un radio de %.4f cm\n", radio);
  printf("El circulo tiene un radio de %.5f cm\n", radio);
  
  Programa para calcular el area de un circulo
  Ingrese el radio del circulo 43.5
  El circulo tiene un radio de 43.50 cm
  El circulo tiene un radio de 43.500 cm
  El circulo tiene un radio de 43.5000 cm
  El circulo tiene un radio de 43.50000 cm
  //
  
  // delante del punto se ponen los caracteres para el valor completo
  // cuando es mayor a los necesarios, ignora esta orden
  printf("El circulo tiene un radio de %6.4f cm\n", radio);
  printf("El circulo tiene un radio de %7.4f cm\n", radio);
  printf("El circulo tiene un radio de %8.4f cm\n", radio); 
  printf("El circulo tiene un radio de %9.4f cm\n", radio);
  printf("El circulo tiene un radio de %10.4f cm\n", radio);
  printf("El circulo tiene un radio de %11.4f cm\n", radio);
  
  /*
  Programa para calcular el area de un circulo
  Ingrese el radio del circulo 546.6
  El circulo tiene un radio de 546.6000 cm
  El circulo tiene un radio de 546.6000 cm
  El circulo tiene un radio de 546.6000 cm
  El circulo tiene un radio de  546.6000 cm
  El circulo tiene un radio de   546.6000 cm
  El circulo tiene un radio de    546.6000 cm
  */

  // mostrando el radio que digito el usuario
  printf("Usted ah elegido un radio de %.4f cm\n", radio);
  
  // mostrnasdo el area
  printf("Ese circulo tiene un area de %.4f cm2\n", areaCirculo(radio));
  
  return 0;
}