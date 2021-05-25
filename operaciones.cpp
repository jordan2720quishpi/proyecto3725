#include <iostream>
using namespace std;
int validaNumero(){
   int numero;
   do{
    cout<<"ingrese un numero";
    cin>>numero;
   }while (numero<1 || numero>10);
   return numero;
}
void saludoprogramador(string nombre){
    cout<< "buneas tardes"<<nombre;
    cout<<"defina si no eres un robot contestntop la siguiente pregunta;
    cout<<"como se llama tu mascota";
}
main(){
    int n=validaNumero();
}

