#include <iostream>
#include <conio.h>
using namespace std;

int main()
{ int n, *b;
  char c, s[20];
  
cout<<"Introduceti un nr pt pointer: ";
b=(int *)malloc(sizeof(int));
cin>>*b;
cout<<"Valoarea de la pointer este: "<<*b<<endl;
  
cout<<"introduceti un nr natural: "; 
  cin>>n;
  cout<<"introduceti un caracter: ";
   cin>>c;

cout<<"introduceti un sir de caractere: ";  
  cin>>s;
  cout<<endl; 
cout<<"numarul natural este= "<<n<<endl;

cout<<"caracterul este: "<<c<<endl;
cout<<"sirul este: "<<s;
	
	getch();
}












