// You have n coins and you want to build a staircase with these coins. The staircase consists of k
// rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of coins: ";
    cin>>n;
    bool flag = false;
    int lo = 0;
    int hi = n;
    while(lo<=hi){
        int mid = lo + ((hi-lo)/2);
        if(((mid*(mid+1))/2)== n){
            cout<<"minimum number of rows will be filled is: "<<mid;
            flag = true;
            break;
        }
        else if(((mid*(mid+1))/2) > n) hi = mid-1;
        else lo = mid+1;
    }
    if(flag == false) cout<< "minimum number of rows will be filled is: "<<hi<<endl;
    return 0;
}