#pragma once
#include "Object.h"

#include <memory>
#include <vector>


namespace Engine {
	class Scene
	{
	private:
		std::vector<std::shared_ptr<Object>> objects;

	public:
		Scene();
		~Scene();

		virtual void tick();

		void addObject(std::shared_ptr<Object>);
		std::vector<std::shared_ptr<Object>>* getObjects() { return &objects; }
	};
}
