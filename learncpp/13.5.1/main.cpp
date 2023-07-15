#include <iostream>
#include <string>

class Ball {
	private:
		std::string _color{"black"};
		double _radius{10.0};
	public:
		Ball() = default;

		Ball(std::string color) {
			this->_color = color;
		}

		Ball(double radius) {
			this->_radius = radius;
		}

		Ball(std::string color, double radius) {
			this->_color = color;
			this->_radius = radius;
		}

		void print() {
			std::cout << "color: " << this->_color << ", radius: " << this->_radius << '\n';
		}

};

int main() {
#if DEBUG
std::cout << std::initbuf;
#endif

	Ball def{};
	def.print();

	Ball blue{"blue"};
	blue.print();

	Ball twenty{20.0};
	twenty.print();

	Ball blueTwenty{"blue", 20.0};
	blueTwenty.print();

	return EXIT_SUCCESS;
}
