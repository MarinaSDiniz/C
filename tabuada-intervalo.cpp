#include <iostream>
using namespace std;

int main()
{
    int num, tab, para;
    
    cout << "Insira um valor inteiro: ";
    cin >> num;
    
    cout << "Insira o intervalo (1 a ...): ";
    cin >> para;
    
    for(int i = 0; i <= para; i++){
        tab = num * i;
        cout << num << " x " << i << " = " << tab << endl;
    }
    return 0;
}