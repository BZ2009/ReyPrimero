#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int opcion = 0;
string respuesta = "violin";
string respuesta2 = "katana";

void iglesia();
void hall();
void nivel1();
void creditos();


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
			nivel1();
			break;
		case 2:
			creditos();
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
	cout << "\n";





}





void iglesia()
{
	cout << "Entrando a la Iglesia\n";
	cout << "Santo Grial del Arzobispo del Rey conseguido\n";
	cout << "Nivel 2 desbloqueado\n";
	cout << "Presione 1 para continuar al nivel 2\n";
	cout << "Presione 2 para Volver al Inicio del Juego\n";
	cout << "Presione 3 para Salir\n";
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		cout << "hola\n";
		break;
	case 2:
		main();
		return;
	}

	



}







void hall()
{
	cout << "Entrando al hall principal\n";
	cout << "En el hall se encuentran 3 cuadros con 3 armas, una maza , una espada recta y una katana\n";
	cout << "Elegir el arma empuñada por los antiguos guerreros Samurai\n";
	cin >> respuesta2;
	if (respuesta2 == "katana")
	{
		cout << "Respuesta correcta, se Abre un pasadizo que lleva al parecer a la Puerta de la Iglesia\n";
		iglesia();
	}
	else (respuesta2);
	{
		cout << "Respuesta incorrecta\n";
		hall();

	}



}








void nivel1()
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
		nivel1();
		break;
	case 2:
		cout << "En la biblioteca se ecuentra un libro en una mesa con un Acertijo\n";
		cout << "Responda la opcion correcta para conseguir la llave de hall principal\n";
		cout << "Tengo un arco y soy de madera pero no una flecha\n";
		cin >> respuesta;
		if (respuesta == "violin")
		{
			cout << "!Enorabuena has conseguido la llave del Hall Principal!\n";
			hall();
		}
		else (respuesta);
		{
			cout << "incorrecto\n";
			nivel1() ;
			
		}
	case 3:
		cout << "La puerta de la iglesia se encuntra bloqueada por el otro lado\n";
		cout << "Escoje otro camino\n";
		nivel1();
	default:
			cout << "elija una opcion correcta\n";
			nivel1();
	




	}












}










void creditos()
{
	cout << "Programado en c++ por Bastian Martin Garcia\n";
	cout << "Profesor a cargo Ricardo De leone\n";
	cin >> opcion;

}












 
	




  