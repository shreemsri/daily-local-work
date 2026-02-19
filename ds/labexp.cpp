#include<iostream>
using namespace std;
int main(){
    int n,s,e;
    cin>>n;
    int a[n+10];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
        
            if(a[j] > a[j+1]){
                int va = a[j];
                a[j] = a[j+1];
                a[j+1] = va;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i];
    }
    cin>>s;
    for(int i=n; i<s+n; i++){
        cin>>a[i];
    }
     for(int i=0; i<n+s; i++){
        for(int j=0; j<n+s-i-1; j++){
        
            if(a[j] > a[j+1]){
                int va = a[j];
                a[j] = a[j+1];
                a[j+1] = va;
            }
        }
    }
    
    for(int i=0; i<n+s; i++){
        cout<<a[i];
    }
    



}
/*
#include<iostream>
using namespace std;
int main(){
    int n,s,t;
    cout<<"enter the size of array";
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    t=n;
    cout<<"enter the element to be inserted"<<endl;
    cin>>s;
    for(int i=0;i<n;i++){
        if(a[i]>s){
            t=i;
            break;
        }
    }
    for(int j=n;j>t;j--){
        a[j]=a[j-1];
    }
    a[t]=s;
    for(int i=0;i<(n+1);i++){
        cout<<a[i]<<endl;
    }
}*/