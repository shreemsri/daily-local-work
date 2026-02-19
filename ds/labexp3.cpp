#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n-1];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }
    int su=(n*(1+n))/2;
    int s=0;
    for(int i=0; i<n-1; i++){
            s+=arr[i];
        }
    cout<<"the missing no is: "<<endl;
    cout<<su-s;


}