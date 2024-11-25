#include <iostream>
#include <vector>

using namespace std;

int state1(string w, int i, vector<char> &stk);
int state2(string w, int i, vector<char> &stk);
int state3(string w, int i, vector<char> &stk);
int state4(string w, int i, vector<char> &stk);
int state5(string w, int i, vector<char> &stk);
int state6(string w, int i, vector<char> &stk);

int main() {
    string w;
    vector<char> stk;
    cout << "Enter string: ";
    cin >> w;
    for(int i=0;i<w.length();i++){
        stk.push_back(w[i]);
    }
    state1(w, 0, stk); 
    return 0;
}                                  //i==head

int state1(string w, int i, vector<char> &stk) {
    cout << "\nState 1\n";
    
        if (stk[i] == 'a') {
            stk[i] = 'x';
            return state2(w, i + 1, stk);
        }
        
        if(stk[i] == 'x'){
            return state1(w, i + 1, stk);
        }
        
         if(stk[i] != 'x' && stk[i] != 'a'){
            return state6(w, i + 1, stk);
        }
        
        int flag=0;
    for(int i=0;i<w.length();i++) {
        if(stk[i]!='a' && stk[i]!='b' && stk[i]!='c'  ){
            flag=0;
        }else{
            flag=1;
            break;   
        }  
        }
        if(flag==0){
            cout<<"accepted";
        }else{
            cout<<"rejected";
        }
    return 0;
}

int state2(string w, int i, vector<char> &stk) {
    cout << "\nState 2\n";
    
        if (stk[i] == 'a' || stk[i] == 'y') {
            return state2(w, i + 1, stk);
        }
         if (stk[i] == 'b') {
             stk[i] = 'y';
            return state3(w, i + 1, stk);
        }
        
         if(stk[i] != 'b' && stk[i] != 'y' && stk[i] != 'a' ){
            return state6(w, i + 1, stk);
        }
         
    return 0;
}

int state3(string w, int i, vector<char> &stk) {
    cout << "\nState 3\n";
       
        if (stk[i] == 'b' || stk[i] == 'z') {
            return state3(w, i + 1, stk);
        }
        
         if (stk[i] == 'c') {
             stk[i] = 'z';
            return state4(w, i + 1, stk);
        }
        
        if(stk[i] != 'b' && stk[i] != 'z' && stk[i] != 'c' ){
            return state6(w, i + 1, stk);
        }
    return 0;
}

int state4(string w, int i, vector<char> &stk) {
    cout << "\nState 4\n";
    
    
        if (stk[i] == 'c' ) {
            return state5(w,i+1, stk);
        }else{
             int flag=0;
    for(int i=0;i<w.length();i++) {
        if(stk[i]!='a' && stk[i]!='b' && stk[i]!='c'  ){
            flag=0;
        }else{
            flag=1;
            break;
            
        }  
        }
        if(flag==0){
            cout<<"accepted";
        }else{
            cout<<"rejected";
        }
        }
     return i;
}

int state5(string w, int i, vector<char> &stk) {
    cout << "\nState 5\n";
   
     if (stk[i] == 'c' ) {
            return state5(w,i+1, stk);
        }
        
         if(i==w.length()){
            return state1(w,0, stk);
        }
        
        if(stk[i] != 'c' ){
            return state6(w, i + 1, stk);
        } 
    return 0;
}

int state6(string w, int i, vector<char> &stk) {
    cout << "\nState 6\n";
   
     cout<<"\nrejected";  
        
    return 0;
}


