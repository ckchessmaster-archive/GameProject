#include "Scene.h"

namespace Engine {

	Scene::Scene()
	{
	}

	Scene::~Scene()
	{
	}

	void Scene::tick()
	{
		// tick all associated objects
		for (int i = 0; i < objects.size(); i++) {
			objects.at(i).tick();
		}
	}
}