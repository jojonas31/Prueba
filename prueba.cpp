#include <iostream>
#include <string>
using namespace std;

int invertir(){
    int numeroIngresado;
    int numeroInvertido;
    cout<<"Ingresar numero";
    cin>>numeroIngresado;
    while(numeroIngresado!=0){
        numeroInvertido = numeroInvertido*10 + numeroIngresado%10;
        numeroIngresado = numeroIngresado/10;
    }
    cout<<numeroInvertido;
    return 0;
}

int sumaDigitos(){
    int numeroIngresado;
    int sumaDigitos;
    cout<<"Ingresar numero";
    cin>>numeroIngresado;
    while(numeroIngresado!=0){
        sumaDigitos= sumaDigitos + numeroIngresado%10;
        numeroIngresado = numeroIngresado/10;
    }
    cout<<sumaDigitos;
    return 0;
}

int verificarMultiplo(){
    int numeroIngresadoUno;
    int numeroIngresadoDos;
    cin>>numeroIngresadoUno;
    cin>>numeroIngresadoDos;
    if(numeroIngresadoUno%numeroIngresadoDos==0){
        cout<<"El numero es multiplo";
    }else{
        cout<<"El numero no es multiplo";
    }
    return 0;
}

int main(){
    char eleccion;
    do{
        cout<<"A:Invertir numero" <<endl;
        cout<<"B:Sumar digitos"<<endl;
        cout<<"C:Verificar multiplos"<<endl;
        cout<<"D:Cerrar programa"<<endl;
        cin>>eleccion;
        switch(eleccion)
        {
            case 'A':
                invertir();
                break;
            case 'B':
                sumaDigitos();
                break;
            case 'C':
                verificarMultiplo();
                break;
            case 'D':
                break;
        
        default:
            cout<<"Elija entre el A al D";
            break;}
    }while(eleccion!='D');
    return 0;
}