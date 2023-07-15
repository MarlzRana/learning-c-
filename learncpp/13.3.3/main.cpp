#include <array>
#include <iostream>
class Stack {
	private:
		std::array<int, 10> _arr{};
		int _size{};
		int _MAX_SIZE{10};
	public:
		void reset() {
			this->_size = 0;
		}

		bool push(int elementToAdd) {
			if (this->_size == this->_MAX_SIZE) {
				return false;
			}

			this->_arr[this->_size++] = elementToAdd;

			return true;
		}

		int pop() {
			assert(this->_size > 0);

			return this->_arr[--this->_size];
		};

		void print() {
			std::cout << "( ";
			for (int currIdx{}; currIdx < this->_size; ++currIdx) {
				std::cout << this->_arr[currIdx] << ' ';	
			}
			std::cout << ")\n";
		}


};

int main() {
#if DEBUG
	std::cout << std::initbuf;
#endif

	Stack stack;
	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();
	
	return EXIT_SUCCESS;
}
