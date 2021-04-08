#include<bits/stdc++.h>
using namespace std;
int main(){
//     string s ="ndkaADfnks";
//     transform(s.begin(),s.end(),s.begin(),::toupper);// important command
//     cout<<s<<endl;
//     string s1 ="43521";
//     sort(s1.begin(),s1.end(),greater<int>());// important command
// cout<<s1<<endl;
string s2 = "cabagnca";
int freq[26];
for(int i=0;i<26;i++){
    freq[i]=0;
}
for(int i;i<s2.size();i++){
    freq[s2[i]-'a']++;
}
char ans;
int maxf=0;
for(int i=0;i<26;i++){
    if(freq[i]>maxf){
        freq[i]=maxf;
        ans= i+'a';
    }
}


cout<<maxf<<" "<<ans<<endl;


return 0;
}
