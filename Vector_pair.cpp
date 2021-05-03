#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    // Initialising vector

    vector <int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(6); // push back just pushes a number to the last 

// printing of vector
    for(int i=0;i<v.size();i++){
cout<<v[i];

    }
    // Another imp method
    for(auto element:v){
        cout<<element<<endl;
    }

    v.pop_back(); // output will be 1 2

    vector<int> v2 (3,50);
    // This will give vector of size 3 and each element will be 50.


swap(v,v2); // it will swap the elements of v and v2

sort(v.begin(),v.end());





// PAIRS

pair <int,char> p;

// this stores two entities
p.first=1;
p.second='x';
cout<<p.first<<endl;





}


