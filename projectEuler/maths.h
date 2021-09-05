#pragma once
#include <set>
#include <list>
#include <map>

namespace euler
{
	namespace maths
	{
		////related to primes
		template <typename T>
		std::set<T> primeFactors(T  number)
		{
			std::set<T> primes{};
			for (T i{ 2 }; i <= number; ++i)
			{
				if (number % i == 0)
				{
					primes.insert(i);
					while (number % i == 0)
						number /= i;
				}
			}

			return primes;
		}

		int phiFunction(int number);

		int primorial(int number);

		bool isPrime(int number);

	} //end of namespace maths
} //end of namespace euler