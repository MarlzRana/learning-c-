#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;
int main() {
    /*
        typedef = reserved keyword used to create an additional name
                  an alias for another datatype
                  New identifier for an existing type
                  Helps with readability and reduces types
                  Use it when there is a clear benefit (such an alias for a datatype is long in the textual sense to access)
                  Has been replaced by "using" (work better w/ template)
    */

   text_t firstName = "Marlin";
   number_t age = 19;

   std::cout << firstName << "\n";
   std::cout << age << "\n";

    // pairlist_t pairlist;
    return 0;
}