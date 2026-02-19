#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n+3];
    cout<<"enters the elements of array \n ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int v, p;
    cout<<"enter the value and index\n";
    cin>>v>>p;
    for(int i=n; i>p; i--){
        arr[i]=arr[i+1];

    }
    arr[p]=v;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }



}