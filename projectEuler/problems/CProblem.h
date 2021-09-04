#pragma once


class CProblem
{
public:
	CProblem(int id, int range);

	void solve();

protected:
	int m_range;
	int m_solution;

private:
	int m_id;
	virtual void calculate() = 0;
};

