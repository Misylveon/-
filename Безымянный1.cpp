# include <iostream>
int main(){
	int a=1000;
	int b;
	int ad=a;
	while (ad>999 && ad<10000){
		a=ad;
		int j;
		j=0;
		int summ=0;
		
		while(j<4){
		j+=1;
		b=a%10;
		summ+=b;
		a/=10;
		}
		int g=15;
		if (summ==g){
			printf("a=%d", a);
		}
		}
	} //����� ����� ���������� ���� ����, �������� �������� ��������� ��� ����, �� ��� �� �������� � �� �����
	//����� ������������, ������� ���������, ��������� �����, �� ����� ��� ���������, ���� � ������ �� ������, �� ������ �� ��������
	//� ����� ��� ��� ����� ������ ����� ������, �� ���� ��� ������ 
