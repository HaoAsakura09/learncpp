/* Exercise 1-3: The following program produces several compiler errors.
 * Find these errors and correct them so the program can compile cleanly and run.
 */

import <iostream>

int main()
{
  std::cout << "Hola Mundo!\n"
  return 0;
}

/* use #include for c++17 or earlier versions
 * 
 *
 * Solution
 * import <iostream>;
 *
 * int main()
 * {
 *    std::cout << "Hola Mundo!\n";
 *    return 0;
 * }
 */
