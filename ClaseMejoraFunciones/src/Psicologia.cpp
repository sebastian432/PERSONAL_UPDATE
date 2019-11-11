#include "Psicologia.h"
#include "Mejora.h"
#include <string>
#include <iostream>
using namespace std;

Psicologia::Psicologia(){}

Psicologia::~Psicologia(){}

void Psicologia::Pregunta()
{
    do{
    cout<<" BIENVENIDO... Has ingresado al aspecto psicologico de Personal Update. "<<endl;
    cout<<"TENEMOS LAS SIGUIENTES OPCIONES: "<<endl;
    cout<<"1. Consejos para ordenar tu vida. "<<endl;
    cout<<"2. Mejorar autoestima. "<<endl;
    cout<<"3. Controlar tus emociones. "<<endl;
//    cout<<"4. Volver. "<<endl;
    cin>>opcion_preg;
    }while(opcion_preg>3 || opcion_preg<=0);

    if(opcion_preg==1){Ordenar();}
    else if(opcion_preg==2){Autoestima();}
    else if(opcion_preg==3){Emocion();}
 //   else if(opcion_preg==4){Pregunta();}
}

void Psicologia::Ordenar()
{
    cout<<"Cuantas horas de estudio tienes al dia?: \n";
    cout<<"Cuantas horas al dia duermes?: \n";
    cout<<"Usualmente olvidas lo que debes hacer?: \n";
    cout<<"\t\t\t\t presiona s para si. \n";
    cout<<"\t\t\t\t presiona n para no. \n\n";
    Volver_menu();
    cin>>horas_estudio>>horas_suenio>>olvido;

    Horaestudio(horas_estudio);
    Horasdesuenio(horas_suenio);
    Recordatorio(olvido);
    Volver_ordenar();
}

int Psicologia::Horaestudio(int horas_estudio)
{
    if(horas_estudio>24){cout<<"El dia solo tiene 24 horas  \n";}
    else if(horas_estudio<0){cout<<"El dia tiene mas de 0 horas  \n";}
    else if(horas_estudio>=0 && horas_estudio<=8){cout<<"Tu rutina de estudio es ligera, deberias tener hobbies para aprovechar tu tiempo\n";}
    else if(horas_estudio>8 && horas_estudio<=15){cout<<"Tu rutina de estudio es moderada,  \n";}
    else if(horas_estudio>15 && horas_estudio<=20){cout<<"Tu rutina de estudio es pesada \n";}
    else if(horas_estudio>20 && horas_estudio<=24){cout<<"Tu rutina de estudio es demasiado pesada, te recomendamos darte descansos de unos minutos para despejarte un poco. \n";}
}


int Psicologia::Horasdesuenio(int horas_suenio)
{
    if (horas_suenio>24){cout<<"Ya te moriste \n";}
    else if(horas_suenio<0){cout<<"Acaso eres el mesias? \n";}
    else if(horas_suenio>=0 && horas_suenio<=6){cout<<"Deberias descansar mas o empeoraras tu rendimiento en tus actividades diarias \n";}
    else if(horas_suenio>6 && horas_suenio<=8){cout<<"Duermes lo necesario, no deberias tener problemas de cansancio \n";}
    else if(horas_suenio>8 && horas_suenio<=12){cout<<"Duermes como un liron, arriba! haz algo productivo \n";}
    else if(horas_suenio>12 && horas_suenio<=24){cout<<"Eres un oso \n";}
}

string Psicologia::Recordatorio(char olvido)
{

    if(olvido =='s'){cout<<"Muy bien, se nota que eres organizado, el orden te servira para ser una persona exitosa \n";}
    else if(olvido=='n'){cout<<"Tener una libreta y anotar tus actividades ayudan a tener mas orden y controlar mejor tus tiempos \n";}

}

void Psicologia::Autoestima()
{
    cout<<"Si estas en esta seccion, es claro que saldras como todo un ganador \n";
    cout<<"Del 1 al 10 que tanto te gusta como eres? \n";
    cout<<"Del 1 al 10 que tan dificil se te hace expresar tus ideas? \n";
    cout<<"Te dejas influenciar por lo que la mayoria dice? \n Presiona 1 para si. \n Presiona 2 para no. \n";
    Volver_menu();
    cin>>gusto>>expresion>>influencia;
    Gusto_personal(gusto);
    Expresion(expresion);
    Decision(influencia);
}

void Psicologia::Gusto_personal(int gusto)
{
        if(gusto>10){cout<<"Tu autoestima es tan alta como las esperanzas que ella te dio \n\n";}
        else if(gusto<0){cout<<"Tu autoestima es tan baja como lo bajo que cayo tu dignidad \n\n";}
        else if(gusto>=0 && gusto<=4){cout<<"Tienes una autoestima baja, a continuacion te daremos unos consejos para aumentarla \n\n";Consejos_autoestima();}
        else if(gusto>4 && gusto<=7){cout<<"Tu autoestima esta en un nivel medio, aqui tienes unos consejos para incrementarla un poco mas \n\n";Consejos_autoestima();}
        else if(gusto>7 && gusto<=10){cout<<"Tu autoestima es alta, sigue asi campeon \n\n";}
}

