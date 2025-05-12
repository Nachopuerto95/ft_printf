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


## Description 

This project consists of replicating the operation of the original printf function. 
The following conversions must be implemented:

| Conversion | Description |
|-------|-----------------------------------------------------------------------------------|
| **%c** | Prints a single character. |
| **%s** | Print a string (as defined by default in C).											|
| **%p** | The void pointer * given as argument is printed in hexadecimal format.								|
| **%d** | Print a decimal number (base 10).																	|
| **%i** | Prints an integer in base 10. |
| **%u** | Print an unsigned decimal number (base 10).               									|
| **%x** | Print a hexadecimal number (base 16) in lower case.                				|
| **%X** | Print a hexadecimal number (base 16) in upper case.                				|
| **%%** | Prints the percent symbol.                 											|

◦ The printf function returns the number of characters printed, or a negative value if an error occurs.

◦ Buffer handling of the original must not be implemented.

Function prototype:
```C
int ft_printf(char const *s, ...);
```

## Ejemplo de uso

<b>Código: </b>

![B030DA8C-43A1-48E6-A658-AE30472548C0](https://user-images.githubusercontent.com/66915274/198844199-3761987c-df3d-4c3d-90d1-e9f30583b83a.jpeg)

## Funciones autorizadas 

| Función | Descripción |
|-------|-----------------------------------------------------------------------------------|
| malloc | Solicitar un bloque de memoria del tamaño suministrado como parámetro.     													|
| free | Desasigna un bloque de memoria que se había asignado previamente mediante una llamada. 											|
| write | Hace que los bytes que indiques del buffer sean escritos en el file descriptor seleccionado.								|
| va_start | Permite el acceso a los argumentos de la función variada.														|
| va_arg | Accede al siguiente argumento de la función variada.               											|
| va_copy | Hace una copia de los argumentos de la función variádica.               									|
| va_end | Finaliza el recorrido de los argumentos de la función variada.                				|

