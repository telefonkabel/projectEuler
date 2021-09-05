#pragma once
#include "CProblem.h"

#include <cstdint>
#include <set>


namespace euler
{
	class CProblem357 : public CProblem
	{
	public:
		CProblem357(int64_t  range);

	private:
		void calculate() override;
	};

} //end of namespace euler