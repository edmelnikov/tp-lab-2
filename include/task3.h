#pragma once

template<typename T>
void map(T* arr, T (*changer)(T), int N){
	for (int i = 0; i < N; i++){
		arr[i] = changer(arr[i]);
	}
}