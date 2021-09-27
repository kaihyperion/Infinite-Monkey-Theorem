#include <string>
#include <random>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string strGenerator() {
    char arrayOfChar[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
    
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 27);
    int count = 0;
    string str;
    
    bool flag = true;
    for (count = 0; count < 28; count++) {
        
        int random_number = dis(gen);
        str += arrayOfChar[random_number];
    }
    cout << str << endl;
    return str;
}

int main() {
    string answer = "methinks it is like a weasel";
    char arrayOfAns[] = {'m', 'e', 't','h','i','n','k','s',' ','i','t',' ','i','s',' ','l','i','k','e', ' ', 'a',' ','w','e','a','s','l','e'};

    int count = 0;
    for (count = 0; count < 10000000; count++){
        if (strGenerator() == answer){
            cout << count << endl;
            return count;
        } else if (count == 999){
            cout << "none found" << endl;
        }
    }    
    return 0;
}

