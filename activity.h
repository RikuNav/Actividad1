// =================================================================
//
// File: activity.h
// Author:
// Date:
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int suma;
	for (int i = 0; i <= n; i++){
		suma = suma + i;
	}
	return suma;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	int suma;
	if(n == 2){
		suma = 1 + 2;
	}
	else{
		suma = n + sumaRecursiva(n - 1);
	}
	return suma;
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	int suma;
	suma = (n * (n + 1))/ 2;
	return suma;
}

#endif /* ACTIVITY_H */
