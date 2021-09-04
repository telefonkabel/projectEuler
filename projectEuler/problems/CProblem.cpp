#include "CProblem.h"

#include <iostream>


CProblem::CProblem(int id, int range):
	m_id{ id },
	m_range{ range },
	m_solution{ 0 }
{}

void CProblem::solve()
{
	calculate();
	std::cout << "The solution to problem " << m_id << " is " << m_solution << "." << std::endl;
}