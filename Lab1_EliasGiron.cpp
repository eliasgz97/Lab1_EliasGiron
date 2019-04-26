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
			if(i == numeros.length()-1){
				if(numeros[0] == numeros[i]){
					suma += numeros[i] - '0';
				}
			}
				
	}
	cout << "La suma es: "<<suma<<endl;
}
void captcha2 (string numeros){
	int suma = 0;
	int espacios = numeros.length()/2;
	for(int i = 0; i < numeros.length()/2; i++){
		if(numeros[i] == numeros[espacios+i]){
			suma += (numeros[i] - '0')*(2);

		}
	}
	cout << "La suma es: "<<suma<<endl;
}
void numero_perfecto(int numero){
	int suma = 0;
	string factores = "";
	for(int i = 1; i < numero; i++){
		if (6 % i == 0){
			suma += i;
			factores += std::to_string(i)+", ";
		}
	}
	if (suma == numero){
		cout <<"El numero "<<numero<<" es perfecto"<<" y sus factores son: "<<factores;
	} else {
		cout <<"El numero no es perfecto"<<endl;
	}

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
				       "2. Captcha 2: "<<endl;
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
						cout <<"Ingrese una cadena de numeros: ";
                                                cin >> numeros;
                                                while (numeros.length()%2 != 0){
                                                        cout <<"Ingrese una cadena de numeros par: ";
                                                        cin >> numeros;
                                                }
                                                captcha2(numeros);

					break;
				}
		 	break;
		 	case 2:
				cout << "Ingrese un numero: ";
				cin >> numero;
				while (numero < 0){
					cout << "Ingrese un numero positivo";
					cin >> numero;
				}
				numero_perfecto(numero);

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
