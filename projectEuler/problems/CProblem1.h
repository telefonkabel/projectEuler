#pragma once
#include "CProblem.h"

#include <cstdint>


namespace euler
{
	class CProblem1 : public CProblem
	{
	public:
		CProblem1(int64_t  range);

	private:
		void calculate() override;
	};

} //end of namespace euler