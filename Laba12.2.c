#include <stdio.h>//Подключенние библиотеки ввода/выводы

int main(void) //Точка входа в программу – главную функцию
{
	int n; // Объявление локальной переменной типа “int”
	char c; // Объявление локальной переменной типа “char”
	printf("Направление:"); // Вывод текста на экран
	scanf_s("%c", &c); //Ввод значения с клавиатуры
	printf("Команда:"); // Вывод текста на экран
	scanf("%i", &n); //Ввод значения с клавиатуры

	switch (c) {
	case 'С':
		switch (n) {
		case 1:
			c = 'З';
			break;
		case 0:
			c = 'С';
			break;
		case -1:
			c = 'В';
			break;
		}
		break;
	case 'В':
		switch (n) {
		case 1:
			c = 'С';
			break;
		case 0:
			c = 'В';
			break;
		case -1:
			c = 'Ю';
			break;
		}
	case 'Ю':
		switch (n) {
		case 1:
			c = 'В';
			break;
		case 0:
			c = 'Ю';
			break;
		case -1:
			c = 'З';
			break;
		}
		break;
	case 'З':
		switch (n) {
		case 1:
			c = 'Ю';
			break;
		case 0:
			c = 'З';
			break;
		case -1:
			c = 'С';
			break;
		}
	}
	printf("%c\n", c); //Вывод значения на экран
	return 0; //Возврат целочисленного значения перед завершением функции
}