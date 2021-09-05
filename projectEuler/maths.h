#pragma once
#include <cstdint>
#include <set>
#include <vector>


namespace euler
{
	namespace maths
	{
		////related to primes
		std::vector<bool> createPrimeTable(int64_t number);

		int64_t primorial(int64_t number);

		bool isPrime(int64_t number);

		std::set<int64_t> getDivisors(int64_t number);

	} //end of namespace maths
} //end of namespace euler