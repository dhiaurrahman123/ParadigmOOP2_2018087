

#include <iostream>
using namespace std;

class orang {
public:
    int umur;
    orang(int pUmur) :
        umur(pUmur) {
        cout << "orang dibuat dengan umur" << umur << endl;
    }
};
class pekerja :public orang {

};
int main()
{
    std::cout << "Hello World!\n";
}

