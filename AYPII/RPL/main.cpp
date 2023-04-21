#include <iostream>

using namespace std;

bool es_par(int x);

int main() {
    int x = 26;
    if(es_par(x)){
        cout << x << " es par" << endl;
    }else {
        cout << x << " No es par" << endl;
    }
}

bool es_par(int x) {
    return (x % 2 == 0);
}