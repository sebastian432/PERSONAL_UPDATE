#include "Mejora.h"
#include <string>
#include <iostream>
using namespace std;


/*
void Mejora::Mostrar_mensaje()
{
    string nombre;
    cout<<"Como te llamas? ";cin>>nombre;
    cout<<" Hola  "<<nombre<<"!"<<endl;
    cout<<" Bienvenido a PERSONAL UPDATE "<<endl;
    cout<<endl;
}
*/
Mejora::Mejora()
{
    cout<<"BIENVENIDO, elige el aspecto fisico que quieres mejorar"<<endl;
}

void Mejora::Fisica()
{
    int aspecto_f;

    do
    {
    cout<<"Elige una opcion: \n";
    cout<<"1. Abdominales \n\n";
    cout<<"2. Piernas \n\n";
    cout<<"3. Brazos \n\n";
    cout<<"4. Espalda \n\n";
    cin>>aspecto_f;
    }while(aspecto_f>4 || aspecto_f<=0);

    if(aspecto_f==1)
    {
        Abdominales();
    }
    else if(aspecto_f==2)
    {
        Piernas();
    }
    else if(aspecto_f==3)
    {
        Brazos();
    }
    else if(aspecto_f==4)
    {
        Espalda();
    }
}


void Mejora::Abdominales()
{

    int opcion_abdominales;
        cout<<"Abdominales: \n\n ";
        cout<<"\t Conseguir un abdomen fuerte y tonificado es lo que mas \n\n";
        cout<<"\t nos cuesta y a la gran mayoria de nosotros se nos escapan \n\n";
        cout<<"\t algunos puntos clave que siempre hay que tener en cuenta \n\n";
        cout<<"\t a la hora de trabajar esta parte del cuerpo. \n\n";
        cout<<"\t Por ello en esta ocasion nos vamos a detener en algunos \n\n";
        cout<<"\t aspectos a tener en cuenta a la hora de conseguir un \n\n";
        cout<<"\t vientre en perfectas condiciones. \n\n";

        do  //instruccion para controlar error al no ingresar un valor dentro del rango
        {
        cout<<"Te recomendamos los siguientes ejercicios, elige con cual quisieras iniciar: \n";

        cout<<"1. LEVANTAMINETO DE PIERNAS. \n\n";
        cout<<"2. BURPEE. \n\n";
        cout<<"3. ABDOMINALES CON LEVANTAMINETO DE PIERNAS. \n\n";
        cout<<"4. ESCAlADAS. \n\n";
        cout<<"5. ABDOMINALES CRUZADAS. \n\n";
        cout<<"6. ABDOMINALES CON BALON. \n\n";
        cout<<"7. SENTADILLA CON SALTO. \n\n";
        cout<<"8. VOLVER \n\n";
        cin>>opcion_abdominales;
        }while(opcion_abdominales>8 || opcion_abdominales<=0);

        if(opcion_abdominales==1)
        {
            Abdominales1();
        }
        else if(opcion_abdominales==2)
        {
            Abdominales2();
        }
        else if(opcion_abdominales==3)
        {
            Abdominales3();
        }
        else if(opcion_abdominales==4)
        {
            Abdominales4();
        }
        else if(opcion_abdominales==5)
        {
            Abdominales5();
        }
        else if(opcion_abdominales==6)
        {
            Abdominales6();
        }
        else if(opcion_abdominales==7)
        {
            Abdominales7();
        }
        else if(opcion_abdominales==8)
        {
            Fisica();
        }
}

void Mejora::Abdominales1()
{

            cout<<"\t Usted eligio Levantamineto de piernas \n\n";
            cout<<"\t Este ejercicio lo puedes hacer en la silla romana, \n\n";
            cout<<"\t apoyandote en unas barras paralelas, \n\n";
            cout<<"\t colgada de algun soporte o recostada en el piso \n\n";
            cout<<"\t y levantando las piernas rectas hacia arriba. \n\n";
            cout<<"\t Manten las piernas rectas, rodillas y pies juntos \n\n";
            cout<<"\t y levanta las piernas tanto como puedas, \n\n";
            cout<<"\t sosten un momento y regresa a la posicion inicial \n\n";

            Regresa_Abdominales();


}
void Mejora::Abdominales2()
{
            cout<<"\t Usted eligio Burpee \n\n";
            cout<<"\t Primero colócate de pie, luego apoyando las manos en el suelo, \n\n";
            cout<<"\t estira las piernas con un impulso para terminar \n\n";
            cout<<"\t en la posicion para realizar una flexion, \n\n";
            cout<<"\t y regresa a la posicion inicial de flexion, \n\n";
            cout<<"\t coloca las piernas cerca de las manos y \n\n";
            cout<<"\t levantate de un salto mientras estiras los brazos al techo. \n\n";

            Regresa_Abdominales();
}

