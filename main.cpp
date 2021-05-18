#include <iostream>

using namespace std;

int main()
{
    int cont = 0, numero, pares = 0;
    while (cont < 5){
        cin >> numero;
        if (numero%2 == 0){
            pares++;
        }
        cont++;
    }
    cout << pares << " valores pares" <<endl;
    return 0;
}
