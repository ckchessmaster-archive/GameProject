#pragma once
#include "Object.h"

#include <string>

namespace Engine {
	class Component
	{
	private:
		std::string name;

	protected:
		Object* owner;

	public:
		Component(Object* owner);
		~Component();

		std::string getName() const { return name; }
		void setName(const std::string name) { this->name = name; }
		Object* getOwner() const { return owner; }
	};
}
