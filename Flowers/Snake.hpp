#pragma once
#include"Types.hpp"
#include<vector>

class Snake
{
public:
	Snake(Point pos , Point dir);
	void Move();
	void IncreaseSize();
	void DecreaseSize();

private:
	bool m_needIncrease;
	std::vector<Point> m_body;
	Point m_direction;
};

