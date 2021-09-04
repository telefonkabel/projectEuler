#include "solvedProblems.h"

#include <vector>
#include <memory>


int main()
{
	std::vector<std::unique_ptr<CProblem>> probs;
	
	probs.emplace_back(new CProblem1(1000));
	probs.emplace_back(new CProblem2(4000000));

	for (auto& prob : probs)
		prob->solve();

	return 0;
}