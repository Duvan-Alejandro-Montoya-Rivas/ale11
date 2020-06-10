#include <iostream>
#include <math.h>
using namespace std;
struct menu
{
	string titulo;
	void asignartitulo();
	char selecionaropcion();
	char selecionaruna();
};

void menu::asignartitulo()
{
	cout<<"asigne el Nombre de la universidad : "<<titulo;
	cin>>titulo;
};

char menu::selecionaropcion()
{
	cout<<"Enlistar estudiantes credito "<<titulo<<"\n";
    char opcion;
	do{
		cout<<"selecionar opcion \n";
		cin>>opcion;
	}while (opcion<1 or opcion>5);
};

char menu::selecionaruna()
{
	cout<<"entidades financieras"<<"\n";
	char una;
	do
	{
		cout<<"seleccionar opcion \n";
		cin>>una;
	}while (una<1 or una>3);
	
};

typedef  struct 
   {string Nombre, carrera; 
    int Valor=0 , Cuotas, codigo,f,semestre;
    } Persona;

    
   //Proyecto de grupo 4: Sharon Valentina Venegas, Duvan Montoya, Juan pablo Bernal, Sergio Salinas Rodriguez
int main()
{
	system ("COLOR 80");
	menu codigo;
	codigo.asignartitulo();
 	double Ed_B;
 	Persona p[30];
    Persona A;
 	string Nomb;
 	int i=0; 
	char opcion;
	do
	{
	cout <<"1-agregar un estudiante \n ";
	cout<<"2-agregar un recurso \n";
  		cout <<"3-colsulta prestamo de estudiante \n ";
  		cout<<"4-consultar informacion de prestamo \n";
  		cout <<"5-Terminar \n ";
  		cout<<"ingresa la opcion: ";
    cin>>opcion;
    switch (opcion)
    {
    	
      case '1': 
 		cout<<"Cliente: "<<"\n";
 		cout <<"Nombre: ";
 		cin>>Nomb;
 		p[i].Nombre=Nomb;
    		cout <<"Carrera: ";
    		cin>>p[i].carrera;
    		cout<<"semestre a cursar:";
    		cin>>p[i].semestre;
    		
    		cout<<"guardado exitoso \n";

		break;  
		
	   case '2':	   
	        cout<<"agregar un recurso \n";
			cout <<"Valor del semestre: ";
    		cin>>p[i].Valor; 
    			cout <<"Cuotas: ";
    			cin>>p[i].Cuotas;
    			cout <<"codigo: ";
    			cin>>p[i].codigo;
    			p[i].f=p[i].Valor/p[i].Cuotas;
    			cout<<"Valor de cuota por mes: "<<p[i].f<<"\n";
    			cout<<"guardado exitoso \n";
            break;
      case '3': 
	          
             cout <<"consulta prestamo de estudiante \n ";
              cout<<"ingrese el codigo: ";
			 cin>>Ed_B;	
             if( p[i].f<7000000)
			 {
             	cout<<"se prestara el recurso"<<Nomb<<"\n";
			 }
			 else
			 {
			 	cout<<"no se le prestara el recurso \n";
			 }
				    
            break;
	  case '4': 
	  		
	  		char una;
	  			do{
				   cout<<"consultar informacion de prestamo \n";
				   cout<<"seleccione una opcion \n:";
				   cout<<"1-banco pichincha \n";
				   cout<<"2-fincomercio \n";
				   cout<<"3-refinancia \n"; 
				   cout<<"seleccione una opcion: ";
			   cin>>una;
			   	switch(una)
			   	{
			   		case '1':
			   		cout<<"banco pichincha \n";
			   		cout<<"se desembolsa el prestamo a "<<Nomb;
			   		cout<<"ha finalizado exitosa mente su proceso";
			   		break;
			   	
			   		case'2':
				   cout<<"fincomercio";
				   cout<<"se desembolsa el prestamo a "<<Nomb;
				   cout<<"ha finalizado exitosa mente su proceso";
					break;
					case'3':
					cout<<"refinancia";
					cout<<"se desembolsa el prestamo a "<<Nomb;
					cout<<"ha finalizado exitosa mente su proceso";
					break;
				}
			   }while(una=!'3');
	  	    
            
	  case '5':  
             cout <<"Finaliza el programa \n ";
            break; 		  
         default:  
            cout <<"Selección incorrecta \n "; 	
	} system("pause");
	}while (opcion!='5');
	return 0;

}
