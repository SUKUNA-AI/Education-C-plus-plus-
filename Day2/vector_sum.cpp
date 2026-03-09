#include <cstddef>
#include <iostream>
#include <vector>

using namespace std;

void summa(const vector<int> &numbers){

	int total = 0;

	for(size_t i(0); i < numbers.size(); i++){

		total += numbers.at(i);
	}

	cout<<"Сумма всех элементов равна: "<<total<<"\n"<<endl;
}


int main(){
	int n;

	cout<<"Введите колличество чисел: \n";
	cin>>n;

	vector<int> numbers;
	numbers.reserve(n);

	cout<<"Введите значения по одному: \n";
	for(size_t i{0};i < n; ++i){

		int v; cin>>v;
		numbers.push_back(v);
	}

	cout<< "Элементы вектора: \n";

	for(const int& num:numbers){
		cout << num << " ";
	}
	cout<<"\n";

	summa(numbers);

	return 0;
}
