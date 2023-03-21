#include <iostream>
using namespace std;
int main(){
int a = 4, b = 3;
bool hasil;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
// menggunakan operator pembanding
hasil = a > b;
cout << "a > b = " << hasil << endl;
hasil = a < b; cout << "a < b = " << hasil << endl;
hasil = a >= b;
cout << "a >= b = " << hasil << endl;
hasil = a <= b;
cout << "a <= b = " << hasil << endl;
hasil = a == b;
cout << "a == b = " << hasil << endl;
hasil = a != b;
cout << "a != b = " << hasil << endl;
return 0;
}