void Mejora::Abdominales3()
{
            cout<<"\t Usted eligio Abdominales con levantamiento de piernas \n\n";
            cout<<"\t Acostada bocarriba con las manos extendidas, \n\n";
            cout<<"\t eleva al mismo tiempo las piernas y \n\n";
            cout<<"\t los brazos hacia arriba y sosten un momento. \n\n";
            cout<<"\t Vuelve a la posición inicial. \n\n";

            Regresa_Abdominales();
}

void Mejora::Abdominales4()
{
            cout<<"\t Usted eligio Escaladas \n\n";
            cout<<"\t A partir de la posición de plancha, \n\n";
            cout<<"\t jalas un pie hacia el pecho, regresas a \n\n";
            cout<<"\t la posicion inicial y repites con el otro, \n\n";
            cout<<"\t como si estuvieras escalando una montaña. \n\n";

            Regresa_Abdominales();
}

void Mejora::Abdominales5()
{
            cout<<"\t Usted eligio Abdominales cruzadas \n\n";
            cout<<"\t Acostada en el suelo bocarriba y \n\n";
            cout<<"\t con las piernas flexionadas, coloca las manos \n\n";
            cout<<"\t detras de la nuca, levanta el tronco y \n\n";
            cout<<"\t rotalo de manera simultanea con la rodilla opuesta, \n\n";
            cout<<"\t acercala al pecho y manten la posicion un par de segundos. \n\n";
            cout<<"\t Vuelve a la posicion inicial y repite con la otra pierna. \n\n";

            Regresa_Abdominales();
}

void Mejora::Abdominales6()
{
            cout<<"\t Usted eligio Abdominales con balon \n\n";
            cout<<"\t Recuestate sobre tus lumbares en la pelota y \n\n";
            cout<<"\t coloca las manos en la nuca. \n\n";
            cout<<"\t Eleva el tronco hacia arriba y \n\n";
            cout<<"\t regresa a la posición inicial. \n\n";

            Regresa_Abdominales();
}

void Mejora::Abdominales7()
{
            cout<<"\t Usted eligio Sentadilla con salto \n\n";
            cout<<"\t Parate recta y flexiona ligeramente las rodillas. \n\n";
            cout<<"\t Agachate con las caderas hacia atras, \n\n";
            cout<<"\t con la espalda completamente recta y \n\n";
            cout<<"\t la cabeza hacia el frente. Salta y \n\n";
            cout<<"\t trata de subir las manos lo mas alto que puedas. \n\n";

            Regresa_Abdominales();
}



void Mejora::Piernas()
{
    int opcion_piernas;
        cout<<"\t Las piernas son parte esencial de cualquier tipo de actividad física. \n\n";
        cout<<"\t Mantener unas piernas en forma esta al alcance de todos. \n\n";
        cout<<"\t Todo es cuestion de realizar unos sencillos ejercicios centrados en \n\n";
        cout<<"\t los diferentes grupos musculares que forman parte del tren inferior, \n\n";
        cout<<"\t sin necesidad de salir de casa ni utilizar ningun aparato. \n\n";



        do

        {
        cout<<"Te recomendamos los siguientes ejercicios, elige con cual quisieras iniciar: \n";

        cout<<"1. SENTADILLAS. \n\n";
        cout<<"2. ZANCADAS ALTERNAS. \n\n";
        cout<<"3. BURPEES. \n\n";
        cout<<"4. PUENTE. \n\n";
        cout<<"5. GEMELOS. \n\n";
        cout<<"6. VOLVER \n\n";
        cin>>opcion_piernas;
        }while(opcion_piernas>6 || opcion_piernas<=0);

        if(opcion_piernas==1)
        {
            Piernas1();
        }

        else if(opcion_piernas==2)
        {
            Piernas2();
        }

        else if(opcion_piernas==3)
        {
            Piernas3();
        }

        else if(opcion_piernas==4)
        {
            Piernas4();
        }

        else if(opcion_piernas==5)
        {
            Piernas5();
        }

        else if(opcion_piernas==6)
        {
            Fisica();
        }

}

