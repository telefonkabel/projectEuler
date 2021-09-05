#include "CProblem.h"

#include <iostream>


namespace euler
{
	CProblem::CProblem(int id, int64_t range) :
		m_id{ id },
		m_range{ range },
		m_solution{}
	{}

	void CProblem::solve()
	{
		calculate();
		std::cout << "The solution to problem " << m_id << " is " << m_solution << "." << std::endl;
	}

} //end of namespace euler