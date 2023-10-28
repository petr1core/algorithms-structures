﻿// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// Copyright (c) Сысоев А.В.
//
// Тестирование матриц

#include <iostream>
#include "tmatrix.h"
//---------------------------------------------------------------------------

void main()
{
	
	
	setlocale(LC_ALL, "Russian");

	TDynamicMatrix<double> m1(2), m2(2);
	m1[0][0] = 1;
	m1[0][1] = 1;
	m1[1][0] = 1;
	m1[1][1] = 1;
	
	m2[0][0] = 4;
	m2[0][1] = 5;
	m2[1][0] = 7;
	m2[1][1] = 2;
	cout << m1 / m2 << endl;
	TDynamicMatrix<Rational<int>> m3(2), m4(2);
	m3[0][0] = 1;
	m3[0][1] = 1;
	m3[1][0] = 1;
	m3[1][1] = 1;

	m4[0][0] = 4;
	m4[0][1] = 5;
	m4[1][0] = 7;
	m4[1][1] = 2;
	/* m1 / m2 = { 5/27    1/27 },{ 5/27    1/27 }*/
	
	cout << m3 / m4 << endl;
}
//---------------------------------------------------------------------------