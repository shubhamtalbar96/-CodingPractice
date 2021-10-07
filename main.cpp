#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// Method to find the next greater element in an input vector
vector<int> nextGreaterElement(vector<int> &input) {
    
    vector<int> result(input.size(), -1);
    stack<int> keep;
    
    keep.push(0);
    
    for(int i=1; i<input.size(); i++) {
        
        while(!keep.empty() && input[i] > input[keep.top()]) {
            result[keep.top()] = input[i];
            keep.pop();
        }
        
        keep.push(i);
    }
    
    return result;
}


int main()
{
    
    
    // Find the Next Greater Element
    
    vector<int> input {4, 5, 2, 25, 13, 7, 6, 12};
    vector<int> nge = nextGreaterElement(input);
    
    
    for(auto elem : nge) {
        cout << elem << " ";
    }
    cout << endl;
    
    // ------------------------------
    
    
    
    
}
