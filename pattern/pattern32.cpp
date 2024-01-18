 /*            
 
			 
			 *
            ***
           *****
          *******
           *****
            ***
             *
                                 */

#include <iostream>

int main() {
    int n = 4;  // You can adjust this value to change the size of the pattern

    

    // Print the upright pyramid
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j)
            std::cout << " ";
        for (int k = 1; k <= 2 * i - 1; ++k)
            std::cout << "*";
        std::cout << std::endl;
    }
    // Print the inverted pyramid
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j)
            std::cout << " ";
        for (int k = 1; k <= 2 * i - 1; ++k)
            std::cout << "*";
        std::cout << std::endl;
    }

    return 0;
}

