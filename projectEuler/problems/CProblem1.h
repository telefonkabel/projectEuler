#pragma once
#include "CProblem.h"


namespace euler
{
	class CProblem1 : public CProblem
	{
	public:
		CProblem1(int  range);

	private:
		void calculate() override;
	};

} //end of namespace euler