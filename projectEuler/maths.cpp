#include "maths.h"


namespace euler
{
	namespace maths
	{
		std::vector<bool> createPrimeTable(int64_t number)
		{
			if (number == 0)
				return std::vector<bool>{ false };
			else if( number == 1 )
				return std::vector<bool>{ false, false };

			//Eratosthenes
			std::vector<bool> primeTable(number + 1, true); //for numbers from 0 to number
			primeTable[0] = false;
			primeTable[1] = false;

			for (int64_t i{ 2 }; i * i <= number; ++i) //i is the smallest number left with which i could be multiplicated
			{
				if (primeTable[i])
				{
					for (int64_t j{ i }; i * j <= number; ++j)
						primeTable[i * j] = false;
				}
			}
			return primeTable;
		}

		int64_t primorial(int64_t number)
		{
			int64_t primorial{1};
			for (int64_t i{ 2 }; i <= number; ++i)
			{
				if (isPrime(i))
					primorial *= i;
			}
			return primorial;
		}

		bool isPrime(int64_t number)
		{
			int64_t half{ number / 2 };
			for (int64_t i{ 2 }; i <= half; ++i)
				if (number % i == 0)
					return false;
			return true;
		}

		std::set<int64_t> getDivisors(int64_t number)
		{
			std::set<int64_t> divisors{ 1, number };
			for (int64_t i{ 2 }; i <= sqrt(static_cast<double>(number)); ++i)
				if (number % i == 0)
				{
					//cause of set this will be sorted and without duplicates
					divisors.insert(i);
					divisors.insert(number / i); 
				}

			return divisors;
		}

	} //end of namespace maths
} //end of namespace euler