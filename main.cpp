#include <iostream>

 using namespace std;

int main(int argc, char** argv) {
	int n1, n2, suma;
	cout<<"Ingrese primer numero: ";
	cin>>n1;
    cout<<"Ingrese segundo numero: ";
	cin>>n2;
	suma = n1 + n2;
	cout<<"la suma de "<<n1<<" +  "<<n2<<" es: "<<suma<<endl;
	
	int resta;
	cout<<"Ingrese primer numero: ";
	cin>>n1;
    cout<<"Ingrese segundo numero: ";
	cin>>n2;
	resta = n1 - n2;
	cout<<"la resta de "<<n1<<" -  "<<n2<<" es: "<<resta<<endl;
	
	int multiplicacion;
	cout<<"Ingrese primer numero: ";
	cin>>n1;
    cout<<"Ingrese segundo numero: ";
	cin>>n2;
	multiplicacion = n1 * n2;
	cout<<"la multiplicacion de "<<n1<<" *  "<<n2<<" es: "<<multiplicacion<<endl;

	int division;
	cout<<"Ingrese primer numero: ";
	cin>>n1;
    cout<<"Ingrese segundo numero: ";
	cin>>n2;
	division = n1 / n2;
	cout<<"la division de "<<n1<<" /  "<<n2<<" es: "<<division<<endl;

	
	return 0;
}
