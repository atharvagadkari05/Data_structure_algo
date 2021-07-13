#include <iostream>
#include <stack>
using namespace std;

string reverseString(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }

        st.push(word);

    }
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
};

int main()
{
    string s = "how you doin ";
    reverseString(s);
}