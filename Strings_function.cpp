#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
 // FUNCTIONS OF STRING :
 string s1;
 getline(cin,s1); // getline function to enter with space
  cout<<s1<<endl;
s1.clear();
  string s2="Fam";
  string s3="ily";
  s2.append(s3);
  cout<<s2<<endl; // append function act as---> s2=s2+s3;
  s2.clear();
  s3.clear();// clear function 
  string s4="abc";
  string s5="abc";
  cout<<s4.compare(s5)<<endl; /// if both srings are equal then compare string will give you 0.
if(s4.compare(s5)==0){
    cout<<"strings are equal"<<endl;
}
string s6="nincompoop";
s6.erase(3,3);/// we erased some elements of the string
cout<<s6<<endl;
s6.find("poop");
s6.insert(2,"lol");// we can insert anything btw tthem
cout<<s6<<endl;

cout<<s6.length()<<endl; /// this function helps to determine the length of string
 
 string s7= s6.substr(6,2);// we added another string
 cout<<s7<<endl;

string s8="786";
int x= stoi(s8);  // stoi converts string to integer 
cout<<x+1<<endl;

int x =789;
string s9=to_string(x);// to_string converts integer to string
cout<<s9+"7"<<endl; // here output will be 7897

 string s = "xnsanjnjcnbjdecscbnsdbc";
sort(s.begin(),s.end());
cout<<s<<endl;   // sorting function.


}
