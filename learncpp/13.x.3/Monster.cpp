#include "Monster.h"

#include <iostream>

Monster::Monster(const Type& type, const std::string& name, const std::string& roar, const int hitPoints):
_type{type}, _name{name}, _roar{roar}, _hitPoints{hitPoints} 
{}

void print() {
	
	switch(_type) {
		case 
		case SKELETON:
			std::cout << "skeleton";
	}
	std::cout << _name << " the " << _type
}
