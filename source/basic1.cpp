#include <iostream>
#include <iomanip>

//Global Declaration
int i;
const int size = 10;
typedef double *pointers;
void MperG();
void MilesPerrGallon(double *ptr1, double *ptr2, int sz);
double getLow(double *low);
double getSum(double *sum);
void getInput(double *input);
char getChoice(char *ch);

int main()
{
    //add only declaration here
    char *chr;
    char opt, choice;

    do
    {
        chr = &choice;
        opt = getChoice(chr);

        system("cls");

        while (opt != '1' && opt != '2' && opt != '3')
        {
            opt = getChoice(chr);
            system("cls");
        }

        switch (*chr)
        {
        case '1':
        {
            double grade[size];
            double *ptr;
            double *plow, *psum, *pave;
            double gsum, glow;
            double ave;

            system("cls");
            //add declaration here
            ptr = &grade[0];

            std::cout << "Choice[1]:Grade Elimination\n";
            std::cout << "Enter " << size << " grades\n";

            getInput(ptr);
            gsum = getSum(ptr);
            glow = getLow(ptr);
            ave = gsum / size;
            system("cls");
            //add code here
            //NOTE ALL CODES MUST USE pointer variables –input,process and
            //output

            std::cout << "You entered\n";
            for (i = 0; i < size; i++)
                std::cout << "grade[" << i + 1 << "]: " << grade[i] << '\n';

            psum = &gsum;
            std::cout << "Sum = " << *psum << '\n';
            plow = &glow;
            std::cout << "Low = " << *plow << '\n';
            pave = &ave;
            std::cout << std::showpoint << std::fixed << std::setprecision(2);
            std::cout << "Average = " << *pave << '\n';

            while (choice != 'y' && choice != 'n')
            {
                std::cout << "Do you want to try again?[y/n]: ";
                std::cin >> choice;
            }
        }
        break;

        case '2':
            MperG();
            while (choice != 'y' && choice != 'n')
            {
                std::cout << "Do you want to try again?[y/n]: ";
                std::cin >> choice;
            }
            break;
        case '3':
            std::cout << "goodbye for now....\n";
            system("pause");
            exit(1);
            break;
        }
    } while (choice == 'y');

    //Add code here
    std::cout << '\n';
    system("pause");
    return 0;
}

char getChoice(char *ch)
{
    //add code here
    std::cout << "<<<<<<<<<<MENU>>>>>>>>>>\n";
    std::cout << "[1] Score of " << size << " quizzes\n";
    std::cout << "[2] Miles per gallon\n";
    std::cout << "[3] to quit\n";
    std::cout << "Enter your choice: ";
    std::cin >> *ch;
    return *ch;
}

void getInput(double *input)
{
    for (i = 0; i < size; i++)
    {
        std::cout << "grade[" << i << "]: ";
        std::cin >> *(input + i);
    }
}

double getSum(double *sum)
{
    double add = 0;

    for (i = 0; i < size; i++)
        add += *(sum + i);

    return add;
}

double getLow(double *low)
{
    double baba;
    baba = *low;
    for (i = 0; i < size; i++)
    {
        if (*(low + i) < baba)
            baba = *(low + i);
    }

    return baba;
}

void MperG()
{
    int ctr;
    pointers milPtr;
    pointers galPtr;
    int msize;

    system("cls");
    //add code here
    std::cout << std::showpoint << std::fixed << std::setprecision(2);
    double mil[15], gal[15];
    std::cout << "COMPUTING FOR MPG: miles per gallon...\n";

    std::cout << "Specify the size of the array: ";
    std::cin >> msize;

    while (msize < 5)
    {
        std::cout << "size 5-15 only\n";
        std::cout << "Specify the size of the array: ";
        std::cin >> msize;
    }

    std::cout << "MILES\n";
    for (ctr = 0; ctr < msize; ctr++)
    {
        //add code here
        try
        {
            //add code here
            std::cout << "mile[" << ctr << "]: ";
            std::cin >> mil[ctr];

            if (mil[ctr] < 100 || mil[ctr] > 250)
            {
                throw mil[ctr];
            }
        } //end try

        catch (double e)
        {
            //add code here
            while (e < 100 || e > 250)
            {
                std::cout << e << " is invalid... 100 - 250 only\n";
                std::cout << "reenter a new value\n";
                std::cout << "mile[" << ctr << "]: ";
                std::cin >> e;
            }
            mil[ctr] = e;
        } //end catch

        //add code here
    } //end while
      //loop for miles
    /*********************************************************/
    std::cout << "GALLONS\n";
    for (ctr = 0; ctr < msize; ctr++)
    {
        bool ans = true;
        while (ans)
        {
            //add code here
            try
            {
                //add code here
                std::cout << "gallon[" << ctr << "]: ";
                std::cin >> gal[ctr];
                if(gal[ctr] < 5 || gal[ctr] > 25)
                   throw gal[ctr];

            } //end try
            catch (double e)
            {
                //add code here
                while(e < 5 || e > 25)
                {
                   std::cout << e << " is invalid!... 5-25 only\n";
                   std::cout << "reenter a new value\n";
                   std::cout << "gallons[" << ctr << "]: ";
                   std::cin >> e;
                }
                gal[ctr] = e;
            } //end catch

            //add code here
            ans = false;
        } //end while

    } //loop for gallons
    
    milPtr = &mil[0];
    galPtr = &gal[0];
    MilesPerrGallon(milPtr, galPtr, msize);
}

////////////////////////
void MilesPerrGallon(double *ptr1, double *ptr2, int sz)
{
    double mpg[sz];
    pointers mpgPtr;
    int index;
    //add code here
    std::cout << std::showpoint << std::fixed << std::setprecision(2);
    for(index = 0; index < sz; index++)
       mpg[index] = ptr1[index] / ptr2[index];
    
    mpgPtr = &mpg[0];
    
    std::cout << "miles\t/\tgallons\t\t=\tMPG\n";
    
    for(index = 0; index < sz; index++)
       std::cout << std::left << std::setw(7) << ptr1[index] << "\t\t" << ptr2[index] << "\t\t\t" << mpgPtr[index] << '\n';
}