void Mejora::Piernas1()
{
                    cout<<"\t Usted eligio sentadillas \n\n";
                    cout<<"\t Ponte de pie con las piernas separadas, \n\n";
                    cout<<"\t situando cada pie en paralelo con los hombros. \n\n";
                    cout<<"\t Con la mirada al frente, flexiona las piernas, \n\n";
                    cout<<"\t descendiendo los glúteos en direccion al suelo, \n\n";
                    cout<<"\t manteniendo sin levantar las plantas de los pies. \n\n";
                    cout<<"\t Mientras desciendas, la espalda debe estar recta y las rodillas \n\n";
                    cout<<"\t y la cadera flexionadas. \n\n";

                    Regresa_Piernas();
}

void Mejora::Piernas2()
{
                    cout<<"\t Usted eligio Zancadas Alternas \n\n";
                    cout<<"\t La posicion inicial es en cuclillas y con las manos \n\n";
                    cout<<"\t posicionadas en la cadera. \n\n";
                    cout<<"\t Adelanta una pierna y la otra, alternativamente. \n\n";
                    cout<<"\t Ten en cuenta que la pierna que se encuentre levantada \n\n";
                    cout<<"\t no debe superar un angulo de 90 grados. \n\n";

                    Regresa_Piernas();
}

void Mejora::Piernas3()
{
                    cout<<"\t Usted eligio Burpees \n\n";
                    cout<<"\t Es un movimiento en el que participan una gran cantidad \n\n";
                    cout<<"\t de musculos como, por ejemplo, los gluteos y los cuadriceps. \n\n";
                    cout<<"\t El ejercicio consiste, basicamente, en colocarnos de cuclillas, \n\n";
                    cout<<"\t con las manos apoyadas en el suelo, y, desde esa posición, \n\n";
                    cout<<"\t estirar las piernas hacia atras y, seguidamente, \n\n";
                    cout<<"\t volver a la posicion inicial. \n\n";

                    Regresa_Piernas();
}

void Mejora::Piernas4()
{
                    cout<<"\t Usted eligio Puente \n\n";
                    cout<<"\t Tumbate boca arriba con las piernas flexionadas. \n\n";
                    cout<<"\t A continuacion, levanta la cadera y permanecer \n\n";
                    cout<<"\t inmovil durante 20 segundos. \n\n";

                    Regresa_Piernas();
}

void Mejora::Piernas5()
{
                    cout<<"\t Usted eligio Gemelos(Pantorrillas) \n\n";
                    cout<<"\t Situate de puntillas y \n\n";
                    cout<<"\t permanece estatico durante 20 segundos. \n\n";
                    cout<<"\t Descansa durante un minuto \n\n";
                    cout<<"\t y repite el ejercicio 3 veces. \n\n";

                    Regresa_Piernas();
}

void Mejora::Brazos()
{
   int opcion_brazos;
                cout<<"\t lucir unos brazos tonificados \n\n";
                cout<<"\t y bonitos requiere una cierta constancia y dedicacion. \n\n";
                cout<<"\t ¡Pon en practica esta rutina de ejercicios \n\n";
                cout<<"\t con mancuernas para hacer en casa! ¡Veras los resultados! \n\n";

        do
        {
        cout<<"Escoge entre las opciones que tenemos para ejercitar tus brazos \n\n";

        cout<<"1. FLEXIONES DE PECHO. \n\n";
        cout<<"2. FLEXIONES DE TRICEPS. \n\n";
        cout<<"3. CURL DE BICEPS. \n\n";
        cout<<"4. ELEVACIONES LATERALES PARA LOS HOMBROS. \n\n";
        cout<<"5. DIPS DE TRICEPS. \n\n";
        cout<<"6. PRESS DE HOMBROS. \n\n";
        cout<<"7. EXTENSION DE TRICEPS. \n\n";
        cout<<"8. VOLVER \n\n";
        cin>>opcion_brazos;
        }while(opcion_brazos>8 || opcion_brazos<=0);

        if(opcion_brazos==1)
        {
            Brazos1();
        }

        else if(opcion_brazos==2)
        {
            Brazos2();
        }

        else if(opcion_brazos==3)
        {
            Brazos3();
        }

        else if(opcion_brazos==4)
        {
            Brazos4();
        }

        else if(opcion_brazos==5)
        {
            Brazos5();
        }

        else if(opcion_brazos==6)
        {
            Brazos6();
        }

        else if(opcion_brazos==7)
        {
            Brazos7();
        }

        else if(opcion_brazos==8)
        {
            Fisica();
        }
}

