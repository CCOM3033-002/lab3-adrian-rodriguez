#include <iostream>
#include <cstdlib>
using namespace std;

main(){

    srand(time(0));

    int maximo = 100;
    int numero;
    int minimo = 0;

    int numeroAleatorio = rand() % (maximo - minimo + 1) + minimo;

    cout << maximo << minimo << numero;



}
