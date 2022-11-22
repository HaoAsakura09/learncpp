#include <climits>
#include <iostream>
#include <string_view>
#include <string>

constexpr int numberOfChar{ 60 };

void checkInputTime(int& hour, int& minute);


int main()
{
   std::string_view days[]{ "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
   std::string printChar(numberOfChar, '=');
  
   // Time-in
   int hourIn{}, minuteIn{};
   // Time-out
   int hourOut{}, minuteOut{};
   
   float totalHoursOfWork{};
   float hourBreak{1};
   
   float grossPay{}, totalDeduction{}, netpay{};
   
   const int ratePerHr{ 537 };
   const int pagIbig{ 100 };
   const int philHealth{ 300 };
   const int SSS{ 200 };
   
   int numDay{ 0 };
   
   std::cout << printChar << '\n';
   std::cout << "Enter the time-in and time-out from monday to friday.\n";
   std::cout << printChar << '\n';
   while(numDay < 5)
   {
      std::cout << "Day: " << days[numDay] << '\n';
      std::string printDash(days[numDay].length() + 5, '-');
      std::cout << printDash <<'\n';
      
      std::cout << "Enter time-in:\n";
      checkInputTime(hourIn, minuteIn);
      std::cout << printChar << '\n';
      
      std::cout << "Enter time-out:\n";
      std::cout << printChar << '\n';
      checkInputTime(hourOut, minuteOut);
      std::cout << printChar << "\n\n";
      // gets number hours in a day
      totalHoursOfWork += (hourOut + 12 + (minuteOut / 60)) - (hourIn + (minuteIn / 60.0));
      
      totalHoursOfWork -= hourBreak;
      numDay++;
   }
   
   std::cout << "\n\n";
   
   grossPay= totalHoursOfWork * ratePerHr;
   totalDeduction = pagIbig + philHealth + SSS;
   netpay = grossPay - totalDeduction;
   
   // prints out payslip
   std::string printChar2(numberOfChar, '-');
   std::cout << printChar2 << '\n';
   std::cout << "Uzumaki, Naruto, K.\n";
   std::cout << printChar2 << '\n';
   std::cout << "Total working Hours   |\tRate  |\tThis period\n";
   std::cout << totalHoursOfWork << "                    | " << ratePerHr <<'\n';
   std::cout << printChar2 << '\n';
   std::cout << "Gross pay   \t      |\t" << grossPay << '\n';
   std::cout << printChar2 << '\n';
   std::cout << "Required Deductions   |\n";
   std::cout << printChar2 << '\n';
   std::cout << "Pag-ibig              | 100\n";
   std::cout << "Philhealth            | 300\n";
   std::cout << "SSS                   | 200\n";
   std::cout << printChar2 <<'\n';
   std::cout << "Net pay               | " << netpay << '\n';
   std::cout << printChar2 << '\n';
   return 0;
}

void checkInputTime(int& hour, int& minute)
{
      char ch{};
      std::cout << "Enter time(hr:min): ";
      std::cin >> hour >> ch >> minute;
     
      while(!std::cin || (hour > 12 || minute > 59))
      {
         std::cout << "The time you entered is invalid!\n";
         std::cin.clear();    
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
         std::cout << "Enter time(hr:min): ";
         std::cin >> hour >> ch >> minute;
      }
}

