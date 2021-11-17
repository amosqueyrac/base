#include<iostream>
using namespace std;

void hanoi(int, string, string, string);

int main(){
    int n;
    cout<<"ingrese la cantidad de discos para el juego: ";
    cin>>n;
    hanoi(n,"origen","auxiliar","destino");
    return 0;
}

void hanoi(int n, string o, string a, string d){
    if(n==1){
        cout<<"Mover disco del "<<o<<" al "<<d<<endl;
    } else {
        hanoi(n-1,o,d,a);
        cout<<"Mover disco del "<<o<<" al "<<d<<endl;
        hanoi(n-1,a,o,d);
    }
}