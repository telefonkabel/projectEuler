#include "CProblem3.h"
#include "maths.h"


namespace euler
{
	CProblem3::CProblem3(size_t  range) :
		CProblem(3, range)
	{}

	void CProblem3::calculate()
	{
		m_solution = *std::next(maths::primeFactors<size_t>(m_range).end(), -1);
	}

} //end of namespace euler