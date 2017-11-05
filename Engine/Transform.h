#pragma once

namespace Engine {
	struct Vector2D {
		int x;
		int y;
	};
	class Transform 
	{

	public:
		Transform();

		Vector2D position;
		Vector2D rotation;
		int scale;
	};
}