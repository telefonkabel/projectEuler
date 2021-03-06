#pragma once
#include "CProblem.h"

#include <cstdint>


namespace euler
{
	class CProblem2 : public CProblem
	{
	public:
		CProblem2(int64_t  range);

	private:
		void calculate() override;
	};

} //end of namespace euler