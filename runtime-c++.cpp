// Calcular tiempo de ejecución de una operación o función 
// Autor: Joseph Santamaria
// Fecha: 08/12/2022

#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <sys/time.h>

using namespace std;

long obtenerTiempo(){
    struct timeval inicio;
    // gettimeofdat devuelve el tiempo del reloj de la computadora
    gettimeofday(&inicio, NULL);
    // Retornamos el tiempo en segundo multiplicado por un millon que será 00:00:00 + el tiempo en microsegundos
    return inicio.tv_sec*1000000+inicio.tv_usec;
}

int main(){
    long inicio = obtenerTiempo(); // instancia inicial
    // incio de operación random para ordenar números con sort
    double tiempoEnSegundos;
    long tiempoEnMicrosegundos;
    int arr[] = {5,7,3,6,1,9,8,4,2};
    sort(arr, arr+9);
    int sizeArray = sizeof(arr)/sizeof(int);
    for(int i=0; i < sizeArray; i++){
        cout<<arr[i]<<' ';
    }
    // fin de operación random
    long final = obtenerTiempo(); // instancia final
    // restamos el tiempo total final menos el tiempo de incio 
    tiempoEnMicrosegundos = final - inicio;
    // transformamos a segundos
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout<<endl<<endl;
    // impresion del tiempo en microsegundos y segundos
    cout<<"El tiempo de ejecucion en microsegundos es: "<<tiempoEnMicrosegundos<<endl<<endl;
    cout<<"EL tiempo de ejecucion en segundos es: "<<tiempoEnSegundos<<endl<<endl;
    return 0;
}