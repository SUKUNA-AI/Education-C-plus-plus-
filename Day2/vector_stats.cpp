#include <iostream>
#include <vector>
#include <cstddef>
#include <string>

using namespace std;

void min_value(const vector<int> &T){

	int min_val = T.at(0);

	for(size_t i(1); i < T.size(); i++ ){
		if (T[i] < min_val){
			min_val = T[i];
		}
	}

	cout << "Минимальный элемент: " << min_val <<endl;
}

void maximum(const vector<int> &T){

	int maximum = T.at(0);

	for(size_t i(1); i < T.size(); i++ ){
		if (T[i] > maximum){
			maximum = T[i];
		}
	}

	cout << "Максимальный элемент: " << maximum <<endl;
}

long long sum(const vector<int> &numbers){

	long long total = 0;

	for(size_t i(0); i < numbers.size(); i++){
		total+= numbers.at(i);
	}

	return total;
}

double avg(const vector<int> &numbers){

	double average = static_cast<double>(sum(numbers))/(numbers.size());
	return average;
}

int main(){
	int n;

	cout<<"Введите количество чисел (БОЛЬШЕ 0): \n";
	cin>>n;

	if (n<=0){
		cout<<"Тебе русским языком сказали БОЛЬШЕ 0 \n";
		return 0;
	}

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

	string op;
	cout<< "Выберите действие (min, max, sum, avg): \n";
	cin>>op;


	if (op == "min") {
		min_value(numbers);
	} else if (op == "max") {
		maximum(numbers);
	} else if (op == "sum") {
		//sum(numbers);
		cout << "Сумма равна: "<< sum(numbers)<<"\n";
	}else if (op == "avg"){
		cout<<"Среднее значение равно: "<<avg(numbers)<<"\n";
	}else {
		cout << "Unknown op!" << endl;
	}

	return 0;
}
