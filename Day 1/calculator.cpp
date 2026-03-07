// Простой калькулятор на С++

#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;


int main(){

	double a,b;
	char operation;

	printf("Simple calculator on cpp -_- \n");
	printf("<<------------------------------>> \n");

	printf("Введите первое число: \n");
	cin>>a;

	printf("Выберите действие: (+, -, *, /) \n");
	cin>>operation;

	printf("Введите второе число: \n");
	cin>>b;

	printf("<<------------------------------>> \n");

	switch (operation) {
		case '+' : cout<<"Результат сложения: " << a + b << endl;
			break;

		case '-': cout << "Результат вычитания: " << (a - b) << endl;
			break;

		case '*': cout << "Результат умножения: " << (a * b) << endl;
			break;

		case '/':
			if (b != 0){
				cout << "Результат деления : " << setprecision(3) << (a / b) << endl;
				break;
			}else{
				printf("Error! Деление на 0");
			}
			break;

		default:printf("Неправильный оператор :(");
	}

	return 0;
}
