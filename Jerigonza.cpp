//JERIGONZA.CPP
#include <iostream>
#include <string>
using namespace std;

string comprobar(char, int);

int main(){
    char texto;
    string jerigonza;         
 
    cout << "Introduce una palabra: ";
    cin >>  texto;
    cout << "Palabra: " <<  texto << endl;
    jerigonza += comprobar(texto, 0 );
    cout << "Jerigonza: " <<  jerigonza << endl;
    return 0;
}

string comprobar(char cadena, int indice){
     int n = int(cadena[indice]);
     string Ret ;
     if (n==97 || n == 101 || n ==105 || n ==111 || n ==117) {
       Ret = cadena[indice] + "p" + cadena[indice];
     }
     else {
        Ret = cadena[indice];
        comprobar(cadena, indice + 1);
     }
     return Ret;
}
