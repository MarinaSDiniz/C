#include <iostream>
using namespace std;

int main()
{
    int num, tab;
    
    cout << "Insira um valor inteiro: ";
    cin >> num;
    
    for(int i = 0; i <= 10; i++){
        tab = num * i;
        cout << num << " x " << i << " = " << tab << endl;
    }
    return 0;
}