//CORREOS.CPP
#include <iostream>
#include <string>
using namespace std;

struct correos{
	string remitente, destinatario;
	char tipo;
	int peso;
	char modalidad;
};

int DineroPagar(char, int, char);

int main(){
	
	//bienvenida
	cout<<"|| BIENVENIDOS AL SERVICIO DE CORREOS ||\n\n";
	struct correos Cliente[5];
	int n;
	int total;
	
	
	
	
	//pedir numero de pedidos
	cout<<"Ingrese el numero de pedidos (no mayor a 5): ";
	cin>>n;
	
	//pedir datos
	for(int i=0; i<n; i++){
		cout<<"Ingrese el remitente del pedido "<<i+1<<": ";
		cin.ignore();
		getline(cin, Cliente[i].remitente);
		
		cout<<"Ingrese el destinatario "<<i+1<<": ";
		cin.ignore();
		getline(cin, Cliente[i].destinatario);
		
		cout<<"Ingrese el tipo de correo (C para carta / P para paquete): ";
		cin>>Cliente[i].tipo;
		
		if(Cliente[i].tipo=='P'){
			cout<<"Ingrese el peso: ";
			cin>>Cliente[i].peso;
			if(Cliente[i].peso==0){
				cout<<"Error no puede ser cero intente de nuevo\n";
				cout<<"Ingrese el peso: ";
				cin>>Cliente[i].peso;
			}
		}
		
		
		cout<<"Ingrese la modalidad (U para urgente / N para Nacional / I para intenacional): ";
		cin>>Cliente[i].modalidad;
		
		//llamar la funcion
		
		total+= DineroPagar(Cliente[i].tipo, Cliente[i].peso, Cliente[i].modalidad);
	}
	
	cout<<"\nEl total a pagar es: ";
	cout<<total;
	
	
	
	cout<<"\nMUCHAS GRACIAS POR SU COMPRA! VUELVA PRONTO :D ";
	

}

int DineroPagar(char tipo, int peso, char modalidad){
	
	float TotalRetornar=0;
	
	//recorriendo arreglo modalidad
	if(tipo=='C'){
		if(modalidad=='U'){
			TotalRetornar+=3;
			
		}else if(modalidad=='N'){
			TotalRetornar+=1;
			
		}else if(modalidad=='I'){
			TotalRetornar+=2;
		}
	}else if(tipo=='P'){
		if(peso<=500 && modalidad =='U'){
				TotalRetornar+=10;
			
			}else if(peso>=500 && modalidad =='U'){
				TotalRetornar+=15;
			
			}else if(modalidad =='N'){
				TotalRetornar+=5;
			
			}else if(peso<=500 && modalidad =='I'){
				TotalRetornar+=5;
			
			}else{
				TotalRetornar+=10;
			}
	}
	
	return TotalRetornar;
}
	
	
