        #include <iostream>
        using namespace std;
        
        int leeedad();
        void vectoredad(int vector[], int tamano);
        int edadMayor(int vector[], int tamano);
        int edadMenor(int vector[], int tamano);
        double promedioEdad(int vector[], int tamano);
        int paresEdad(int vector[], int tamano);
        int imparesEdad(int vector[], int tamano);
        
        int main() {
            int tamano = 0;
            do {
                cout << "Ingrese el tamaño del vector (max 10): ";
                cin >> tamano;
            } while (tamano <= 0 || tamano > 10); 
        
            int edades[tamano]; 
        
            vectoredad(edades, tamano);
        
            for (int i = 0; i < tamano; ++i) {
                cout << "Edad " << i + 1 << ": " << edades[i] << endl;
            }
        
            // Encontrar y mostrar la mayor y menor edad
            cout << "La mayor edad es: " << edadMayor(edades, tamano) << endl;
            cout << "La menor edad es: " << edadMenor(edades, tamano) << endl;
            cout << "El promedio de edad es: " << promedioEdad(edades, tamano) << endl;
            cout << "La cantidad de edades pares es: " << paresEdad(edades, tamano) << endl;
            cout << "La cantidad de edades impares es: " << imparesEdad(edades, tamano) << endl;
        
            return 0;
        }
        
        int leeedad() {
            int edad;
            do {
                cout << "Ingrese una edad: ";
                cin >> edad;
                if (edad < 18) {
                    cout << "Ingrese una edad correcta (18+)" << endl;
                }
            } while (edad < 18);
            return edad;
        }
        
        void vectoredad(int vector[], int tamano) {
            for (int i = 0; i < tamano; ++i) {
                vector[i] = leeedad();
            }
        }
        
        int edadMayor(int vector[], int tamano) {
            int mayor = vector[0];
            for (int i = 1; i < tamano; ++i) {
                if (vector[i] > mayor) {
                    mayor = vector[i];
                }
            }
            return mayor;
        }
        
        int edadMenor(int vector[], int tamano) {
            int menor = vector[0];
            for (int i = 1; i < tamano; ++i) {
                if (vector[i] < menor) {
                    menor = vector[i];
                }
            }
            return menor;
        }

        double promedioEdad(int vector[], int tamano){
            int promedio = vector[0];
            for (int i = 1; i < tamano; ++i) {
                    promedio += vector[i];
            }
            promedio = promedio/tamano;
            return promedio;
        }

        int paresEdad(int vector[], int tamano){
            int par = 0;
            for (int i = 0; i < tamano; ++i) {
                if (vector[i] % 2 ==0) {
                    par++;
                }
            }
            return par;
        }

        int imparesEdad(int vector[], int tamano){
            int impar = 0;
            for (int i = 0; i < tamano; ++i) {
                if (vector[i] % 2 ==1) {
                    impar++;
                }
            }
            return impar;
        }