#include <iostream>
#include "task2.h"
using namespace std;

template<typename T>
T gen(){
	T output = (rand() % 100);
	output = output / 10;
	return output;
}

int main(){
	int* arr1;
	double* arr2;
	const int N = 10;
	arr1 = createArr<int>(gen, N);
	for (int i = 0; i < N; i++){
		cout << arr1[i] << ' ';
	}
	cout << endl;
	arr2 = createArr<double>(gen, N);
	for (int i = 0; i < N; i++){
		cout << arr2[i] << ' ';
	}
	double test = 10;
	cout << endl;
	system("pause");
	return 0;
}