#pragma once
#include "Component.h"
#include "Logger.h"
#include "Transform.h"

#include <map>
#include <memory>

namespace Engine {
	class Object
	{
	private:
		std::map<std::string, std::unique_ptr<Component>> components;
		Transform transform;
		std::string name;

	public:
		Object();
		~Object();

		virtual void tick();

		std::map<std::string, std::unique_ptr<Component>>* getComponents() { return &components; }
		void addComponent(std::unique_ptr<Component> comp);
		
		Transform getTransform() const { return transform; }
		void setTransform(Transform trans);

		std::string getName() const { return name; }
		void setName(std::string name);
	};
}
