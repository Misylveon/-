# include <iostream>
# include <fstream>
# include <locale.h>

using namespace std;
int main(){
	setlocale(LC_CTYPE,"rus"); // ��� ����� ������ �� �����
	printf ("���������� �: \n");
	printf ("��������� ������\n");
	printf ("��� ��� ������ \n");
	ifstream f("input.txt");
	while (!f.eof()) {// � ��� ����� �� ������ ������������ 
  int n;
  f >> n;
  cout << n << endl;
} // � ������ ����� �������� D: 
// �������� ��� ����� ���� 
// �� ��� �� ��������� ��� �� ���� ������ 
// ���� �� �� ����� ����� ����� 
// � � ��� �����
// ����� ��� ���������� ����
// �����, �����, ������...

int i=0;
int a=0;
int c;
ifstream fil("input.txt");
int max = INT_MIN; 
int min = INT_MAX;
while (!fil.eof()) {
	int a[c];
	fil >> a[c];
	if (a[i]<0 || a[i]>100){
		printf ("��������!");
	for (int i = 0; i < c; i++) {
        if (a[i] > max)
            max = a[i];
            printf ("��� ������������ ����� �������!");
            cout << a[i]<<endl;
        if (a[i] < min)
            min = a[i];
            printf ("%d", max);
            printf ("��� ����������� ����� �������!");
            printf ("%d", min);
}
}
else {
	printf ("� ������� ���� �����/� �� ���������� ����������");
}

}
}

