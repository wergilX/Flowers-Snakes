#include "Snake.hpp"


constexpr int DESK_SIZE = 20;
constexpr int CELL_SIZE = 640 / DESK_SIZE;

Snake::Snake(Point pos, Point dir) {

	if (dir.x > 1 || dir.x < -1)
		return;
	if (dir.y > 1 || dir.y < -1)
		return;

	m_direction = dir;

	m_body.push_back(pos);
	m_needIncrease = false;
}

void Snake::Move() {

	if (m_body.size() < 5 && m_needIncrease)
	{
		auto tail = m_body.end();
		m_body.push_back(*tail);
	}

	for (auto& elem : m_body)
	{
		Point temp = elem;
		elem.x + (CELL_SIZE * m_direction.x);
		elem.y + (CELL_SIZE * m_direction.y);

		if (elem.x < 0 || elem.x > DESK_SIZE || elem.y < 0 || elem.y > DESK_SIZE)
		{
			elem = temp;
			return;
		}
	}
}

void Snake::IncreaseSize(){
	m_needIncrease = true;
}

void Snake::DecreaseSize() {
	if (!m_body.empty())
	{
		m_body.pop_back();
	}
}