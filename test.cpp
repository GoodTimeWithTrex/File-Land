#include <iostream>
#include <string>
using namespace std;

int thing()
{
    int answer;
    std::cout << "\nwhat is 1 + 1? \n";
    std::cin >> answer;
    return answer;
}
string other(int i)
{
    if (i == 2)
    {   
        string x = "correct";
        return x;
    }   
    if (i < 2)
    {
        string x = "higher";
        return x;
    }
    if (i > 2)
    {
        string x = "lower";
        return x;
    }
}
int main()
{
    while(true)
    {
        int y = thing();
        string t = other(y);
        std::cout << ("\n%s", t);
        if(t == "correct")
        {
            break;
        }
    }
    return 0;
}