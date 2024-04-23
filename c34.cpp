#include <iostream>

using namespace std;

int main() {

    int cuentas=0;
    char respuestas[] = {'s', 'n', 'n', 'n'};
    //char answer[4];
    string preguntas[] = 
    {
        "¿La escuela está recibiendo alumnos para clases presenciales (s/n)?",
        "¿Presentas síntomas como tos, fiebre o cuerpo cortado (s/n)?",
        "¿Algún familiar tuvo COVID en el último mes (s/n)?",
        "¿Tus padres prefieren que te quedes en casa hasta que te vacunes (s/n)?",
    };

    for (int i = 0; i < 4; i++)
    {
        char respuestadef;
        cin >> respuestadef;

        if(respuestadef==respuestas[i])
        {
            cuentas++;
        }
    }


    for (int o = 0; o < 4; o++)
    {
        cout << preguntas[o] << endl;
    }
    
    if(cuentas==4)
    {
        cout << "Puedes venir a la escuela, recuerda usar tu cubrebocas N95 y mantener la sana distancia" << endl;
    }else{
        cout << "No debes acudir a la escuela, cuídate y permanece en casa" << endl;
    }
    
}