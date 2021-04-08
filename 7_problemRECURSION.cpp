#include<iostream>
using namespace std ;
// void reverse(string s){
//     if(s.length()==0){
//         return;
//     }
//     string ros = s.substr(1);
//         reverse(ros);
//     cout<<s[0];
// }



// int main(){
//     string s;
//     getline(cin,s);
//     reverse(s);
//     return 0;
// }




/// pi replace QUESTION
// void pi(string s){
    
//      if(s.length()==0){
//           return;
//       }  
    
//     if(s[0]=='p' & s[1]=='i'){
//         cout<<3.14;
//         pi(s.substr(2));
//     }
//     else{
//         cout<<s[0];
//         pi(s.substr(1));
//     }
       
// }

// int main(){
//     string s;
//     cin>>s;
// pi(s);

// }


/// TOWER OF HANOI
// void towerofHanoi(int n, char src,char des,char helper){

// if(n==0)
// {
//     return;
// }
// towerofHanoi(n-1,src,helper,des);
// cout<<"move the block from"<<src<<"to"<<des<<endl;
// towerofHanoi( n-1,helper,des,src);


// }



// int main(){
// towerofHanoi(3,'A','C','B');

// }





//MOVE ALL X IN THE LAST OF THE SRTING



// string findx(string s){
    
    
//     string ans =findx(s.substr(1));
//     char ch =s[0];
//     if(ch=='x'){
//         return (ans+ch);

//     }
//     else{
//         return (ch+ans);
//     }
//     if(s.length()==0){
//         return "";
//     }
// }



// int main(){
//     string s;
//     cin>>s;
// cout<<findx(s)<<endl;
// return 0;
// }
 



 // remove duplicate

 string duplicate(string s){
     if(s.length()==0){
         return "";
     }
     
     char ch = s[0];
    string ans= duplicate(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    else{
        return (ch+ans);
    }
      }
 
 
 
 int main(){
string s= "aaaabbbeeeeeejjk";
cout<<duplicate(s)<<endl;


 }



 