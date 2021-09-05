#pragma once
#include "CProblem.h"

#include <set>


namespace euler
{
	class CProblem3 : public CProblem
	{
	public:
		CProblem3(size_t  range);

	private:
		void calculate() override;
	};

} //end of namespace euler