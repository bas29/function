#include<iostream.h>
#include<conio.h>
float segitiga(float a,float t){
float luas;
luas=0.5*a*t;
return luas;
}

void main()
{
float alas,tinggi,hasil;
cout<<"Input Alas Segitiga : ";cin>>alas;
cout<<"Input Tinggi Segitiga : ";cin>>tinggi;
hasil=segitiga(alas,tinggi);
cout<<"\nLuas Segitiga = "<<hasil;
getch();
}
