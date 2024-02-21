#include <iostream>
#include <string>
#include <vector>
#include <curl>

using namespace std;

bool f()
{
    return  true;
}

int main() {
    string s ="";
    vector<string> strings ={""};
    strings.push_back("f");
    std::cout << "Hello, World!" << std::endl;
    for (int i =0; i < strings.size();i++)
    {
        cout<<strings.at(i);
    }
    return 0;

}





