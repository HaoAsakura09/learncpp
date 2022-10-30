#include <iostream>
#include <iomanip>
#include <limits>

void setPrecision(int n);
int readScore(int n);

int main()
{
	setPrecision(2);
	
	double scoresSum{};
	double finalScore{};
	double finalGrade{};
	double equivalentGrade{};
	
	int numberOfExam{};
	do{
		// get the exams score
		while(numberOfExam != 3)
			scoresSum += readScore(++numberOfExam);
		
		std::cout << "Enter Finals score: ";
			std::cin >> finalScore;
	   while(finalScore < 0 || finalScore > 100)
	   {		
			std::cout << "Enter final score between 0 and 100.\n";
			std::cin >> finalScore;
	   }
		
	}while(finalScore == 0);
	
	finalGrade = (0.7 * (scoresSum / numberOfExam) ) + 0.3 * finalScore;
	
	std::cout << "\n\nYour final grade is: " <<  finalGrade << '\n';
	
	// get the equivalent grade in percent
	if(finalGrade <= 59)
		equivalentGrade = 5.00;
	else if(finalGrade <= 63)
		equivalentGrade = 3.00;
	else if(finalGrade <= 67)
		equivalentGrade = 2.75;
	else if(finalGrade <= 71)
		equivalentGrade = 2.50;
	else if(finalGrade <= 75)
		equivalentGrade = 2.25;
	else if(finalGrade <= 79)
		equivalentGrade = 2.00;
	else if(finalGrade <= 83)
		equivalentGrade = 1.75;
	else if(finalGrade <= 87)
		equivalentGrade = 1.50;
	else if(finalGrade <= 91)
		 equivalentGrade = 1.25;
	else
		equivalentGrade = 1.00;
		
	std::cout << "\nYour equivalent grade is: " << equivalentGrade << '\n';
	
	std::cout << "\nRemarks: ";
	if(equivalentGrade <= 3.00)
		std::cout << "Pass";
	else
		std::cout << "Fail";
  
   std::cout << '\n';
	return 0;
}

int readScore(int n)
{
	std::cout << "Enter Exam " << n << " score: ";
	int score{};
	std::cin >> score;
	
	// Loop runs when std::cin is failed
	while(!std::cin || (score < 0 || score > 100))
	{
		if(!std::cin)
			std::cout << "Invalid score input!\n";
		if(score < 0 || score > 100)
			std::cout << "Enter score between 0 and 100.\n";
		// back to normal operation
		std::cin.clear();
		// clear the invalid input in the buffer
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// Ask the user again for input
		std::cin >> score;
	}
	
	return score;
}

void setPrecision(int n)
{
	std::cout << std::fixed << std::setprecision(n);
}
