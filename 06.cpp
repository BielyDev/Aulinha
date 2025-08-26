#include <iostream>

using namespace std;

int n1, n2;

int main(){
    //Operadores Matemáticos: + | - | / | * | % | ()

    int n3, n4;

    cout << "Number 1: " << endl;
    cin >> n1;
    cout << "Number 2: " << endl;
    cin >> n2;
    cout << "Number 3: " << endl;
    cin >> n3;
    cout << "Number 4: " << endl;
    cin >> n4;

    cout << n1 << " + " << n2 << " = " << n1+n2 << endl;
    cout << n3 << " + " << n4 << " = " << n3+n4 << endl << endl;
    cout << n1 << " - " << n2 << " = " << n1-n2 << endl;
    cout << n3 << " - " << n4 << " = " << n3-n4 << endl << endl;
    cout << n1 << " * " << n2 << " = " << n1*n2 << endl;
    cout << n3 << " * " << n4 << " = " << n3*n4 << endl << endl;
    cout << n1 << " / " << n2 << " = " << n1/n2 << endl;
    cout << n3 << " / " << n4 << " = " << n3/n4 << endl << endl;
    cout << n1 << " % " << n2 << " = " << n1%n2 << endl;
    cout << n3 << " % " << n4 << " = " << n3%n4 << endl;

    cout << "\n--------------------------\n";

    cout << "(" << n1 << "+" << n2 << ")*" << n3 << " = " << (n1+n2)*n3;

    return 0;
}
