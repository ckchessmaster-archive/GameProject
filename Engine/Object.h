#pragma once
#include "Component.h"
#include "Logger.h"
#include "Transform.h"

#include <map>

namespace Engine {
	class Object
	{
	private:
		std::map<std::string, Component*> components;
		Transform transform;
		std::string name;

	public:
		Object();
		~Object();

		virtual void tick();

		std::map<std::string, Component*> getComponents() const { return components; }
		void addComponent(Component* comp);
		
		Transform getTransform() const { return transform; }
		void setTransform(Transform trans);

		std::string getName() const { return name; }
		void setName(std::string name);
	};
}
