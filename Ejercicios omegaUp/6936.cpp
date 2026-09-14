#include <iostream>
using namespace std;

int main() {
    int n, m, a;
    cout<<"ingrese Tres numeros enteros";
    cin >> n >> m >> a;
    
    if (n == m && m == a) {
        cout << "ELLA TE AMA" << endl;
    } else {
        cout << "ELLA NO TE AMA" << endl;
    }
    
    return 0;
}