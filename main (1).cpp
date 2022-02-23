#include <iostream>
using namespace std;
int main()
{
    
 int option;
 char descripcion[1000];
 int PU;
 int HDT;
 int PUDT;
 int NC=0;
 char NDT[1000];
 int CDT;
 int b;
 int a;
 int Exit;
 char nombre[100];
 int edad;
 int TOTAL=0;
 do{
  cout << "****************************************************************************" << endl;
	cout << "Bienvenido al el agendador de citas dentales JARVIS ¿qué vamos a hacer hoy?" << endl;
	cout << "****************************************************************************" << endl;
	cout << " " << endl;
        cout<<"1.-Agendar Cita"<<endl;
        cout<<"2.-Modificar Citas"<<endl;
        cout<<"3.-Eliminar Cita"<<endl;
        cout<<"4.-Lista de Citas vigentes"<<endl;
        cout<<"5.-Limpear pantalla"<<endl;
        cout<<"6.-Salir del Programa"<<endl;
        cin>>option;
        switch(option)
        {
			
	        case 1:

		 do{
            cout<<"AGENDAR CITA"<<endl;
            cout<<"Numero de cita"<<endl;
            cin>>NC;
            cout<<"Ingresar nombre del paciente"<<endl;
            cin>>nombre;
            cout<<"ingre la edad del paciemte"<<endl;
            cin>>edad;
            cout<<"Ingrese Hora del tartamiento"<<endl;
            cin>>HDT;
            cout<<"Nombre del tratamiento"<<endl;
            cin>>NDT;
            cout<<"descripcion"<<endl;
            cin>>descripcion;
            cout<<"Ingrese el precio unitario del tartamiento"<<endl;
            cin>>PUDT;
            cout<<"ingrese la cantidad del tratamiento"<<endl;
            cin>>CDT;
            cout<<"ingrese precio unitario"<<endl;
            cin>>PU;
            TOTAL=PUDT*CDT+PU;
            cout<<"TOTAL..."<<TOTAL<<endl;
            
            cout<<"¿Desea agregar otra cita o volver al menu principal?"<<endl;
            cout<<"1.-agregar otra cita"<<endl;
            cout<<"2.-ir al menu principal"<<endl;
            cin>>a;
            if (a==2)
            {
                return main();
            }
		 }
            while(a=1);
            
            break;
	
            
            case 6:
            cout << "¿Desea salir del programa?" << endl;
			cout << "1.-Si"<<endl;
			cout << "2.-No" << endl;
			cin >> Exit;
			if (Exit == 1) {

				cout << "Gracias por usar JARVIS, que tenga un buen día" << endl;
				return 0;
			}
			else {
				return main();
			}

            break;
            
            default:
    cout<<"la opción ingresada es incorrecta"<<endl;
    return main();
        }
    }
    while (option==6);
}