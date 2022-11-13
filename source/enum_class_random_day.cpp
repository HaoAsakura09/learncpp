#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
  std::srand(static_cast<unsigned>(std::time(nullptr)));   
   enum class Day{ Monday = 1, 
                   Tuesay,
                   Wednesday,
                   Thursday,
                   Friday,
                   Saturday,
                   Sunday
                 };
   
   int randomDay{ std::rand() % 7 + 1 };                         
   Day currentDay{ static_cast<Day>(randomDay) };
   
   std::cout << "Today is ";
   switch(static_cast<int>(currentDay))
   {
      case 1: std::cout << "Monday"; break;
      case 2: std::cout << "Tuesday"; break;
      case 3: std::cout << "Wednesday"; break;
      case 4: std::cout << "Thursday"; break;
      case 5: std::cout << "Friday"; break;
      case 6: std::cout << "Saturday"; break;
      case 7: std::cout << "Sunday"; break;
      default: std::cout << "Unknown day";
   }
   
   return 0;
}