void Psicologia::Consejos_autoestima()
{
    cout<<"Te recomendamos: \n";
    cout<<"1. NO te compares con nadie, cada persona es un mundo y tu eres el duenio del tuyo. \n";
    cout<<"\t Centrate en ti, en tu vida.  Todos tenemos algo bueno que aportar, \n";
    cout<<"\t y de nosotros depende encontrar el camino indicado. \n";
    cout<<"2. Ponte metas realistas, que puedas cumplir, recuerda que el fracaso es el camino al exito. \n";
    cout<<"3. Todos tienen defectos, la cosa es aprender a vivir con ellos y valorar lo que si hacemos bien, \n";
    cout<<"\t aceptar nuestros defectos nos haran una persona mas fuerte. \n";
    cout<<"4. Haz criticas a ti mismo de manera positiva, que te sirvan para mejorar y no para estancarte \n";
    cout<<"5. Regalate tiempo, a veces esta es la mejor forma para conocerse a uno mismo, asi que sal y haz lo que mas te gusta \n\n";
}

void Psicologia::Expresion(int expresion)
{
    if(expresion>10){cout<<"Vaya, pareces ser una persona muy sociable y extrovertida \n\n";}
    else if(expresion<0){cout<<"Deberias ayudarte con tus amigos, ellos podrian sacar el leon que llevas dentro \n\n";}
    else if(expresion>=0 && expresion<=5){cout<<"Estas en nivel bajo, pero puedes mejorarlo asistiendo a clases de oratoria \n";
    cout<<"te ayuda a desarrollar muchas tecnicas para hablar en publico, como: \n";
    cout<<"Dominar el miedo ° Mejorar la manera de expresarse ° Utilizar todos los recursos para una buena presentacion  \n\n";}
    else if(expresion>5){cout<<"Tu nivel de expresion es alto, se te hace facil compartir tus ideas, eres una persona decidida. Sigue asi! \n\n";}
}

void Psicologia::Decision(int influencia)
{
    if(influencia==1){cout<<"Esto es malo si llegas a ser la 'sombra' de los demas, seguir siempre a los demas te vuelve dependiente, \n deberias pensar mas en ti, en tus gustos y en que es lo que quieres. Te volveras una persona mas decidida y tendras mas confianza \n\n";}
    else if(influencia==2){cout<<"Eso es lo que hace una persona decidida, defiendes tus ideas pero siempre con empatia y respeto. Te hace mejor persona \n\n";}
}

void Psicologia::Emocion()
{
    do{
    cout<<"Que emociones necesitas reforzar? \n";
    cout<<"1. Alegria \n";
    cout<<"2. Enojo \n";
    cout<<"3. Miedo \n";
    cout<<"4. Tristeza \n";
    cout<<"5. Volver \n";
    cin>>opcion_emocion;
    }while(opcion_emocion<=0 || opcion_emocion>5);
    if(opcion_emocion==1){Alegria();}
    else if(opcion_emocion==2){Enojo();}
    else if(opcion_emocion==3){Miedo();}
    else if(opcion_emocion==4){Tristeza();}
    else if(opcion_emocion==5){Pregunta();}
}

void Psicologia::Alegria()
{
    cout<<"1. Iniciar el dia con una sonrisa es una buena forma de alegrar el dia, a ti y a muchas personas. \n";
    cout<<"2. Podrias ver videos que te causen gracia, darte tiempo para pasarla bien \n";
    cout<<"3. Hacer ejercicio tambien ayuda a despejar la mente y tomar las cosas con un poco mas de humor \n";
    cout<<"4. En las noches dedicate tiempo para pensar en las cosas buenas que te pasaron durante el dia \n";
    Volver_emociones();
}

void Psicologia::Enojo()
{
    cout<<"1. Para mejorar el humor, es bueno hacer deporte, ya que ayuda a disminuir los sentimientos negativos \n";
    cout<<"2. Escucha musica, te aseguro que esto te va a relajar y te llevara a pensar mejor las cosas \n";
    cout<<"3. Dibujar en una hoja puede disminuir el enojo, nos ayuda a descargar toda la furia que tenemos \n";
    cout<<"4. Es mejor no hablar mientras estas enojado, por que puedes herir a personas queridas dejandote llevar por el impulso \n";
    Volver_emociones();
}

void Psicologia::Miedo()
{
    cout<<"1. Superar los miedos suele ser algo complicado, te dejamos algunos consejos: \n";
    cout<<"2. Dejar de huir es el primer paso para superarlo, debes afrontarlo o nunca lo venceras \n";
    cout<<"3. Trata de estudiar tu miedo y los efectos que pueda causar, al entenderlo sera mas facil afrontarlo \n";
    cout<<"4. Cambia tu vision, es decir que veas a los miedos como futuras enseñansas, que te desafian a ir mas alla de ti mismo \n";
    Volver_emociones();
}

void Psicologia::Tristeza()
{
    cout<<"1. Si sientes que ya no puedes mas, lo mejor es llorar, esto te calmara y aliviara el dolor en gran medida \n";
    cout<<"2. Debes aceptar lo ocurrido, deja de luchar y veras que con el tiempo, todo se solucionara \n";
    cout<<"3. No te aisles, debes compartir experiencias con otras personas, esto te despejara de los pensamientos negativos \n";
    cout<<"4. Salir a la calle ayuda a mejorar nuestro animo, tendras un espacio solo para ti, \n";
    cout<<" es mejor salir de tu burbuja que seguir aislado \n";
    Volver_emociones();
}
void Psicologia::Volver_emociones()
{
    cout<<"Presiona v para volver. \n";cin>>volver_emocion;
    if(volver_emocion=='v'){Emocion();}
}

void Psicologia::Volver_menu()
{
    cout<<"Presiona v para volver. \n";cin>>volver_menu;
    if(volver_menu=='v'){Pregunta();}
}

void Psicologia::Volver_ordenar()
{
    cout<<"Presiona v para volver. \n";cin>>volver_orden;
    if(volver_orden=='v'){Ordenar();}
}
