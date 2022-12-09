#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <sys/time.h>

using namespace std;

long obtenerTiempo(){
    struct timeval inicio;
    gettimeofday(&inicio, NULL);
    return inicio.tv_sec*1000000+inicio.tv_usec;
}

int main(){
    long inicio = obtenerTiempo(); // instancia inicial
    double tiempoEnSegundos;
    long tiempoEnMicrosegundos;
    int arr[] = {5,7,3,6,1,9,8,4,2};
    sort(arr, arr+9);
    int sizeArray = sizeof(arr)/sizeof(int);
    for(int i=0; i < sizeArray; i++){
        cout<<arr[i]<<' ';
    }
    long final = obtenerTiempo(); // instancia final
    tiempoEnMicrosegundos = final - inicio;
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout<<endl<<endl;
    cout<<"El tiempo de ejecucion en microsegundos es: "<<tiempoEnMicrosegundos<<endl<<endl;
    cout<<"EL tiempo de ejecucion en segundos es: "<<tiempoEnSegundos<<endl<<endl;
    return 0;
}