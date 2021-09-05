#include "maths.h"


namespace euler
{
	namespace maths
	{
		int phiFunction(int number)
		{
			std::set<int> pFactors{ primeFactors<int>(number) };

			int phi{};
			bool relPrime{};
			for (int i{ 1 }; i < number; ++i)
			{
				relPrime = true;
				for (int prime : pFactors)
				{
					if (i % prime == 0)
					{
						relPrime = false;
						break;
					}
				}
				if (relPrime)
					++phi;
			}

			return phi;
		}

		int primorial(int number)
		{
			int primorial{1};
			for (int i{ 2 }; i <= number; ++i)
			{
				if (isPrime(i))
					primorial *= i;
			}
			return primorial;
		}

		bool isPrime(int number)
		{
			if (*primeFactors<int>(number).begin() == number)
				return true;
			else
				return false;
		}


	} //end of namespace maths
} //end of namespace euler