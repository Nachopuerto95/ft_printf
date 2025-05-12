<p align="end">
   <strong>🌐 Change language:</strong><br>
   <a href="README.es.md">
    <img src="https://github.com/Nachopuerto95/multilang/blob/main/ES.png" alt="Español" width="50">
  </a>&nbsp;&nbsp;&nbsp;
  <a href="/README.md">
    <img src="https://github.com/Nachopuerto95/multilang/blob/main/EN.png" alt="English" width="50">
  </a>
</p>

# 📝 Printf (42cursus)

<img src="https://github.com/Nachopuerto95/multilang/blob/main/42-Madrid%20-%20Edited.jpg">

## 📜 Acerca del proyecto

> Para este proyecto replicaremos el funcionamiento de la función original de printf

	🚀 Este proyecto es una introducción al uso de las funciones variáticas y la librería <stdarg.h>.

> [!NOTE]  
> Debido a los requisitos de la norma de la Escuela 42:
> * Cada función no puede tener más de 25 líneas de código.
> * Todas las variables deben ser declaradas y alineadas en la parte superior de cada función.
> * El proyecto debe ser creado solo con las funciones permitidas.
<br>

## Descripción 

Este proyecto consiste en replicar el funcionamiento de la función original de printf. 
Se deben implementar las siguientes conversiones:

| Conversión  | Descripción														 			|
|-------|-----------------------------------------------------------------------------------|
| **%c** | Imprime un solo carácter.       													|
| **%s** | Imprime una string (como se define por defecto en C).											|
| **%p** | El puntero void * dado como argumento se imprime en formato hexadecimal.								|
| **%d** | Imprime un número decimal (base 10).																	|
| **%i** | Imprime un entero en base 10.               											|
| **%u** | Imprime un número decimal (base 10) sin signo.               									|
| **%x** | Imprime un número hexadecimal (base 16) en minúsculas.                				|
| **%X** | Imprime un número hexadecimal (base 16) en mayúsculas.                				|
| **%%** | Imprime el símbolo del porcentaje.                 											|

◦ La función printf retorna el número de caracteres impresos, o un valor negativo si ocurre un error.

◦ No se debe implementar la gestión del buffer del original.

Prototipo de la función:

```C
int ft_printf(char const *s, ...);
```

## Ejemplo de uso

<b>Código: </b>

![B030DA8C-43A1-48E6-A658-AE30472548C0](https://user-images.githubusercontent.com/66915274/198844199-3761987c-df3d-4c3d-90d1-e9f30583b83a.jpeg)


## Funciones autorizadas 

| Función  | Descripción														 			|
|-------|-----------------------------------------------------------------------------------|
| malloc | Solicitar un bloque de memoria del tamaño suministrado como parámetro.     													|
| free | Desasigna un bloque de memoria que se había asignado previamente mediante una llamada. 											|
| write | Hace que los bytes que indiques del buffer sean escritos en el file descriptor seleccionado.								|
| va_start | Permite el acceso a los argumentos de la función variada.														|
| va_arg | Accede al siguiente argumento de la función variada.               											|
| va_copy | Hace una copia de los argumentos de la función variádica.               									|
| va_end | Finaliza el recorrido de los argumentos de la función variada.                				|

