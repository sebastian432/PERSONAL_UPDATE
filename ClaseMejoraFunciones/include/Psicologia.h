#ifndef PSICOLOGIA_H
#define PSICOLOGIA_H
#include <string>
#include <iostream>
using namespace std;


class Psicologia
{
    private:
            int opcion_preg;
            int opcion_emocion;
            int horas_estudio;
            int horas_suenio;
            int gusto;
            int expresion;
            int influencia;
            char volver_emocion;
            char volver_orden;
            char volver_menu;
            char olvido;


    public:
         Psicologia();
        ~Psicologia();
        void Pregunta();
        void Ordenar();
        int Horaestudio(int);
        int Horasdesuenio(int);
        string Recordatorio(char);
        void Autoestima();
        void Regresar_atras();
        void Gusto_personal(int);
        void Consejos_autoestima();
        void Expresion(int);
        void Decision(int);
        void Emocion();
        void Alegria();
        void Enojo();
        void Miedo();
        void Tristeza();
        void Volver_emociones();
        void Volver_ordenar();
        void Volver_menu();

};

#endif // PSICOLOGIA_H
