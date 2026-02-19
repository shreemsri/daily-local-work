#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    int c=0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
        c+=a;
    }
    cout<<c<<endl;
}