class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> s;
        for(const string& token: tokens){
            if(token=="+" || token=="-" || token=="*" || token=="/"){
                long b=s.top(); s.pop();
                long a=s.top(); s.pop();
                if(token=="+"){
                    s.push(a+b);
                }else if(token=="-"){
                    s.push(a-b);
                } else if(token=="*"){
                    s.push(a*b);
                } else if(token=="/"){
                    s.push(a/b);
                }
            } else {
                s.push(stol(token));
            }
        }
        return s.top();
    }
    
};
