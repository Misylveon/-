# include <locale.>
#include <fstream>
#include <iostream>
using namespace std;

int main (){
	setlocale (LC_CTYPE, "rus");
	int a;
printf ("��������� ����� �� ����� input.txt \n");
ifstream file("input.txt");
    file >> a; 
    printf ("���� ����� :");
    cout << a << endl; 
    printf ("��������� ����� � ���� output.txt");
    ofstream fil("output.txt");
    fil << a;
    fil.close();
    printf ("�� ��� � ��� �:");
}
