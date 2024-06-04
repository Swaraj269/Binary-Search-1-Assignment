// Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
// maximum number of 1’s.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<< "Enter the size of the matrix: ";
    cin>>n;
    vector <vector<int>> v(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            v[i][j] = x;
        }
    }
    int max = INT_MIN;
    int maxidx = -1;
    for(int i=0; i<n; i++){
        int idx = -1;
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            int mid = lo + ((hi-lo)/2);
            if(v[i][mid]==1){
                if(v[i][mid-1]==1){
                    hi = mid-1;
                }
                else{
                    idx = mid;
                    break;
                }
            }
            else lo = mid+1;
        }
        if((n-1)-(idx-1)>max && idx != -1){
            max = (n-1)-(idx-1);
            maxidx = i;
        }
    }
    cout << "max no of 1 present in: " << maxidx << endl;
    return 0;
}