#include <iostream>

using namespace std;

int main(){

    bool is_vive = true;
    int life = 100;
    float simple_decimal = 2.5;
    double decimal = 2.55555;
    char letter = 'G';
    //char name[7] = 'Gabriel';
    string name_in_string = "Gabriel :D";

    cout << "Você está vivo?: ";
    cin >> is_vive;
    cout << "De 0 a 10, qual valor você daria para o momento atual da sua vida?: ";
    cin >> life;
    cout << "Qual sua letra favorita? ";
    cin >> letter;
    cout << "Seu nome: ";
    cin >> name_in_string;

    cout << "_________________________________\n" << endl;

    cout << name_in_string << "... você definiu o momento da sua vida com " << life << ", pelo visto você está vivo e respondeu " << is_vive << ", e a sua letra favorita " << letter << " é sem graça"<< endl;


    return 0;
}
