#pragma once

namespace Engine {
	struct Location {
		int x;
		int y;
	};
	class Object
	{
	private:
		Location location;
	public:
		Object();
		~Object();

		Location getLocation() const { return location; }
		void setLocation(const Location &loc) { location = loc; }
	};
}
