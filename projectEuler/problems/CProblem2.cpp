#include "CProblem2.h"


namespace euler
{
	CProblem2::CProblem2(int  range) :
		CProblem(2, range)
	{}

	void CProblem2::calculate()
	{
		int next2last{ 1 };
		int last{ 2 };
		while (last <= m_range)
		{
			m_solution += (last % 2 == 0) ? last : 0;
			last += next2last;
			next2last = last - next2last;
		}
	}

} //end of namespace euler