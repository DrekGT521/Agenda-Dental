#include <iostream>
#include <string>
using namespace std;
struct citas{
    int nc=0;
    string nombre;
    string descripcion;
    char ndt[100];
    int hdt;
    float pu;
    float cdt;
    float total;
};

int main()
{
    
    int option;
    int i=0;
    int j;
    int c, sub, op=1, mod=1;
    citas cita [150];
    int repeticion=1;
    int resp;
    j=0;
    int Exit;
    
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
        cout<<"AGENDAR CITA"<<endl;
        j=j+1;
        do{
        for(i; i<j; i++)
        {
            cita[i].nc=i+1;
            cout<<"numero de cita"<<cita[i].nc<<endl;
            cout<<"ingrese nombre del paciente"<<endl;
            cin.ignore();
            getline(cin, cita[i].nombre);
            cout<<"ingrese el horario del tratamiento"<<endl;
            cin>>cita[i].hdt;
            cout<<"ingrese nombre del tratamiento"<<endl;
            cin>>cita[i].ndt;
            getline(cin, cita[i].nombre);
            cout<<"ingrese la descripcion"<<endl;
            getline(cin, cita[i].descripcion);
            cout<<"ingrese precio unitario del tratamiento"<<endl;
            cin>>cita[i].pu;
            cout<<"ingrese cantidad de tratamiento"<<endl;
            cin>>cita[i].cdt;
            cita[i].total = (cita[i].pu * cita[i].cdt);
            cout << "precio total tratamiento: " << cita[i].total  <<  endl;
            
            cout<<"¿Desea agregar otra cita o volver al menu principal?"<<endl;
            cout<<"1.-agregar otra cita"<<endl;
            cout<<"2.-ir al menu principal"<<endl;
            cin>>resp;
            if(resp==1)
            {
                j=j+1;
            }
            else
            {
                cout<<"Gracias"<<endl;
            }
        }
        }while(resp==1);
        cout<<"si desea volver al menu ingrese 1, si desea salir ingrese 2: ";
        cin>>repeticion;
        break;
        
        case 2:
        cout<<"MODIFICAR CITA"<<endl;
        do{
        cout<<"ingrese la cita a modificar"<<endl;
        cin>>c;
        c=c-1;
        
        do{
        cout<<"ingrese la opcion que desee modificar"<<endl;
        cout<<"1.-Toda la cita"<<endl;
        cout<<"2.-Nombre del paciente"<<endl;
        cout<<"3.-Descripcion"<<endl;
        cout<<"4.-Nombre del Tratamiento"<<endl;
        cout<<"5.-Horario del Tratamiento"<<endl;
        cout<<"6.-Precio unitario del tratamiento"<<endl;
        cout<<"7.-Cantidad del tratamiento"<<endl;
        cin>>sub;
        
        switch(sub)
        {
            case 1:
             cout<<"Numero de cita"<<cita[c].nc<<endl;
             cout<<"ingrese nombre del paciente"<<endl;
             cin.ignore();
             getline(cin, cita[c].nombre);
             cout<<"ingrese descripcion"<<endl;
             getline(cin, cita[c].descripcion);
             cout<<"ingrese nombre del tratamiento";
             cin>>cita[c].ndt;
             cout<<"ingrese el horario del tratamiento (en formato 24hr)"<<endl;
             cin>>cita[c].hdt;
             cout<<"ingrese precio unitario del tratamiento"<<endl;
             cin>>cita[c].pu;
             cout<<"ingrese cantidad de tratamiento"<<endl;
             cin>>cita[c].cdt;
             cita[c].total = (cita[c].pu * cita[c].cdt);
             cout << "precio total tratamiento: " << cita[c].total  <<  endl;
             op=2;
            break;
            
            case 2:
             cout<<"ingrese nombre del paciente"<<endl;
             cin.ignore();
             getline(cin, cita[c].nombre);
             cout<<"si desea modificar otro dato de la misma cita ingrese 1, de lo contrario ingrese 2: ";
             cin>>op;
            break; 
             
            case 3:
             cout<<"ingrese descripcion"<<endl;
             cin.ignore();
             getline(cin, cita[c].descripcion);
             cout<<"si desea modificar otro dato de la misma cita ingrese 1, de lo contrario ingrese 2: ";
             cin>>op;
            break;
            
            case 4: 
             cout<<"ingrese nombre del tratamiento"<<endl;
             cin>>cita[c].ndt;
             cout<<"si desea modificar otro dato de la misma cita ingrese 1, de lo contrario ingrese 2: ";
             cin>>op;
            break;
            
            case 5 :
             cout<<"ingrese el horario del tratamiento (en formato 24hr)"<<endl;
             cin>>cita[c].hdt;
             cout<<"si desea modificar otro dato de la misma cita ingrese 1, de lo contrario ingrese 2: ";
             cin>>op;
            break;
            
            case 6:
             cout<<"ingrese precio unitario del tratamiento"<<endl;
             cin>>cita[c].pu;
             cout<<"si desea modificar otro dato de la misma cita ingrese 1, de lo contrario ingrese 2: ";
             cin>>op;
            break;
            
            case 7:
             cout<<"ingrese cantidad de tratamiento"<<endl;
             cin>>cita[c].cdt;
             cout<<"si desea modificar otro dato de la misma cita ingrese 1, de lo contrario ingrese 2: ";
             cin>>op;
            break;
        }
        }while(op==1);
        cout<<"si desea modificar otra cita ingrese 1, si ya no desea modificar mas citas ingrese 2: ";
        cin>>mod;
        }while(mod==1);
           
        cout<<"si desea volver al menu ingrese 1, si desea salir ingrese 2: ";
        cin>>repeticion;
        break;
        
        case 4:
        cout<<"LISTA DE CITAS VIGENTES"<<endl;
         for(i=0;i<j;i++)
        {
            cout<<"ID de cita:"<< cita[i].nc << endl;
            cout<<"Nombre del paciente:" << cita[i].nombre<<endl;
            cout<<"Descripcion: " << cita[i].descripcion<<endl;
            cout<<"Nombre del tratamiento:" << cita[i].ndt<<endl;
            cout<<"Horario del tratamiento:" << cita[i].hdt<<endl;
            cout<<"Precio unitario del tratamiento:" << cita[i].pu<<endl;
            cout<<"Cantidad de tratamiento:" << cita[i].cdt<<endl;
            cout<<"precio total tratamiento:" << cita[i].total  <<  endl <<endl;
        }
        cout<<"si desea volver al menu ingrese 1, si desea salir ingrese 2:";
        cin>>repeticion;
        break;
        
        case 5:
        cout<<"LIMPIAR VENTANA"<<endl;
        system("clear");
        repeticion;
        
        
        case 6:
        repeticion=2;
        break;
       
    }
}while (repeticion==1);

        cout<<"Gracias por usar JARVIS, que tenga un buen día";
    return 0;
}