#include <iostream>
using namespace std;

int gcd(int a, int b){
	while (b!=0){
		int temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

int lcm(int a, int b){
	return (a / gcd(a,b)) * b;
}

int main(){

	int a,b;

	cout<<"Введите первое чилсо: \n";
	cin>>a;

	cout<<"Введите вторео число: \n";
	cin>>b;

	cout<<"Результат вычисления gcd: "<<gcd(a,b)<<"\n"
		<<"Резултат вычисления lcm: "<<lcm(a, b)<<endl;

	return 0;
}