void Mejora::Brazos1()
{
                        cout<<"\t Usted eligio Flexiones de pecho \n\n";
                        cout<<"\t Tumbate boca abajo y coloca las manos a una anchura \n\n";
                        cout<<"\t un poco mayor que la de tus hombros. Desde ahi, \n\n";
                        cout<<"\t empuja el suelo para hacer que tu cuerpo se eleve, \n\n";
                        cout<<"\t y vuelve a bajar despacio. \n\n";

                        Regresa_Brazos();
}
void Mejora::Brazos2()
{
                        cout<<"\t Usted eligio Flexiones de triceps \n\n";
                        cout<<"\t Coloca tus manos directamente debajo de tus hombros \n\n";
                        cout<<"\t y asegurate de que tus brazos estan bien pegados al \n\n";
                        cout<<"\t cuerpo y de que tus codos apuntan hacia atras. \n\n";
                        cout<<"\t Desde esta posicion, baja hasta el suelo y vuelve a subir. \n\n";

                        Regresa_Brazos();
}

void Mejora::Brazos3()
{
                        cout<<"\t Usted eligio Curl de biceps \n\n";
                        cout<<"\t Colocate de pie con las rodillas ligeramente flexionadas \n\n";
                        cout<<"\t y toma en cada mano una mancuerna. Si no tienes mancuernas, \n\n";
                        cout<<"\t puedes utilizar paquetes de legumbres o \n\n";
                        cout<<"\t rellenar unas botellas con tierra. \n\n";
                        cout<<"\t Dobla tus codos mientras acercas tus muñecas a \n\n";
                        cout<<"\t los hombros, y baja despacio. \n\n";

                        Regresa_Brazos();
}

void Mejora::Brazos4()
{
                        cout<<"\t Usted eligio Elevaciones laterales para los hombros \n\n";
                        cout<<"\t Colocate de pie con las rodillas ligeramente \n\n";
                        cout<<"\t flexionadas y una mancuerna (o botella) en cada mano. \n\n";
                        cout<<"\t Elevamos los brazos lateralmente hasta que nuestro hombro, \n\n";
                        cout<<"\t codo y muñeca estén alineados \n\n";
                        cout<<"\t y se encuentren paralelos al suelo \n\n";

                        Regresa_Brazos();
}

void Mejora::Brazos5()
{
                        cout<<"\t Usted eligio Dips de triceps \n\n";
                        cout<<"\t Nos colocamos de espaldas a la silla \n\n";
                        cout<<"\t y apoyamos las manos en el asiento, \n\n";
                        cout<<"\t de modo que los dedos de las manos miren hacia nosotros. \n\n";
                        cout<<"\t Desde ahi, flexionamos los codos para bajar con la \n\n";
                        cout<<"\t espalda erguida, y empujamos la silla hacia abajo \n\n";
                        cout<<"\t para volver a subir. \n\n";

                        Regresa_Brazos();
}

void Mejora::Brazos6()
{
                        cout<<"\t Usted eligio Press de hombros \n\n";
                        cout<<"\t Colocate de pie con las rodillas ligeramente flexionadas \n\n";
                        cout<<"\t (tambien se puede realizar sentada en una silla) \n\n";
                        cout<<"\t coge una mancuerna o botella en cada mano y \n\n";
                        cout<<"\t colocalas a la altura de las orejas. \n\n";
                        cout<<"\t Desde ahi, empujalas hacia el techo por encima \n\n";
                        cout<<"\t de tu cabeza hasta estirar los brazos y \n\n";
                        cout<<"\t vuelve a la posición inicial. \n\n";

                        Regresa_Brazos();
}

void Mejora::Brazos7()
{
                        cout<<"\t Usted eligio Extension de triceps \n\n";
                        cout<<"\t Subimos ambos brazos hacia el techo, \n\n";
                        cout<<"\t colocando la mancuerna por encima de nuestra cabeza, \n\n";
                        cout<<"\t y desde ahi, flexionamos los codos para que llegue \n\n";
                        cout<<"\t hasta la altura de nuestra nuca. \n\n";
                        cout<<"\t Volvemos a estirar los codos \n\n";
                        cout<<"\t para regresar a la posicion inicial. \n\n";

                        Regresa_Brazos();
}

