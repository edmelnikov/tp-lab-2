#pragma once

template<typename T>
T* createArr(T(*generator)(), int N){
	T* arr = new T[N];
	for (int i = 0; i < N; i++){
		arr[i] = generator();
	}
	return arr;
}