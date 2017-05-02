// Feel free to modify this file
// or create a header file and link it in.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int iList[6] = {1, 3, 5, 17, 23, 98};
    //float fList[6] = {0.3, 1.2, 11.3, 17.1, 18.9, 97.6};
    //char cList[6] = {a, c, f, j, o, z};

    int iAns = binary_search(iList, 0, 5, 17);
    //int fAns = binary_search(fList, 0, 5, ??);
    //int cAns = binary_search(cList, 0, 5, ??);

    cout << "Integer answer at index " << iAns << endl;
    //cout << "Float answer at index " << fAns << endl;
    //cout << "Char answer at index " << cAns << endl;

    return 0;
}