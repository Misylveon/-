# include <iostream>
# include <locale.h>
int main(){
	setlocale(LC_CTYPE, "rus");
	int a;
	scanf("%d", a);
	if (a>999,a<10000){
		int j;
		j=1;
		int summ=0;
		int g=15;
		while(j<5){
		j+=1;
		int b=a%10;
		summ+=b;
		a/=10;
		
		}
		if (summ==g){
			printf("Сумма чисел этого числа 15 !");
		}
		else {
			printf("Сумма этих чисел не равна 15");
		}
	}
	else {
		int d;
		d==0;
		printf("%d", d);
		
	}
return 0;
} 
