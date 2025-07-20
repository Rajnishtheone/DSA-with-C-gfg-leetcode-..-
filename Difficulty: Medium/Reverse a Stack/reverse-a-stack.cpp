// User function Template for C++

class Solution {
  public:
    void reversestack(stack<int> &stack,int num){
        if(stack.empty()){
            stack.push(num);
            return;
        }
        
        int top = stack.top();
        
        stack.pop();
        
        reversestack(stack,num);
        
        stack.push(top);
        
    }
    void Reverse(stack<int> &St) {
        if(St.empty())return;
        
        int top = St.top();
        
        St.pop();
        Reverse(St);
        
        reversestack(St,top);
    }
    
    
};