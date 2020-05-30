#include <iostream>
int main()
{
    using namespace std;
    int reftoarray[] = {10, 11};
    int var = 1;
    reftoarray[var - 1] = var = 2;
    cout << reftoarray[0] << ' ' << reftoarray[1] << endl; 
    //cin.get();
    //cin.get();  
    return 0;
    }
