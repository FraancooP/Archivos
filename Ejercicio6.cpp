/*Escribir un programa que solicite los datos de un producto 
(nombre del producto, marca, precio unitario, fecha de elaboración, tamaño)
 y lo guarde en un archivo de texto con el nombre “Datos_Producto.txt”.*/
//CON FSTREAM
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]){
    string productos;
    ofstream ofs;//Creamos librearia.
    ofs.open("datos_producto.txt");
    cout<<"Ingrese nombre, marca, precio, fecha de elaboracion y tamaño, finalece con {.}";
    //escribir el archivo con mensaje
    ofs<<"mensaje: "<<endl;
    //ofs<<productos<<endl;
    ofs.close();

    //Leer.
    productos=" ";
    ifstream ifs;
    ifs.open("datos_productos.txt");
    cout << "\nContenido del archivo: "<<endl;
    while (!ifs.eof())
    {
        //getline(ifs,productos);
        //cout<<productos<<endl;
    }
    ifs.close();
    return 0;
}