#include <iostream>
using namespace std;

double leedato();
void matriz(double matriz[][3]);
double sumaMatriz(double matriz[][3]);
double determinanteMatriz(double matriz[][3]);
double filaCuadrado(double matriz[][3]);

        int main() {
            double matriz_input[3][3];
                
            matriz(matriz_input);
                
            cout << "Matriz generada:" << endl;
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    cout << matriz_input[i][j] << " "; 
                }
                cout << endl;
            }
                
            cout << "La suma de todos los elementos de la matriz es: " << sumaMatriz(matriz_input) << endl;
            cout << "El determinante de la matriz es: " << determinanteMatriz(matriz_input) << endl;
            cout << "La suma de los valores de cada fila elevados al cuadrado es: " << filaCuadrado(matriz_input) << endl;
                
            return 0;
            }
        
        double leedato() {
            double dato;
            do {
                cout << "Ingrese un numero para la matriz: ";
                cin >> dato;
                if (dato < 0 || dato > 1) {
                    cout << "Ingrese un numero correcto (Entre 0 y 1)" << endl;
                }
            } while (dato < 0 || dato > 1); 
            return dato;
        }
        
        void matriz(double matriz[][3]) {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    matriz[i][j] = leedato();
                }
            }
        }
        
        double sumaMatriz(double matriz[][3]) {
            double suma = 0;
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    suma += matriz[i][j];
                }
            }
            return suma;
        }
        
        double determinanteMatriz(double matriz[][3]) {
            double determinante = 0;
            determinante = matriz[0][0] * matriz[1][1] * matriz[2][2] +
                           matriz[0][1] * matriz[1][2] * matriz[2][0] +
                           matriz[0][2] * matriz[1][0] * matriz[2][1] -
                           matriz[0][2] * matriz[1][1] * matriz[2][0] -
                           matriz[0][0] * matriz[1][2] * matriz[2][1] -
                           matriz[0][1] * matriz[1][0] * matriz[2][2];
        
            return determinante;
        }
        
        double filaCuadrado(double matriz[][3]) {
            double suma_cuadrados = 0;
            for (int i = 0; i < 3; ++i) {
                double suma_fila = 0;
                for (int j = 0; j < 3; ++j) {
                    suma_fila += matriz[i][j];
                }
                suma_cuadrados += suma_fila * suma_fila;
            }
            return suma_cuadrados;
        }