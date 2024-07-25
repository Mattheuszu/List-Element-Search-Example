/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <list>

int main()
{
    std::list<int> numbers{10,20,30,40};
    for(auto i = numbers.begin(); i != numbers.end(); ++i){
        if(*i == 20){
            std::cout << "True" << std::endl;
        }
        else {
            std::cout << "False" << std::endl;
        }
    }

    return 0;
}