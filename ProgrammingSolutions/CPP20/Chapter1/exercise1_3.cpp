/* Exercise 1-3: The following program produces several compiler errors.
 * Find these errors and correct them so the program can compile cleanly and run.
 */

#import <iostream>

int main()
{
  std::cout << "Hola Mundo!\n"
  return 0;
}

/* The errors can be fixed by changing #import to #include and by adding ;(semicolon) at the
 * end of the first statement inside main()
 *
 * Solution
 * #include <iostream>
 *
 * int main()
 * {
 *    std::cout << "Hola Mundo!\n";
 *    return 0;
 * }
 */
