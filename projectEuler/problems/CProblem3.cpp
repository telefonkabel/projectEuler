#include "CProblem3.h"
#include "maths.h"

#include <vector>


namespace euler
{
	CProblem3::CProblem3(int64_t  range) :
		CProblem(3, range)
	{}

	void CProblem3::calculate()
	{
		//all prime numbers of interest
		std::vector<bool> primeTable{ maths::createPrimeTable(static_cast<int64_t>(sqrt(m_range))) };

		for (size_t i{ std::size(primeTable) - 1 }; i >= 2; --i)
			if (primeTable[i] && m_range % i == 0)
			{
				m_solution = i;
				break;
			}
	}

} //end of namespace euler