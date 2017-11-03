#pragma once
#include "Controller.h"

namespace Engine {
	class SFMLPlayerController : public Controller
	{
	private:

	public:
		SFMLPlayerController(Object* owner);
		~SFMLPlayerController();

		virtual void tick();


	};
}
