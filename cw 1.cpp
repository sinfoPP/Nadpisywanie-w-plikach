#include <fstream>
#include <iostream>

using namespace std;
int main ()
{
	char data[100];
	//char plik[]="D:\Temp\pliki\plik.txt";
	
	ofstream nazwa; //zapisywanie do pliku nazwa , iostream odczytywanie
	nazwa.open("D:/Temp/pliki/plik.txt");
	
	cout << "Wpisz tekst" <<endl;
	cin.getline(data,100);
	nazwa << data << endl;
	
	nazwa.close();
	
	
}
