#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no of elments in array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the aaray"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int c=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<"the repeting element is "<<arr[i]<<endl;
                c=j;


            }
        }
        
    }
    for (int i = c; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    for(int i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }

}