void Mejora::Espalda()
{

     int opcion_espalda;
                cout<<"\t El trabajo de la espalda merece especial atencion \n\n";
                cout<<"\t en nuestro entrenamiento, pues mas alla de la \n\n";
                cout<<"\t estetica de su fortalecimiento depende el riesgo \n\n";
                cout<<"\t de sufrir lesiones, nuestra postura y mas. \n\n";
                cout<<"\t Por ello, si buscas una espalda fuerte y ancha, \n\n";
                cout<<"\t te mostramos los ejercicios que no pueden faltar en tu rutina. \n\n";

        do
        {
        cout<<"Escoge entre las opciones que tenemos para ejercitar tu espalda: \n\n";

        cout<<"1. DOMINADAS. \n\n";
        cout<<"2. HIPER EXTENSIONES. \n\n";
        cout<<"3. PESO MUERTO. \n\n";
        cout<<"4. PULLOVER. \n\n";
        cout<<"5. VOLVER \n\n";
        cin>>opcion_espalda;
        }while(opcion_espalda>5 || opcion_espalda<=0);

        if(opcion_espalda==1)
        {
            Espalda1();
        }
        else if(opcion_espalda==2)
        {
            Espalda2();
        }
        else if(opcion_espalda==3)
        {
            Espalda3();
        }
        else if(opcion_espalda==4)
        {
            Espalda4();
        }

        else if(opcion_espalda==5)
        {
            Fisica();
        }
}


void Mejora::Espalda1()
{
                    cout<<"\t Elegiste hacer Dominadas \n\n";
                    cout<<"\t INSTRUCCIONES: \n\n";
                    cout<<"\t Empieza colgado en la barra con los brazos estirados \n\n";
                    cout<<"\t y con una distancia corta entre las manos. \n\n";
                    cout<<"\t Eleva todo el cuerpo recto hasta los hombros \n\n";
                    cout<<"\t hasta colocarlo en posición paralela al suelo \n\n";
                    cout<<"\t y perpendicular a la posición de tus brazos. \n\n";
                    cout<<"\t vuelve a la posicion inicial y realiza otra repeticion \n\n";

                    Regresa_Espalda();
}

void Mejora::Espalda2()
{
                    cout<<"\t Elegiste hacer hiper extensiones \n\n";
                    cout<<"\t Requiere de la elevación contra la gravedad, \n\n";
                    cout<<"\t del tronco mediante la fuerza de la zona lumbar \n\n";
                    cout<<"\t y resulta efectivo para solicitar intensamente \n\n";
                    cout<<"\t los musculos situados en la region inferior de nuestra espalda. \n\n";

                    Regresa_Espalda();
}

void Mejora::Espalda3()
{
                    cout<<"\t Elegiste hacer peso muerto \n\n";
                    cout<<"\t Debemos cargar una barra y colocarnos tras esta para despues \n\n";
                    cout<<"\t inclinar el torso erguido hacia adelante y \n\n";
                    cout<<"\t levantar la misma mediante la contraccion \n\n";
                    cout<<"\t de musculos de la parte posterior de nuestro cuerpo \n\n";

                    Regresa_Espalda();
}

void Mejora::Espalda4()
{
                    cout<<"\t Elegiste hacer pullover \n\n";
                    cout<<"\t Se realiza en un banco, aunque tambien podriamos \n\n";
                    cout<<"\t ejecutarlo tumbados en el suelo, con una mancuerna \n\n";
                    cout<<"\t pesada que debemos llevar hacia atras del cuerpo \n\n";
                    cout<<"\t y regresar a nuestro pecho, con los brazos \n\n";
                    cout<<"\t ligeramente extendidos, para trabajar espalda \n\n";
                    cout<<"\t y pectorales al mismo tiempo. \n\n";

                    Regresa_Espalda();
}

void Mejora::Regresa_Abdominales()
{
    cout<<" Para regresar presiona (v)."<<endl;
            cin>>volver;
            if(volver=='v')
            {
                Abdominales();
            }
}

void Mejora::Regresa_Piernas()
{
    cout<<" Para regresar presiona (v)."<<endl;
            cin>>volver;
            if(volver=='v')
            {
                Piernas();
            }
}

void Mejora::Regresa_Brazos()
{
    cout<<" Para regresar presiona (v)."<<endl;
            cin>>volver;
            if(volver=='v')
            {
                Brazos();
            }
}

void Mejora::Regresa_Espalda()
{
    cout<<" Para regresar presiona (v)."<<endl;
            cin>>volver;
            if(volver=='v')
            {
                Espalda();
            }
}
