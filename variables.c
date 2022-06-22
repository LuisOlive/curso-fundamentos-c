#include <stdio.h>
#include <stdlib.h>

/*
  * Variables
  Las variables son espacios en la memoria de la computadora donde se gusrdan valores
  
  valores: números y caracteres
  
  las vatriables se declaran (escribirlas) como
  
  [tipo de dato] nombre [(opcional) = valor inicial];
*/
float precio; // * declaracion
float promedio = 9; // * declaracion con valor inicial

/*
  * Tipos de datos basicos
  int: numeros enteros
  float: numeros con decimales
  double: numeros con mas decimales
  char: caractéres
*/
int edad = 21;
float porcentaje = 0.854;
double valorMuyExacto = 0.33333333333333333;
char caracter = 'A';

/*
  * Transformacion de tipos
  
  la trasformacion de tipos se puede hacer gusrdando en otra variable de otro tipo
  
  o utilizando el nombre del tipo entre parentesis delante de un dato
  (float) variableEntera
*/

char letra = 65; // se guardará su valor ascii y lo tomará como A
const int variableEntera = 40;
const int tres = 3;
float variableDecimal = (float) variableEntera / tres;

/*
  * constantes
  las constantes tambioen son espacios en memoria, pero no pueden cambiar en todo el programa
  se hace para que el programa funcione más rápido
  
  hay dos formas de hacerlo
  
  ! diferencias:
  
  usando const se gusrda el valor calculado
  usando #define gusrdas código
*/

// la primera es colocando la palabra const antes de cualquier declaracion
const int constante = 5*9; // se guarda un 45

// la segunda es con la sentencia #define
#define PI 5*9 // se guardar por escrito el 5 * 9

/*
  * recomendaciones
*/
// usen nombres especificos
int H; // ! mal
int altura; // * bien
int alturaEdificio; // * mejor

// nombra las variables en minusculas con las iniciales en mayusculas, excepto por la primera palabra
float productoInternoBrutoDeMexico;
float producto_interno_bruto_de_mexico; // se compila perfecto, pero causa desorden

// escribir en inglés

int main() {
  return 0;
}