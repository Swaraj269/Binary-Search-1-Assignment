// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
// does not exist return -1.

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,4,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
    int x;
    cout<<"Enter the element to be searched: ";
    cin>>x;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + ((hi-lo)/2);
        if(arr[mid]==x){
            if(arr[mid+1]==x){
                lo = mid+1;
            }
            else{
                cout<<mid;
                flag = true;
                break;
            }
        }
        else if(arr[mid]>x) hi = mid-1;
        else lo = mid+1;
    }
    if(flag==false) cout<<"-1";
    return 0;
}