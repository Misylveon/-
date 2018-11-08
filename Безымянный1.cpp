# include <iostream>
# include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "rus");
	int n[10];
	printf("¬ведите 10 элементов массива");
	int j;
	for(int j=0;j<10;j++){
		scanf ("%d",&n[j]);
	}
	int a;
	printf("¬ведите одно число");
	scanf ("%d",&a);
	for(int j=0;j<10;j++){
	if (a<=n[j]){
		printf("Yes!");
	}
//	else{
//		printf("No...");
//	}
	}
}
