#include <iostream>
#include <string>
using namespace std;
//Funciones
int main(){
    //variables
    int opcion;
    //
    do
    {
        cout<<"Bienvenido a la clínica virtual de 'Salud+'.Estas son las opciones disponibles para los pacientes:"<<endl;
        cout<<"1. Administrar Especialidades Médicas."<<endl;
        cout<<"2. Administrar Pacientes."<<endl;
        cout<<"3. Administrar Turnos."<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Por favor elija la opción que desee con su número correspondiente: "<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1 :
            //Alta de especialidades médicas    
            //Modificacion de Especialidades médicas
            //Baja de especialidades médicas
            //Listado de especialidades medicas:
            //a)Completo
            //b)Búsqueda
            //Menu principal
        
            
            break;
        case 2 :
            //Alta de pacientes
            //Modificación de pacientes
            //Baja de pacientes
            //Listado de pacientes:
            //a) Completo
            //b) Busqueda
            //Menu principal
            break;
        case 3 :
            //Alta de turnos
            //Modificacion de turnos
            //Baja de turnos
            //Listado de turnos:
            //a)Completo
            //b)Busqueda
            //menu principal
            break;
        case 4:
            
            break;
    
        default:
            cout<<"Por favor seleccione una opción correcta."<<endl;
            break;
        }    
    } while (opcion!=4);
    return 0;
}