/*The structure of the class is
class SortedStack{
public:
    stack<int> s;
    void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */
void insertinstack(stack<int>&stack,int num );
void SortedStack ::sort() {
    // Your code here
    
    if(s.empty())return;
    
    int top = s.top();
    
    s.pop();
    
    sort();
    
    insertinstack(s,top);
}

void insertinstack(stack<int>&stack,int num ){
    if(stack.empty() || stack.top() <= num){
        stack.push(num);
        return;
    }
    
    int top = stack.top();
    stack.pop();
    insertinstack(stack,num);
    stack.push(top);
}








