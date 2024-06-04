// Given a sorted binary array, efficiently count the total number of 1’s in it.

#include <iostream>
using namespace std;
int main(){
    int arr[] = { 0,0,0,0,1,1,1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
    int lo = 0;
    int hi = n-1;
    int idx = -1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + ((hi-lo)/2);
        if(arr[mid]==1){
            if(arr[mid-1]==1){
                hi = mid-1;
            }
            else{
                idx = mid;
                break;
            }
        }
        else lo = mid+1;
    }
    cout<< "Number of 1 is: "<< (n-1)-(idx-1);
    return 0;
}