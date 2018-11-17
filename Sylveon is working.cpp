# include <locale.>
#include <fstream>
#include <iostream>
using namespace std;

int main (){
	setlocale (LC_CTYPE, "rus");
	int a;
printf ("Считываем число из файла input.txt \n");
ifstream file("input.txt");
    file >> a; 
    printf ("Ваше число :");
    cout << a << endl; 
    printf ("Переносим число в файл output.txt");
    ofstream fil("output.txt");
    fil << a;
    fil.close();
    printf ("Ну вот и все с:");
}
