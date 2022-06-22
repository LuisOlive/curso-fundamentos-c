// librerias que hay que meter siempre
#include <stdio.h>
#include <stdlib.h>

// librerias necesarias para el proyecto
#include <math.h>

/*
  * funciones
  son como calculo, requieren datos y entregan en otros valores
  
  degamos una funcion f(x) = x³ + 5
*/
// se escribiria de esta forma

//  esto es una funcion de usuario

// * declaracion de una funcion
// [el tipo de dato que se maneja] [nombre]( [parametros = variables] ) 
float f(float x) {
  puts("Llamado a f");
  // entre llaves, todo lo que vayamos a necesitar para devolver un valor
  // en este caso el proceso es directo
  // lo que devolvamos va a entregarse con la palabra return
  return x * x * x + 5;
}

/* 
  * funciones preescritas

  son aquellas que se escribibieron desde la librerias, las mas importantes (por ahora)
  están en las librerias stdio.h, stdlib.h, math.h
*/


int main() {
  puts("llamado a main");
  
  float valorX = 4.32;
  float valorY = 9.32;
  float valorZ = 4.542;
  
  // el objetivo de las funciones es reutilizar codigo
  // esto se conoce como llamado (o ejecución) y es cada que el programa haga uso de una funcion
  float valorXCubica = f(valorX); // x * x * x + 5
  float valorYCubica = f(valorY); // en lugar de y * y * y + 5
  float valorZCubica = f(valorZ); // en lugar de z * z * z + 5
  
  // funcion preescrita
  // printf permite imprimir valores en la consola
  printf("El valor x es %f y x^3 + 5 es %f\n", valorX, valorXCubica);
  printf("El valor y es %f y y^3 + 5 es %f\n", valorY, valorYCubica);
  printf("El valor z es %f y z^3 + 5 es %f\n", valorZ, valorZCubica);
  
  return 0;
}