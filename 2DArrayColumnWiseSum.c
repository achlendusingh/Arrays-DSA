#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[3][4]={{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}};
    for(int j=0;j<4;j++)
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
           sum+=arr[i][j]; 
        }
        cout<<"The sum of column "<<j<<" is "<<sum<<endl;
    }

    return 0;
}
