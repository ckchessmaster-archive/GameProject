#pragma once

#include <string>
#include <memory>

namespace Engine {
	class Object; // tell the compiler about the owner
	class Component
	{
	private:
		std::string name;

	protected:
		std::weak_ptr<Object> owner;

	public:
		Component();
		~Component();

		virtual void tick();

		std::string getName() const { return name; }
		void setName(const std::string name) { this->name = name; }

		std::weak_ptr<Object> getOwner() const { return owner; }
		void setOwner(std::weak_ptr<Object> owner) { this->owner = owner; }
	};
}
