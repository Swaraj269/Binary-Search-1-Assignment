// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number to find out the number is perfect square or not: ";
    cin>>n;
    int lo = 0;
    int hi = n;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + ((hi-lo)/2);
        if(mid*mid == n){
            cout<<n<<" is a perfect square";
            flag = true;
            break;
        }
        else if(mid*mid > n) hi = mid-1;
        else lo = mid+1;
    }
    if(flag == false){
        cout<< n << " is not a perfect square";
    }
    return 0;
}