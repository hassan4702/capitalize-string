#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
void print(vector<char> input)
{
    for (int i = 0; i < input.size(); i++) {
        if (input.at(i) >= 97 && input.at(i) <= 122) {
            input.at(i) = input.at(i) - 32;
        }
        cout << input.at(i);
    }
}

void StringToArray() {
    string Data;

    cout << "Enter word : ";
    cin >> Data;
    vector<char>v(Data.begin(),Data.end());
    print(v);
    
    
}

int main()
{
     
    
    StringToArray();
    

}
