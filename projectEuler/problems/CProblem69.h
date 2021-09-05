#pragma once
#include "CProblem.h"

#include <set>


namespace euler
{
	class CProblem69 : public CProblem
	{
	public:
		CProblem69(int  range);

	private:
		void calculate() override;
	};

} //end of namespace euler