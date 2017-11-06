#pragma once
#include "Controller.h"

namespace Engine {
	class SFMLPlayerController : public Controller
	{
	private:

	public:
		SFMLPlayerController();
		~SFMLPlayerController();

		virtual void tick();


	};
}
