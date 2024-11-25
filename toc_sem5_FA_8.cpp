#include <iostream>
#include <stack>
using namespace std;


int state1(string w, int i, stack<char> &stk);
int state2(string w, int i, stack<char> &stk);
int state3(string w, int i, stack<char> &stk);
int state4(string w, int i, stack<char> &stk);
int state5(string w, int i, stack<char> &stk);

int main() {
    string w;
    stack<char> stk;
    stk.push('0'); 
    cout << "Enter string: ";
    cin >> w;
    state1(w, 0, stk); 
    return 0;
}

int state1(string w, int i, stack<char> &stk) {
    cout << "\nState 1\n";
    if (i == w.length()+1) {
        cout << "\nString is rejected\n";
        return 0;
    } else {
        if ((w[i] == 'a' || w[i] == 'b') && stk.top() == '0') {
            stk.push(w[i]);
            return state2(w, i + 1, stk);
        }else{
            return state5(w, i + 1, stk);
        }
        }

    return 0;
}

int state2(string w, int i, stack<char> &stk) {
    cout << "\nState 2\n";
    if (i == w.length()+1) {
        cout << "\nString is rejected\n";
        return 0;
    } else {
        if (w[i] == 'a' || w[i] == 'b') {
            stk.push(w[i]);
            return state2(w, i + 1, stk);
        }
        
         if ((w[i] != 'a' && w[i] != 'b')) {
            return state3(w, i + 1, stk);
        }
        
    }
    return 0;
}

int state3(string w, int i, stack<char> &stk) {
    cout << "\nState 3\n";
    if (i == w.length()+1) {
        cout << "\nString is rejected\n";
        return 0;
    } else {
       
        if (w[i] == 'a' || w[i] == 'b') {
            if(w[i]==stk.top()){
                stk.pop();
                return state3(w, i+1, stk);
            }else{
                return state5(w, i+1, stk);
            }
            }
            
            if(i == w.length() && stk.top()=='0'){
                return state4(w, i+1, stk);
            }else{
                return state5(w, i+1, stk);
            }
        }
    return 0;
}

int state4(string w, int i, stack<char> &stk) {
    cout << "\nState 4\n";
    
    if (i == w.length()+1 && stk.top()=='0') {
        cout << "\nString is accepted\n";
        return 1;
    }else{
        return state5(w, i + 1, stk);
    }
        
    return 0;
}

int state5(string w, int i, stack<char> &stk) {
    cout << "\nState 5\n";
   
    if (i == w.length()+1) {
        cout << "\nString is rejected\n";
        return 0;
    }else{
        return state5(w, i + 1, stk);
    }
        
    return 0;
}
