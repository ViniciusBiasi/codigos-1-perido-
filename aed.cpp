#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main (){
	
	int op,i,l,pessoas=0,pessoa=0; 
	float soma=0, som2=0,v; 
	string ma[10][10], triz[10][10]; 
	string tipo; 
	
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite o valor do Ingresso : " << endl;
	cin >> v; 
	
	for(i=0;i<10;i++){ 
	
		for(l=0;l<10;l++){
	
			ma[i][l] = " O ";
		}
	}
	
	for(i=0;i<10;i++){
	
		for(l=0;l<10;l++){
	
			triz[i][l] = " O ";
		}
	}	
	
	while(op!=4){
	
	cout << endl;
	cout << endl;
	cout << "______________MENU____________"<<endl;
	cout << "1 - Mostrar assentos" << endl;
	cout << "2 - Vender Ingressos" << endl;
	cout << "3 - Total arrecadado por seção" <<endl;
	cout << "4 - Sair" << endl;
	cin >> op;
	
	cout << endl;
	cout << endl;
	
	if(op == 1){ 
		
		cout << "Seção 18:00 " <<endl ;
		
		cout << endl;
		cout << endl;
		
		for(i=0;i<10;i++){
		
			for(l=0;l<10;l++){
		
				cout <<ma[i][l] ;
				
				if(l==9) 
				{
					cout << endl ;	
				}
				
			}
		}
		
		cout << endl;
		cout << endl;
		
		cout << "Seção 21:00 " << endl; 
		
		cout << endl;
		cout << endl;
		
		for(i=0;i<10;i++){
		
			for(l=0;l<10;l++){
		
				cout << triz[i][l] ;
				
				if(l==9) 
				{
					cout << endl ;	
				}
				
			}
		}
		
	}
	
	if(op == 2){
		
		cout << "1 - Seção 18:00 " << endl;
		cout << "2 - Seção 21:00 " << endl;
		cin >> op;
		cout << endl;
		cout << endl;
		if(op == 1){
	
			cout << "Digite a coluna : " << endl;
			cin >> i;
			cout << "Digite a linha : " << endl;
			cin >> l;			
			ma[l][i] = " X "; 
			
			cout << "Digite I para INTEIRA e M para MEIA " << endl;
			cin >> tipo ; 
			
			if(tipo == "I"){
				soma =  soma + v; 
			}
			else{
				soma = soma + (v/2); 
			}
			pessoa++; 
			
		}
		
			if(op == 2){
	
			cout << "Digite a coluna : " << endl;
			cin >> i;
			cout << "Digite a linha : " << endl;
			cin >> l;			
			triz[l][i] = "X"; 
			
			cout << "Digite I para INTEIRA e M para MEIA " << endl;
			cin >> tipo ; 
			
			if(tipo == "I"){
				som2 =  som2 + v; 
			}
			else{
				som2 = som2 + (v/2); 
			}
			pessoas++; 
			
		}
		
	}
	
	if(op == 3){
		
		cout << endl;
		cout << endl;
		cout << "Seção das 18:00 : " << soma << endl; 
		cout << endl;
		cout << endl;
		cout << "Seção das 21:00 : " << som2 << endl; 
		
	}
	
	if(op == 4){ 
		
		cout << endl;
		cout << endl;
		cout << "Seção das 18:00 : " << soma << endl; 
		cout << "Quantidade de pessoas seção das 18:00 : " << pessoa << endl;
		cout << endl;
		cout << endl;
		cout << "Seção das 21:00 : " << som2 << endl; 
		cout << "Quantidade de pessoas seção das 21:00 : " << pessoas << endl; 
		  
	}

	
}
}
