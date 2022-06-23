# Interaccion con el usuario

## Imporante

Se requiere usar la libreria stdio.h

## Mostrar cosas en consola

Para mostrar puro texto en consola se usa la funcion puts()

```c
puts("Hola, mundo");
```

Para mostrar valores de variables en consola se usa la funcion printf()

```c
printf("El valor de mi variable es %f", miVariable);
```

otra diferencia es que el printf no salta de la linea en la que escribe y puts sí

donde %f es el tipo de formato con que se decea imprimir, dependiendo el tipo de variable se elige el simbolo que se emplea

```
%d es para enteros
%s es para cadenas de texto
%c es para caracteres
%f es para decimales
%x es para numeros en hexadecimal
```

si te equivocas, los datos solo se muestran transformados al tipo que se escribio

los decimales se pueden formatear empleando numeros en los flotantes

## Pedir datos al usuario

Por ahora, solo pedirmeos numeros

Se hace empleando la funcion scanf()

```c
float miVariable;
scanf("%f", &miVariable);
// miVariable ya vale lo que ingrese el usuario
```
