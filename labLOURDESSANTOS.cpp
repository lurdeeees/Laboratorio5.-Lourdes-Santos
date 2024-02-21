#include <iostream>
#include <conio.h>
#include <stdio.h>   //Se declaran las librerias necesarias para el uso correcto del proyecto
using namespace std;
//declaración de variables que son utiles para cada programa. 
int ParImpar(int n);
int Ordenadorp();
int contador (int n);
int Sumadig();
int factorial (int n);
int num1;
int n;
int main(){ //menu principal 
	int opcion;
	system("cls"); //sirve para limpiar la consola 
	do{ //se inicia el ciclo do, while. En el do se declaran el menu que queremos que vaya aparecer
	//en la consola, se usa un switch case para que transfiere el control a una instrucción dentro del cuerpo 
      cout <<"LABORATORIO 5 || Lourdes Santos ||  Ciclos - Funciones \n\n";
      cout <<"1. Suma de numeros pares e impares. \n";
      cout <<"2. Factorial con bucle while. \n";
      cout <<"3. Contador de digitos. \n";
      cout <<"4. Ordenamiento de números (ascendente) \n";
      cout <<"5. Suma de digitos de un numero. \n";
      cout <<"6. Salir del menu\n\n";
      cout << "Ingrese el numero de su opcion que desee: " ;
      cin>>opcion;
		switch(opcion)
		{
			case 1:{
				
				ParImpar(n); //En la opcion 1 se manda a llamar la funcion como cnombre ParImpar(n)
				break;
			}
			case 2:{
				factorial(n); //En la opcion 2 se manda a llamar la funcion como nombre factorial(n)
				break;
			}
			case 3:{
			
				contador(n); //En la opcion 3 se manda a llamar la funcion como nombre contador(n)
				break;
			}
			case 4:{
				Ordenadorp(); //En la opcion 4 se manda a llamar la funcion como nombre Ordenadorp()
				break;
			}
			case 5:{
				Sumadig(); //En la opcion 5 se manda a llamar la funcion como nombre Sumadig()
				break;
			}
			case 6:{
				exit(1); //En la opcion 6, se sale  o termina el programa. 
				break;
			}
			
		}
		system("pause");
		}while(opcion!=6); //la condicion que se evalua es que si la variable opcion sino igual a 6. 
	return 0; //returna 0 parametros 
}
int ParImpar(int n){ //En esta funcion se hace la suma de numeros pares e impares ingresados. 
 	int impar = 0, par = 0, i; //declaración de variables
 	cout << "Laboratorio 5 || Lourdes Santos" << endl;
	cout << "Suma de numeros pares e impares" << endl;
	for(int i = 1; i <= 10; i++ ){ //el ciclo for servira para evaluar que se ejecute si la condicion i sea 1, la condicion sea menor  igual, y su incremento
	
	cout << "Ingrese un numero: " << endl;
	cin >> n;	
	
	if( n % 2 == 0){ //en este if se evalua si el numero ingresado se divida entro de 2 y sea igual a 0, se va a sumar y se incrimenta con el segundo
		par = par + n;
	}else{ // sino 
		impar = impar + n; //enn la variable impar se suma 1 
	}
	
	}	
	cout << "Suma de numeros pares con For:  " << par << endl;
	cout << "Suma de numeros impares con For:  " << impar << endl;
	
	return 0;
 	
 }
int factorial (int n){ //en esta funcion se calcula el factorial de dicho numero ingresado con parametro de la variable n
 	//declarar variables
 	int i=1, factorial = 1;
    cout << "Laboratorio 5 || Lourdes Santos" << endl;
	cout << "Factorial con bucle while" << endl;
	cout << "Ingrese un numero entero para generar el factorial: "; // solicitar  al usuario que ingrese un valor
	cin >> n;
 
 	while(i <=n){ //en el ciclo while si cumple la condicion donde i sea <= al numero ingresado en la variable n
 		
		factorial = factorial * i; // se ejecuta dando que factorial que es 1 se multiplique con el valor que guara i
		i++; // se incrementa
		cout  << factorial << endl;
		
	}
	cout << "El factorial de  " << n << " es " << factorial << endl; //se concatena la variable factorial y n para dar el resultado final
		
	return 0; 
 }
int contador (int n){// en esta funcion de contador tiene como parametros de la varible n
	
	int i = 0; //i la vamos a usar para un contador
	cout << "Laboratorio 5 || Lourdes Santos" << endl;
	cout << "Contador de digitos:" << endl;
	cout << "Ingrese varios digitos-->";
	cin >>n; //captura el valor en la variable n
	do{
		n = n / 10;
		i++; // aqui va incrementando el valor de los dijitos que se ingresaron en n
	}
	while(n > 0); //esta condicion se tiene que cunplir si no al menos se ejecuto 1 vez y luego termina
	cout << "El digito que usted ingreso tiene " << i << " cifras" << endl;
	
	
	return 0;
}
int Ordenadorp(){ // esta funcion se utiliza para el programa de ordenar 3 valores de forma ascendente
	bool intercambio;
	int valor1, valor2, valor3;
	cout<<"Ingrese el primer valor: ";
	cin>> valor1;
	cout<<"Ingrese el segundo valor: ";
	cin>>valor2;
	cout<<"Ingrese el tercer valor: ";
	cin>>valor3;//pedimos el ingreso de los tres numeros y los guardamos en las variables respectivas
	int arreglo []= {valor1,valor2,valor3}; 
	int n= sizeof(arreglo)/sizeof(arreglo[0]); //declaracion de variables a utilizar en el diclo do while
	do{
		intercambio=false; 
		for(int i=0;i<n-1;i++){ 
			if(arreglo[i]>arreglo[i+1]){ // en el if su condicion es que si arreglo i sea mayor a arreglo incremento de +1 
				int temp=arreglo [i];
				arreglo [i]= arreglo[i+1]; // si cumple con la condicion en arreglo se va sumando 1 a la variable i
				arreglo[i+1]=temp;
				intercambio=true; // cuando se realiza las operaciones en el for y el if la variable boolena intercambio es verdadera
			}
		}
	}while(intercambio==true); //si la condicion se cunpla intercambio será verdadero 
	cout<<"Su ordenamiento de forma ascendente es: "<<endl;
	for(int x=0;x<n;x++){
		cout<<arreglo[x]<<endl;
	}
}
int Sumadig(){ //en esta funcion hacemos la suma de los digitos ingresados 
		cout<<"Ingrese un numero entero: ";
		cin>>num1; //se guarda el valor en la variable num1
		int suma=0; //se inicia con una variable igual a 0 
		while(num1>0){ // el while no sabemos cuantas veces va a repetir si el num1 sea mayor a 0 si es asi
			suma= suma + num1%10; // la variable suma se va sumando con num1 dividido con el numero 10
		    num1=num1/10;
		}
	cout<<"La suma de los digitos es: "<<suma<<endl; // se concatena la variable suma para dar el resultado final
}