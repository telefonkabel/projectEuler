#include "CProblem357.h"
#include "maths.h"


namespace euler
{
	CProblem357::CProblem357(int64_t  range) :
		CProblem(357, range)
	{}

	void CProblem357::calculate()
	{
		//for performance: create table of primes in the possible range of (d + range/d) therefore range + 1.
		std::vector<bool> primeTable{ maths::createPrimeTable(m_range + 1) };

		for (int64_t i{ 1 }; i <= m_range; ++i)
		{
			//precondition for performance
			if (primeTable[i + 1])
			{
				bool primeGenerating{ true };
				std::set<int64_t> divisors{ maths::getDivisors(i) };
				for (int64_t divisor : divisors)
					if (!primeTable[divisor + i / divisor])
					{
						primeGenerating = false;
						break;
					}
				if (primeGenerating)
					m_solution += i;
			}
		}
	}

} //end of namespace euler