/******************************************************************************
//actividad 9
Nombre: Kaleb Alejandro Falcon Marquez
Fecha: 30/04/2024
Programa: Recursividad
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / SEGUNDO SEMESTRE
Profesor: CARLOS JAVIER CRUZ FRANCO
Descripcion: Programa que solicita datos al usuario e imprime lo solicitado 
mediante recursividad
*******************************************************************************/

#include <iostream>
using namespace std;

void ingresarDatos(int Datos[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i+1 << ": ";
        cin >> Datos[i];
    }
}

void imprimirArreglo(int Datos[], int n) {
    if(n == 0) {
        return;
    } else {
        imprimirArreglo(Datos, n-1);
        cout  << "Elemento " << n << ": " << Datos[n-1] << " " <<endl;;
    }
}

int main() {
    const int n = 5;
    int Datos[n];

    cout << "Por favor, ingrese " << n << " números enteros." << endl;
    ingresarDatos(Datos, n);

    cout << "Los elementos del arreglo son: " << endl;
    imprimirArreglo(Datos, n);

    return 0;
}