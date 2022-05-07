#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0;
    while(true)
    /*
    Comment block
    */
    {
        i++;
        std::cout << i << "\n";
        if(i == 76)
        {
            break;
        }
    }
    return 0;
}