#include <iostream>
#include "Lotificadora.h"
#include "Proyecto_loto.h"

using namespace std;
int main() {
    Lotificadora residencial;
    Proyecto_loto lotificacion;
    int opcion = -1;
    do {
        cout << "\t\tSISTEMA DE VENTA DE TERRENOS(LOTIFICADORA)" << endl;
        cout << "\t1.- Adicionar Terreno" << endl;
        cout << "\t2.- Obtener total de terrenos vendidos" << endl;
        cout << "\t3.- Ingresar el nombre de la lotificadora" << endl;
        cout << "\t4.- Obtener el nombre de la lotificadora" << endl;
        cout << "\t5.- Obtener costo total de terrenos" << endl;

        cout <<endl<< "\t\tPROYECTO LOTIFICADORA" << endl;
        cout << "\t6.- Agregar lotificadora" << endl;
        cout << "\t7.- Costo de las lotificadoras" << endl;
        cout << "\t8.- Lotificadoras activas" << endl;


        cout << "\n\t-1 para salir del menu" << endl;
        cin >> opcion;

        if (opcion == 1) {
            float varass;
            cout << "ingrese las varas" << endl;
            cin >> varass;
            residencial.addTerreno(varass);
        } else if (opcion == 2) {
            cout << "total de terrenos vendidos  " << residencial.getTotTerrenoVend() << endl;
        }else if(opcion==3)
        {
            string name;
            cout<<"Ingrese el nombre de la Lotificadora: ";
            cin>>name;
            residencial.setNombreLoti(name);
        }
        else if(opcion==4)
        {
            cout<<"El nombre de la Lotificadora es: "<<residencial.getnombre();
        }else if(opcion==5)
        {
            cout<<"El Costo total de los terrenos es: "<<residencial.costoTerreno();
        }else if(opcion==6)
        {
            lotificacion.Activos();
            cout<<"Ingresar fila"<<endl;

            int fill;
            cin>>fill;

            cout<<"Ingresar Columna"<<endl;

            int col;
            cin>>col;
            cout<<"Ingresar Nombre"<<endl;
            string name;
            cin>>name;

            lotificacion.add_loti(fill,col,name);

        }else if(opcion==7)
        {
            cout<<"Costo de las Lotificadoras: "<<lotificacion.getCosto()<<endl;
        }else if(opcion==8) {
            cout << "Activas: " << endl;
            lotificacion.Activos();
        }else
        {
            cout<<"Gracias por usar nuestra Lotificadora!!!!!"<<endl;
        }



    }while(opcion !=-1);
    return 0;
}