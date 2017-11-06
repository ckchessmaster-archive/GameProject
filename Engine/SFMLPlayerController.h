#pragma once
#include "Controller.h"

namespace Engine {
	class SFMLPlayerController : public Controller
	{
	protected:
		virtual void handleKeyboard();
		virtual void handleMouse();

	public:
		SFMLPlayerController();
		~SFMLPlayerController();

		virtual void tick();


	};
}
