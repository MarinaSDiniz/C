#include <iostream>
using namespace std;

int main(){
    
    int numero, soma = 0;
    
    do {
        cout<<"Insira um numero inteiro: ";
        cin>> numero;
        soma += numero;
    }
    while(numero != 0);
    
    cout << "A soma dos numeros inseridos é: " << soma << endl;

    return 0;
}