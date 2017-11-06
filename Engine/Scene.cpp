#include "Scene.h"
#include <iostream>
#include <string>

namespace Engine {

	Scene::Scene()
	{
	}

	Scene::~Scene()
	{
	}

	void Scene::addObject(std::shared_ptr<Object> obj)
	{
		objects.push_back(obj);
		
		auto components = obj->getComponents();
		// set owner for all components
		for (auto const& x : *components) {
			x.second->setOwner(obj);
		}
	}

	void Scene::tick()
	{
		// tick all associated objects
		for (int i = 0; i < objects.size(); i++) {
			objects.at(i)->tick();
		}
	}
}