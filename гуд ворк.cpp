# include <iostream>
# include <fstream>
# include <locale.h>

using namespace std;
int main(){
	setlocale(LC_CTYPE,"rus"); // все врем€ хохочу со ступе
	printf ("«дравствуй с: \n");
	printf ("—читываем массив\n");
	printf ("¬от ваш массив \n");
	ifstream f("input.txt");
	while (!f.eof()) {// € это нашла на форуме програмистов 
  int n;
  f >> n;
  cout << n << endl;
} // а теперь самое страшное D: 
// серьезно тут такое было 
// вы это не забываете что мы дети хорошо 
// типо мы не супер пупер гении 
// и у нас школа
// уроки там котрольные есть
// жизнь, семь€, друзь€...

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
		printf ("–аботаем!");
	for (int i = 0; i < c; i++) {
        if (a[i] > max)
            max = a[i];
            printf ("это максимальное число массива!");
            cout << a[i]<<endl;
        if (a[i] < min)
            min = a[i];
            printf ("%d", max);
            printf ("это минимальное число массива!");
            printf ("%d", min);
}
}
else {
	printf ("¬ массиве есть число/а не подход€щие пораметрам");
}

}
}

