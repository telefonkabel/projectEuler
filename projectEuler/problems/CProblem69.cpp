#include "CProblem69.h"
#include "maths.h"

#include <set>


namespace euler
{
	CProblem69::CProblem69(int64_t  range) :
		CProblem(69, range)
	{}

	void CProblem69::calculate()
	{
		//// (no real proof yet) quotient maximal if numerator could be factorized in primes with multiplicity of 1,
		//// cause the next prime factor p would rise the numerator with the factor p, but the denominator only +1
		for (int64_t i{ 0 }; maths::primorial(i) <= m_range; ++i)
			m_solution = maths::primorial(i);
	}

} //end of namespace euler