#pragma once
#include "Controller.h"

namespace Engine {
	class SFMLPlayerController : public Controller
	{
	private:
		bool isMovingX = false;
		bool isMovingY = false;

	public:
		SFMLPlayerController(Object* owner);
		~SFMLPlayerController();

		virtual void tick();


	};
}
