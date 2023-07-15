#include <cstdint>
#include <cstdlib>
#include <iostream>

class RGBA {
	private:
		std::uint8_t _red;
		std::uint8_t _green;
		std::uint8_t _blue;
		std::uint8_t _alpha;
	public:
		RGBA(std::uint8_t red=0, std::uint8_t green=0, std::uint8_t blue=0, std::uint8_t alpha=255) 
			: _red{red}, _green{green}, _blue{blue}, _alpha{alpha} 
		{
		}
		
		void print() {
			std::cout << "r=" << static_cast<int>(this->_red) << " g=" <<  static_cast<int>(this->_green) << " b=" << static_cast<int>(this->_blue) << " a=" <<  static_cast<int>(this->_alpha) << '\n';
		}
};

int main() {

	RGBA teal{0, 127, 127};
	teal.print();

	return EXIT_SUCCESS;
}
