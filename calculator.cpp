#include <iostream>

using namespace std;

int main() {

    float a, b, hasil;
    char aritmatika;
    cout << "Selamat datang di program Calculator \n \n";

    cout << "Masukan Nilai Pertama \n";
    cin >> a;
    cout << "Masukan Operator Aritmatika +, -, /, *, % \n";
    cin >> aritmatika;
    cout << "Masukan Nilai Kedua \n";
    cin >> b;

    cout << "\nHasil Perhitungan\n";
    cout << a << aritmatika << b;

if (aritmatika == '+') {
    hasil = a + b;
}else if (aritmatika == '-') {
    hasil = a - b;
}else if (aritmatika == '/') {
    hasil = a / b;
}else if (aritmatika == '*') {
    hasil = a * b;
}else 
    cout << "Operator anda tidak tersedia" << endl;
    cout << " = " << hasil << "\n" << endl;

    cin.get();
    return 0;
}