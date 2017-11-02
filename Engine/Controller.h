#pragma once
#include "Component.h"

namespace Engine {
	class Controller : public Component
	{
	private:
		typedef Component Super;

	public:
		Controller(Object* owner);
		~Controller();

		void move(int x, int y);
	};
}
