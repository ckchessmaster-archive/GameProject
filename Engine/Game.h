#pragma once
#include <map>

namespace Engine {

	

	class Game
	{
	private:
		typedef std::map<std::string, Game*(*)()> map_type;
		static map_type * map;

	protected:
		static map_type * getMap() {
			// never deleted. Because we can't guarantee correct destruction order
			if (!map) { map = new map_type; }
			return map;
		}

		template<typename T>
		struct GameRegister : GameFactory {
			GameRegister(std::string const& s) {
				getMap()->insert(std::make_pair(s, &createT<T>));
			}
		};

	public:
		Game();
		~Game();

		template<typename T> Game * createT() { return new T; }

		struct GameFactory {
			static Game * createInstance(std::string const& s) {
				map_type::iterator it = getMap()->find(s);
				if (it == getMap()->end())
					return 0;
				return it->second();
			}
		};
	};
}