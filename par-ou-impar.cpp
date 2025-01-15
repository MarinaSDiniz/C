#include <iostream>
using namespace std;

int main(){
    
    int numero;
    
    cout<<"Insira um numero inteiro: ";
    cin>> numero;

    if(numero >= 0){
        cout<<"eh um numero positivo.\n";
            if(numero % 2 == 0){
                cout<<"eh um numero par.\n";
            } else {
                cout<<"eh um numero impar.\n";
            }
    } else {
            cout<<"eh um numero negativo.\n";
        }

    return 0;
}