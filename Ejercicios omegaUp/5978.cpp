#include <iostream>
using namespace std;

int main() {
    string nombre1;
    int A;
    string nombre2;
    int B;

    cout<<"escriba de la 1ra persona y el puntaje";   
    cin >> nombre1 >> A;
     cout<<"escriba de la 2da persona y el puntaje"; 
    cin >> nombre2 >> B;

    
    if (A > B) {
        cout << nombre1 << endl;
    } else {
        cout << nombre2  << endl;
    }

    return 0;
}