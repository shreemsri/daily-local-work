#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number of name-value pairs: ";
    cin >> n;

    vector<pair<string, int>> data;

    for(int i = 0; i < n; i++) {
        string name;
        int value;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter value: ";
        cin >> value;

        data.push_back({name, value});

    }
    

    auto comp = [](pair<string,int> a, pair<string,int> b) {
    return a.second < b.second;
    };

    sort(data.begin(), data.end(), comp);

    cout << "\nStored Name-Value Pairs:\n";
    for(int i = 0; i < data.size(); i++) {
        cout << "Name: " << data[i].first 
             << ", Value: " << data[i].second << endl;
    }
    int av=0;
    for(int i = 0; i < data.size(); i++) {
        av+=data[i].second;
    }
    av=av/n;
    cout<<"value greater than avg values are"<<endl;
    for(int i = 0; i < data.size(); i++) {
        if(data[i].second>=av){
            cout<<data[i].second<<endl;
        }
    }

    return 0;


    
}