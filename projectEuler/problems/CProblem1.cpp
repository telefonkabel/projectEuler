#include "CProblem1.h"

#include <iostream>


CProblem1::CProblem1(int range):
	CProblem{ 1, range }
{
}

void CProblem1::calculate()
{
	//// straight
	//for (int i{ 0 }; i < range; ++i)
	//{
	//	if (i % 3 == 0 || i % 5 == 0)
	//		solution += i;
	//}

	//// short
	auto calc = [&](int i) {m_solution += (i % 3 == 0 || i % 5 == 0) ? i : 0; };
	for (int i{ 0 }; i < m_range; calc(i++)) {};;
}