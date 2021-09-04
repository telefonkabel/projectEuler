#pragma once
#include "CProblem.h"


class CProblem1 : public CProblem
{
public:
	CProblem1(int range);

private:
	void calculate() override;
};

