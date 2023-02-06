#include <iostream>
using namespace std;

int main(){

    string c;
    cin>>c;

    if(int(c[0])>=65 && int(c[0])<=90)
    {
        cout<<c;
    }
    else{
        c[0] = int(c[0])-32;
        cout<<c;
    }
    return 0;
}
