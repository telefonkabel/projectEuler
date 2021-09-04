#pragma once
#include "CProblem.h"


class CProblem2 : public CProblem
{
public:
	CProblem2(int range);

private:
	void calculate() override;
};

