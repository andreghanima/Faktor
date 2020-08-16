#include <iostream>
using namespace std;

int main()
{
    int totalCitations,numArticles,impactFactor;
    std::cin >> numArticles >> impactFactor;

    std::cout << (numArticles * (impactFactor-1))+1; 
}
