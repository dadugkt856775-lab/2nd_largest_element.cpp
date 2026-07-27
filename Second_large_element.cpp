#include<iostream>
using namespace std;
int main(){
    int arr[ ] = {2,4,10,5,7,8,12,3,1};
    int n = sizeof(arr)/4;
    int mx = arr[0];
    for(int i=0; i<=n; i++){
        mx = max(mx,arr[i]);
    }
    int smax = arr[0];
    for(int i=0; i<=n; i++){
        if(arr[i]!=mx) smax = max(smax,arr[i]);
    }
    cout<<smax;
}