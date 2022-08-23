#include<iostream>
#include<fstream>
#include"Syntax.h"
using namespace std;
//-----------------------------------------------------------------
// Our Spanish Programming language Syntax 
//<Prog>::<Inicio><Bloque>"Final"
//<Inicio>::<Forma>'\n'
//<Forma>::"Tortuga"|"Cuadrado"|"Flecha"|"Circulo"|"Triangulo"|"Clasico"

//<Bloque>:: avanzar(<DIST>)'n'<Bloque>
//<Bloque>::gira_izquierda(<DIST>)'n'<Bloque>
//<Bloque>::gira_derecha(<DIST>)'n'<Bloque>
//<Bloque>::'\n'

//<DIST>::number
// --------------------------------------------------------------------

    // First parameter: script.txt
    // Second parmeter:code_generated;
int main(){
    Syntax test("script.txt","code_generated.py");
    (test.run_code())?cout<<"Succesfully execution\n":cout<<"There was a Mistake in the execution\n";

    
    return 1;
}
