#pragma once
#include "CProblem.h"


namespace euler
{
	class CProblem2 : public CProblem
	{
	public:
		CProblem2(int  range);

	private:
		void calculate() override;
	};

} //end of namespace euler