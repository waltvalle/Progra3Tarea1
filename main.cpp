#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    // Se devuelve la variable a con la suma de b
    return a+b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    // Se devuelve la variable a con la resta de b
    return a-b;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    // Se devuelve la variable a con la multiplicacion por b
    return a*b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    // Se devuelve la variable a con la devision entre b
    return a/b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    //la primera condicion evalua si a es menor que b, si se cumple devuelve b
    if (a<b)
        return b;
    else
        //si no, devuelve a
        return a;
    return 0;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if (a>b)
        //la primera condicion evalua si a es mayor que b, si se cumple devuelve b
    {
        return b;
    }
    else
    {
        //si no, devuelve a
        return a;
    }
    return 0;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    //la primera condicion evalua si a es mayor que b y c, si se cumple devuelve a
    if (a>b && a>c)
        return a;
    //la segunda condicion evalua si b es mayor que a y c, si se cumple devuelve b
    if (b>a && b>c)
        return b;
    else
        //si no se cumple ninguna devuelve c
        return c;
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    //se asigna el indice posicion al arreglo a la variable valor
    arreglo[posicion] = valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    //se asigna el indice posicion al arreglo
    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    //la variable num la creo con un numero muy bajo
    int num = -100000;
    // el for recorre todo el arreglo
    for (int i = 0; i < tamano; i++)
    {
        //esta condicion evalua si lo que tiene el arreglo en ese momento con indice i es mayor a num
        if (arreglo[i] > num)
        {
            //si se cumple, num sera igual a lo que tenga el arreglo con indice i
            num = arreglo[i];
        }
    }
    //se devuelve num
    return num;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    //la variable num la creo con un numero muy alto
    int num = 100000;
    // el for recorre todo el arreglo
    for (int i = 0; i < tamano; i++)
    {
        //esta condicion evalua si lo que tiene el arreglo en ese momento con indice i es menor a num
        if (arreglo[i] < num)
        {
            //si se cumple, num sera igual a lo que tenga el arreglo con indice i
            num = arreglo[i];
        }
    }
    //se devuelve num
    return num;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    //la variable num me servira para asignarle el valor de cualquier numero del arreglo
    int num = 0;
    //prom sera el promedio final
    int prom = 0;
    for (int i = 0; i < tamano; i++)
    {
        //num sera igual a lo que tenga el arreglo con el indice i
        num += arreglo[i];
        //prom sera num dividido entre el tamano del arreglo
        prom = num/tamano;
    }
    // se devuelve el promedio
    return prom;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
