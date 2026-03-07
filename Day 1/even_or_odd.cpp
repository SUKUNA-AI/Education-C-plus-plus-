// Проверка четности/нечетности числа

#include <iostream>

using namespace std;

int main(){
	int num;

	cout<<"Введите целое число: \n";
	cin>>num;


	if (num % 2 == 0){
		cout<<"Число чётное \n";
	}else{
		cout<<"Число нечётное \n";
	}

	return 0;
}
