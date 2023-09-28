
bool isValidParenthesis(string s)
{
    // Write your code here.

    stack<char>si;
    for(int i=0;i<s.length();i++){
        char ch=s[i];

        if(ch=='{'||ch=='('||ch=='['){
            si.push(ch);
        }
        else{
            if (!si.empty()) {
              char top = si.top();
              if ((ch == '}' && top == '{') || (ch == ')' && top == '(') ||
                  (ch == ']' && top == '[')) {
                si.pop();
              }
            } else {
              return false;
            }
        }
    }
    if(si.empty()){
        return true;
    }
    else{
        return false;
    }

}
