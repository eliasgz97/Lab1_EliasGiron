#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void captcha (string numeros){
	int suma = 0;
	for(int i = 0; i < numeros.length()-1; i++){
			if(numeros[i] == numeros[i+1]){
				suma += numeros[i] - '0';
			}
				
	}
	cout << "La suma es: "<<suma<<endl;
}

int main(){
	char respuesta = 'S';
	while (respuesta == 'S' || respuesta == 's'){
		int opcion = 0, opcion_captcha = 0;
		cout << "1. Ejercicio 1)\n"
		"2. Ejercicio 2) \n"
		"3. Ejercicio 3) \n"
		"4. Ingrese una opcion: "<<endl;
	 	cin >> opcion;
		string numeros, caracteres;
		int numero = 0;

	 	switch (opcion){
			case 1:
				cout <<"Ingrese una opcion \n"
				       "1. Captcha 1\n"
				       "2. Captcha 2";
				cin >> opcion_captcha;
				switch (opcion_captcha){
					case 1:
						cout <<"Ingrese una cadena de numeros: ";
						cin >> numeros;
						while (numeros.length()%2 != 0){
							cout <<"Ingrese una cadena de numeros par: ";
							cin >> numeros;
						}
						captcha(numeros);
					break;
					case 2:
						
					break;
				}
		 	break;
		 	case 2:
				cout << "Ingrese un numero: ";
				cin >> numero;

		 	break;
		 	case 3:
				cout <<"Ingrese una cadena: "<<endl;
				cin >> caracteres;
		 	break;

	 	}
		cout << "Desea volver[s/n] :"<<endl;
		cin >> respuesta;
	}
     		
}