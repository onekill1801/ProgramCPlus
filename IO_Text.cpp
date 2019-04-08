#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;

void writeFile(string nameFile, string s);
string readFile(string nameFile); 
int main()
{
	string data = "?qthis is new content.....\nfshdfkgskg";
//	writeFile("new",data);
	for(int i =0 ;i< 2;i++){
//		string data = "?qthis is new content.....\nfshdfkgskg";
		data+=data;
	}
	writeFile("new",data);
	cout << readFile("new");
	return 0;
}

void writeFile(string nameFile, string s){
	fstream f;
	nameFile+=".txt";
	f.open(nameFile.c_str(), ios::out);
	f << s;
	f.close();
}
string readFile(string nameFile){
	fstream f;
	nameFile+=".txt";
	f.open(nameFile.c_str(), ios::in);
 
	string data;
 
	string line;
	while (!f.eof())
	{
		getline(f, line);
		data += line;
	}
 
	f.close();
	return data;
}
