// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + ((hi-lo)/2);
        if(arr[mid]==(mid+1)){
            if(arr[mid+1]==arr[mid]){
                cout<< arr[mid];
                flag = true;
                break;
            }
            else{
                lo = mid+1;
            }
        }
        else{
            if(arr[mid-1]==arr[mid]){
                cout<< arr[mid];
                flag = true;
                break;
            }
            else{
                hi = mid-1;
            }
        }
    }
    if(flag==false) cout<<"-1";
    return 0;
}