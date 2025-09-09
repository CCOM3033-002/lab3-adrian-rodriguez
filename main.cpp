#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    srand(time(0));

    int maximo = 100;
    
    int minimo = 0;

    int numeroAleatorio1 = rand() % (maximo - minimo + 1) + minimo;
    
    int numeroAleatorio2 = rand() % (maximo - minimo + 1) + minimo;

    int numeroAleatorio3 = rand() % (maximo - minimo + 1) + minimo;
    

    cout<< "Números aleatorios generados: " << numeroAleatorio1 << "," << numeroAleatorio2 << "," << numeroAleatorio3 << endl;
    cout<< "Orden Decendiente: ";

    if (numeroAleatorio1 >= numeroAleatorio2 && numeroAleatorio2 >= numeroAleatorio3)

        cout << numeroAleatorio1 << " >= " << numeroAleatorio2<< " >= " << numeroAleatorio3;

    else if(numeroAleatorio1 <= numeroAleatorio2 && numeroAleatorio1 >= numeroAleatorio3)

        cout<<  numeroAleatorio2 << ">= " << numeroAleatorio1 << " >= " << numeroAleatorio3;


    else if (numeroAleatorio3 >= numeroAleatorio2 && numeroAleatorio2 >= numeroAleatorio1)

        cout<< numeroAleatorio3 << " >= " << numeroAleatorio2 << " >= " << numeroAleatorio1;
    
    else if (numeroAleatorio2 >= numeroAleatorio3 && numeroAleatorio3 >= numeroAleatorio1)
    
        cout<< numeroAleatorio2 << " >= " << numeroAleatorio3 << " >= " << numeroAleatorio1;

    else if (numeroAleatorio1 >= numeroAleatorio3 && numeroAleatorio3 >= numeroAleatorio2)

        cout<< numeroAleatorio1 << " >= " << numeroAleatorio3 << " >= " << numeroAleatorio2;    
    
    else if (numeroAleatorio3 >= numeroAleatorio1 && numeroAleatorio1 >= numeroAleatorio2)
        cout<< numeroAleatorio3 << " >= " << numeroAleatorio1 << " >= " << numeroAleatorio2;

    else;

    cout<< endl;

return 0;



}
