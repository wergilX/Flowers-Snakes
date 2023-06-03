#include "SDL.h"

using Point = SDL_Point;
using Rect = SDL_Rect;


struct Collider2D {
public:

	Point GetAnchorCenter() {
		return { (m_rect.x + (m_rect.w / 2)),(m_rect.y + (m_rect.h / 2)) };
	}

	Rect m_rect;
};