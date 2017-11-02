#include "Scene.h"

namespace Engine {

	Scene::Scene()
	{
	}


	Scene::~Scene()
	{
	}

	void Scene::addObject(const Object &object) 
	{
		objects.push_back(object);
	}

	std::vector<Object> Scene::getObjects() const
	{
		return objects;
	}
}