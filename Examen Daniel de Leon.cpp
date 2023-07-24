#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Ingrese el numero de categoria:";
cin>>a;
system("cls");
for(int i=0;i<a;i++){
cout<<"Categoria ";
cout<<i+1<<endl;
}
for(int x=0;x<a;x++){
cout<<"Ingrese el valor de la categoria ";
cout<<x+1<<endl;
cin>>b;
for(int z=0;z<a;z++){
cout<<"Categoria ";
cout<<z+1;
for(int j=0;j<b;j++){
cout<<"/";
}
cout<<endl;
}
}
return 0;
}
