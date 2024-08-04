#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isopen(char ch)
{
    return ch == '{' || ch == '(' || ch == '[';
}

bool ispair(char open, char close)
{
    return open == '{' && close == '}' ||
        open == '(' && close == ')' ||
        open == '[' && close == ']';
}

bool isbalanced(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isopen(s[i]))
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty() && ispair(st.top(), s[i]))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}

int Stack()
{
    //stack<int> st;
    //st.push(2);
    //st.push(7);
    //cout << st.top(); // 7
    //st.pop();
    //st.push(3);
    //st.push(4);
    //cout << st.top(); // 4
    //st.pop(); 
    //cout << st.top(); // 3
    //st.pop();

    // (){}[]
    string s1 = "()({[]}())"; // true
    string s2 = "{}"; // true
    string s3 = "}{"; // false
    string s4 = ""; // true
    string s5 = "(()"; // false
    string s6 = "())"; // false
    string s7 = "[(])"; // false
    cout << isbalanced(s1) << endl; // 1
    cout << isbalanced(s2) << endl; // 1
    cout << isbalanced(s3) << endl; // 0
    cout << isbalanced(s4) << endl; // 1
    cout << isbalanced(s5) << endl; // 0
    cout << isbalanced(s6) << endl; // 0
    cout << isbalanced(s7) << endl; // 0

    cout << "Stack " << endl; // 0
    return 0;
}