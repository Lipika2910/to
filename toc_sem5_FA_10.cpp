#include <iostream>
#include <vector>

using namespace std;



int state1(string w, int i, vector<char> &stk);
int state2(string w, int i, vector<char> &stk);


int main() {
    string w;
    vector<char> stk;
    cout << "Enter string: ";
    cin >> w;
    for(int i=0;i<w.length();i++){
        stk.push_back(w[i]);
    }
 
    state1(w, w.length()-1, stk); 
    return 0;
}                                  //i==head

int state1(string w, int i, vector<char> &stk) {
   
    
      if(i==-1){
           return state2(w,0, stk);
       }
    
        if (stk[i] == '0' && i==w.length()-1) {
            stk[i] = '1';
            return state2(w, 0, stk);
        }
        
        if(stk[i] == '1' && i==0){
            stk[i] = '0';
            stk.insert(stk.begin(),'1');
            return state2(w,0, stk);
        }
        
        if(stk[i] == '1'){
            stk[i] = '0';
            return state1(w, i-1, stk);
        }
        
        if(stk[i] == '0'){
            stk[i] = '1';
            return state2(w, i-1, stk);
        }
      
    return 0;
}

int state2(string w, int i, vector<char> &stk) {
    cout<<"\n";
    for(int i=0;i<w.length()+1;i++){
        cout<<stk[i];
    }
    
    return 0;
}
