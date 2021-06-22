#include <iostream>
#include <fstream>
using namespace std;

int main() {

    //Nombre de nuestro archivo
    string nombre = "Prueba.txt";

    //Creamos un fichero de salida ofstream
    ofstream myfile;

    //Abrimos el archivo para guardar
    myfile.open(nombre);

    //Enviamos la cadena de texto que se va a almacenar
    //en el archivo
    myfile << "Vamos a realizar una segunda prueba";

    //Cerramos el fichero, para luego poder abrirlo como lextura
    myfile.close();

    //Se abre el archivo
    ifstream archivoLectura(nombre);
    char cadena[128];

    // Leeremos mediante getline, si lo hiciéramos mediante el operador
    // << sólo leeríamos parte de la cadena:
    archivoLectura.getline(cadena, 128);
    cout << cadena << endl;

    return 0;
}
