#pragma once


namespace euler
{
	class CProblem
	{
	public:
		CProblem(int id, size_t range);

		void solve();

	protected:
		size_t m_range;
		size_t  m_solution;

	private:
		int m_id;
		virtual void calculate() = 0;
	};

} //end of namespace euler