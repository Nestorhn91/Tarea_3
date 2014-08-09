#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


//agrega 'valor' a 'mi_set'
void agregarASet(set<int> *mi_set,int valor)
{
    //http://www.cplusplus.com/reference/iterator/inserter/
  mi_set -> insert (valor);// con esta funncion recorre set y agrega un valor int
}

//agrega 'valor' a 'mi_map' usando la 'llave' como llave
void agregarMap(map<string, int> *mi_map, string llave, int valor)
{
   (*mi_map) [llave] = valor;
}

//devuelve cuantos elementos de 'mi_multiset' tienen un valor de 'valor'
int contarElementosMultiset(multiset<int> mi_multiset,int valor)
{
    //http://www.cplusplus.com/reference/set/multiset/size/
    multiset<int>::size_type a; // Devuelve el número de elementos en el contenedor multiset
    a=mi_multiset.count(valor);

    //return -1;
}

//devuelve cuantos elementos de 'mi_multimap' usan 'llave' como llave
int contarElementosMultimap(multimap<string,int> mi_multimap,string llave)
{
    multimap<string,int>::size_type b; // esta funcion recorre el numero de elmento en el contenedor multimap
    b=mi_multimap.count(llave);
    //return -1;
}

//devuelve la suma de los elementos de 'mi_multiset' que usan 'llave' como llave
int sumaElementosMultiset(multiset<int> mi_multiset, int valor)
{
    return -1;
}

//devuelve la suma de los elementos de 'mi_multimap' que usan 'llave' como llave
int sumaElementosMultimap(multimap<string, int> mi_multimap, string llave)
{
    return -1;
}

//el promedio de todos los elementos que tiene 'mi_multiset' (incluyendo valores repetidos)
int promedioElementosMultiset(multiset<int>mi_multiset)
{
    -1;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
