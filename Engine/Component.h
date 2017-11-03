#pragma once

#include <string>

namespace Engine {
	class Object; // tell the compiler about the owner
	class Component
	{
	private:
		std::string name;

	protected:
		Object* owner;

	public:
		Component(Object* owner);
		~Component();

		virtual void tick();

		std::string getName() const { return name; }
		void setName(const std::string name) { this->name = name; }
		Object* getOwner() const { return owner; }
	};
}
