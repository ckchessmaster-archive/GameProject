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

		void addObject(const Object &obj) { objects.push_back(obj); }
		std::vector<Object> getObjects() const { return objects; }
	};
}
