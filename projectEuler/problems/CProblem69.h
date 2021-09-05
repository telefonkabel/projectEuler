#pragma once
#include "CProblem.h"

#include <cstdint>
#include <set>


namespace euler
{
	class CProblem69 : public CProblem
	{
	public:
		CProblem69(int64_t  range);

	private:
		void calculate() override;
	};

} //end of namespace euler