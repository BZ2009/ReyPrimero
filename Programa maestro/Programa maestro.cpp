#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
//variables globales
int opcion = 0;
int pregunta = 476;
string pregunta2 = "biblioteca";
string respuesta = "violin";
string respuesta2 = "katana";
//arrays
string mochila[5];
//Declaracion de funciones
void Iglesia();
void Hall();
void Nivel1();
void Creditos();
void Mochila();
void Nivel2();
void Pregunta();
void Pregunta2();
void Pregunta3();


int main()
{
	while (true)
	{
		cout << "Juego de desiciones por Niveles\n";
		cout << "Precione la tecla 1 para comenzar\n";
		cout << "Precione la tecla 2 para ver los creditos\n";
		cout << "Precione la tecla 3 para salir\n";

		cin >> opcion;
		switch (opcion)
		{
		case 1:
			cout << "Bienvenido al Nivel 1\n";
			Nivel1();
			break;
		case 2:
			Creditos();
			break;
		case 3:
			cout << "saliendo del menu\n";
			return 0;
		default:
			cout << "opcion no valida\n";

		}



	}




	return 0;
}





void Nivel2()
{
	cout << "Entrando a la Sala del Trono Rojo\n";
	cout << "En la puerta del Trono rojo se encuentra un misterioso personaje\n";
	cout << "Este personaje nos dice que para poder pasar se necesitan constestar 3 preguntas\n";
	cout << "Pulse 1 para escuchar la primera pregunta\n";
	cin >> opcion;
	Pregunta();







}





void Iglesia()
{
	cout << "Entrando a la Iglesia\n";
	cout << "Santo Grial del Arzobispo del Rey conseguido\n";
	cout << "Nivel 2 desbloqueado\n";
	cout << "Presione 1 para continuar al nivel 2\n";
	cout << "Presione 2 para Volver al Inicio del Juego\n";
	cout << "Presione 3 para entrar al inventario\n";
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		Nivel2();
		break;
	case 2:
		main();
		return;
	case 3:
		Mochila();
	}

	



}







void Hall()
{
	cout << "Entrando al hall principal\n";
	cout << "En el hall se encuentran 3 cuadros con 3 armas, una maza , una espada recta y una katana\n";
	cout << "Elegir el arma empuñada por los antiguos guerreros Samurai\n";
	cin >> respuesta2;
	if (respuesta2 == "katana")
	{
		cout << "Respuesta correcta, se Abre un pasadizo que lleva al parecer a la Puerta de la Iglesia\n";
		Iglesia();
	}
	else (respuesta2);
	{
		cout << "Respuesta incorrecta\n";
		Hall();

	}



}








void Nivel1()
{
	cout << "Entrando al castillo del Rey\n";
	cout << "Escojer entre los 3 caminos\n";
	cout << "Presione la tecla 1 para elegir el camino del hall principal\n";
	cout << "Presione la tecla 2 para elegir el camino de la biblioteca\n";
	cout << "Presione la tecla 3 para elegir el camino de la iglesia\n";
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		cout << "La puerta del hall principal esta cerrada , se necesita una llave\n";
		cout << "Escoje otro camino\n";
		Nivel1();
		break;
	case 2:
		cout << "En la biblioteca se ecuentra un libro en una mesa con un Acertijo\n";
		cout << "Responda la opcion correcta para conseguir la llave de hall principal\n";
		cout << "Tengo un arco y soy de madera pero no una flecha\n";
		cin >> respuesta;
		if (respuesta == "violin")
		{
			cout << "!Enorabuena has conseguido la llave del Hall Principal!\n";
			Hall();
		}
		else (respuesta);
		{
			cout << "incorrecto\n";
			Nivel1() ;
			
		}
	case 3:
		cout << "La puerta de la iglesia se encuntra bloqueada por el otro lado\n";
		cout << "Escoje otro camino\n";
		Nivel1();
	default:
			cout << "elija una opcion correcta\n";
			Nivel1();
	




	}












}










void Creditos()
{
	cout << "Programado en c++ por Bastian Martin Garcia\n";
	cout << "Profesor a cargo Ricardo De leone\n";
	cin >> opcion;

}


void Mochila()
{
	mochila[0] = "Santo Grial\n";
	mochila[1] = "Llave del trono Rojo\n";
	mochila[2] = "Libro de los secretos\n";
	mochila[3] = "Espada dorada\n";
	mochila[4] = "Losa de titanita\n";

	cout << "Abriendo inventario\n";
	cout << "Items conseguidos hasta el momento\n";
	cout << mochila[0];
	cin >> opcion;
	cout << "Presione 1 para seguir al nivel2\n";
	cin >> opcion;
	Nivel2();


	


}


void Pregunta()
{
	cout << "¿En que año fue la caida del imperio Romano?\n";
	cin >> pregunta;
	if (pregunta == 476)
	{
		cout << "Muy Bien\n";
		cout << "Sigiente pregunta\n";
		Pregunta2();


	}

	else(pregunta);
	{
		cout << "Incorrecto\n";
		Nivel2();
		

	}


}


void Pregunta2()
{
	cout << "¿Como se le llama al establecimiento donde se almacenan libros?\n";
	cin >> pregunta2;
	if (pregunta2 == "biblioteca")
	{
		cout << "Muy bien\n";
		cout << "Sigiente Pregunta\n";
		Pregunta3();

	}

	else(pregunta2);
	{
		cout << "Incorrecto\n";
		Nivel2();

	}
}

void Pregunta3()
{
	cout << "Ultima pregunta si contestas bien te dare acceso a la sala del trono Rojo\n";
	cout << "¿\n";



}






 
	




  