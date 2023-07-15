#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster {
	public:
		enum Type {
			DRAGON,
			GOBLIN,
			OGRE,
			ORC,
			SKELETON,
			TROLL,
			VAMPIRE,
			ZOMBIE,
			MAX_MONSTER_TYPES,
		};
	private:
		Type _type{};
		std::string _name{};
		std::string _roar{};
		int _hitPoints{};
	public:		
		Monster(const Type& type, const std::string& name, const std::string& roar, const int hitPoints);

		void print(); 	
};
#endif
