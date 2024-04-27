#pragma once
#include "VectorTemplate.h"


template<class T>
class Matrix : public VectorTemplate<VectorTemplate<T>> {
public:
	Matrix(int n, int m) : VectorTemplate<VectorTemplate<T>>(n){
		for (int i = 0; i < n; i++) VectorTemplate<VectorTemplate<T>>::coords[i] = VectorTemplate<T>(m);
	};
	Matrix(const VectorTemplate<VectorTemplate<T>>& a) : VectorTemplate<VectorTemplate<T>>(a) {
	};
};