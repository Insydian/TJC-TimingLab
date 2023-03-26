#include <istream>
#include <list>
#include <iostream>
#include <vector>
#include "Timing.h"

int main()
{
    {
        Timer a;
        std::list<int> intList;
        for(int i = 0; i < 100; i++)
        {
            intList.push_back(i);
        }
        Timer b;
        intList.pop_back();
        intList.erase(intList.begin());
        std::cout << "To create a list with 100 elements it took" << std::endl;
        std::cout << "To pop back and erase it took" << std::endl;
 
        
    }
    Timer a;
    std::vector<int> vecInt;
    for(int i = 0; i < 100; i++)
    {
        vecInt.push_back(i);
    }
    Timer b;
    vecInt.pop_back();
    vecInt.erase(vecInt.begin());
    std::cout << "To create a vector with 100 elements it took" << std::endl;
    std::cout << "To pop back and erase it took" << std::endl;

}
// Output:
/* To pop back and erase it took
In milliseconds: 0.056693
In milliseconds: 0.111772
To create a vector with 100 elements it took
To pop back and erase it took
In milliseconds: 0.005092
In milliseconds: 0.019619
*/
//It seems to be that the vector is faster at the three operations I performed on them.
//Nothing seems to be much faster.
