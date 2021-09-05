#include "solvedProblems.h"

#include <vector>
#include <memory>


int main()
{
	std::vector<std::unique_ptr<euler::CProblem>> problems;
	
	problems.emplace_back(new euler::CProblem1(1000));
	problems.emplace_back(new euler::CProblem2(4000000));
	problems.emplace_back(new euler::CProblem3(600851475143));
	problems.emplace_back(new euler::CProblem69(1000000));
	problems.emplace_back(new euler::CProblem357(100000000)); //still relatively too slow, but below 10min

	for (auto& problem : problems)
		problem->solve();

	return 0;
}