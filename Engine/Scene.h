#pragma once
#include "Object.h"

#include <vector>

namespace Engine {
	class Scene
	{
	private:
		std::vector<Object> objects;

	public:
		Scene();
		~Scene();

		void addObject(const Object &object);
		std::vector<Object> getObjects() const;
	};
}
