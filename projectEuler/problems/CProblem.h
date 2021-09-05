#pragma once
#include <cstdint>


namespace euler
{
	class CProblem
	{
	public:
		CProblem(int id, int64_t range);

		void solve();

	protected:
		int64_t m_range;
		int64_t  m_solution;

	private:
		int m_id;
		virtual void calculate() = 0;
	};

} //end of namespace euler