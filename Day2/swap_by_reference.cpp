#include <iostream>

using namespace std;

void foo(int &a, int &b){

	int boofer = a;

	a = b;
	b = boofer;

	cout<<"Значиня a и b после: "<<a<<"  "<<b<<"\n"<<endl;

}

int main(){

	auto a = 5;
	auto b = 8;

	cout<<"Значиния а и b до: "<<a<<"  "<<b<<"\n"<<endl;

	foo(a,b);

	return 0;
}
