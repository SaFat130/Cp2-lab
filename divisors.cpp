#include <iostream>
using namespace std;
int main()
{
    int n = 12;
    int count = 0;
    int i;
    for (i=1;i<=n;i++){
        if (n%i==0){
            count++;
            cout << i <<" ";
        }

    }
    cout<<endl;
    cout <<"Total divisor: "<< count << endl;
    return 0;
}
