/*

Descripción
En la cafetería de la UAM hay dos colas: la de los alumnos y la de los trabajadores. Cuando es el turno de atender a la siguiente persona, la política de la cafetería es darle preferencia a la gente formada en la cola de los trabajadores; los alumnos son atendidos sólo si no hay trabajadores formados. Con esta información, escribe un programa que procese una secuencia de 
 eventos de los siguientes tipos.

LLEGA ALUMNO 
: Llegó la persona de nombre 
 a formarse a la cola de los alumnos.
LLEGA TRABAJADOR 
: Llegó la persona de nombre 
 a formarse a la cola de los trabajadores.
ATIENDE: Se debe atender a la siguiente persona, imprimiendo su nombre.
Entrada
Un entero 
 seguido de los 
 eventos. Puedes suponer que 
, que los nombres consisten de entre 
 y 
 letras minúsculas y que nunca ocurre un evento de atención cuando las dos colas están vacías.

Salida
Los nombres de las personas atendidas en el orden en el que esto ocurrió.

Ejemplo
Entrada	
7
LLEGA ALUMNO luis
LLEGA TRABAJADOR ana
LLEGA ALUMNO jorge
ATIENDE
ATIENDE
LLEGA TRABAJADOR juan
ATIENDE

Salida
ana
luis
juan



*/

#include <iostream>
using namespace std;
int numberOfEvents=0; 

int main(){

    return 0;
}