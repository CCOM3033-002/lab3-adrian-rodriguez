#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    //Inicia  la generacion de numeros aleatoreos

    srand(time(0));

    // maximo 100 y minimo 0 para que los numeros aleatores generados esten en el rango de [0,100]
    int maximo = 100;
    
    int minimo = 0;

    // Los tres numeros generados aleatoreos
    int numeroAleatorio1 = rand() % (maximo - minimo + 1) + minimo;
    
    int numeroAleatorio2 = rand() % (maximo - minimo + 1) + minimo;

    int numeroAleatorio3 = rand() % (maximo - minimo + 1) + minimo;
    
    //Desplegar los 3 numero aleatores generados
    cout<< "Números aleatorios generados: " << numeroAleatorio1 << "," << numeroAleatorio2 << "," << numeroAleatorio3 << endl;
    
    
    cout<< "Orden Decendente: ";


    //Verificar cada caso que pueda ocurrir parra que se ordene los numeros generados aleatorea mente sean oraganizados de mayor a menor

    if (numeroAleatorio1 >= numeroAleatorio2 && numeroAleatorio2 >= numeroAleatorio3)

        cout << numeroAleatorio1 << " >= " << numeroAleatorio2<< " >= " << numeroAleatorio3;

    else if(numeroAleatorio1 <= numeroAleatorio2 && numeroAleatorio1 >= numeroAleatorio3)

        cout<<  numeroAleatorio2 << " >= " << numeroAleatorio1 << " >= " << numeroAleatorio3;


    else if (numeroAleatorio3 >= numeroAleatorio2 && numeroAleatorio2 >= numeroAleatorio1)

        cout<< numeroAleatorio3 << " >= " << numeroAleatorio2 << " >= " << numeroAleatorio1;
    
    else if (numeroAleatorio2 >= numeroAleatorio3 && numeroAleatorio3 >= numeroAleatorio1)
    
        cout<< numeroAleatorio2 << " >= " << numeroAleatorio3 << " >= " << numeroAleatorio1;

    else if (numeroAleatorio1 >= numeroAleatorio3 && numeroAleatorio3 >= numeroAleatorio2)

        cout<< numeroAleatorio1 << " >= " << numeroAleatorio3 << " >= " << numeroAleatorio2;    
    
    else if (numeroAleatorio3 >= numeroAleatorio1 && numeroAleatorio1 >= numeroAleatorio2)
        cout<< numeroAleatorio3 << " >= " << numeroAleatorio1 << " >= " << numeroAleatorio2;



return 0;



}
