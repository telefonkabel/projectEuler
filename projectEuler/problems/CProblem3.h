#pragma once
#include "CProblem.h"

#include <cstdint>
#include <set>


namespace euler
{
	class CProblem3 : public CProblem
	{
	public:
		CProblem3(int64_t  range);

	private:
		void calculate() override;
	};

} //end of namespace euler