//ques-3
#include <iostream>
using namespace std;

int state1(string w, int i);
int state2(string w, int i);
int state3(string w, int i);
int state4(string w, int i);
int state5(string w, int i);
int state6(string w, int i);
int state7(string w, int i);
int state8(string w, int i);
int state9(string w, int i);
int state10(string w, int i);
int state11(string w, int i);
int state12(string w, int i);
int state13(string w, int i);
int state14(string w, int i);
int state15(string w, int i);

int main(){
	string w; 
	cout<<"enter string : ";
	cin>>w;
	state1(w,0);
}

int state1(string w, int i){
	//cout<<"\nstate 1\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejcted \n";
		return 0;
	}else{
		
		if(w[i]=='a'){
			state2(w,i+1);
		}
		if(w[i]=='b'){
			state9(w,i+1);
		}
	
	}
}


int state2(string w, int i){
	//cout<<"\nstate 2\n";
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		if(w[i]=='a'){
			state3(w,i+1);
		}
		if(w[i]=='b'){
			state6(w,i+1);
		}
	}
}

int state3(string w, int i){
	//cout<<"\nstate 3\n";
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state3(w,i+1);
		}
		if(w[i]=='a'){
			state4(w,i+1);
		}
	}
}


int state4(string w, int i){
	//cout<<"\nstate 4\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		if(w[i]=='b'){
			state3(w,i+1);
		}	
		if(w[i]=='a'){
			state5(w,i+1);
		}
	}
}


int state5(string w, int i){
	//cout<<"\nstate 5\n";
	
	if(i==w.length()){
		cout<<"\nstring is accepted \n";
		return 0;
	}else{
		
		if(w[i]=='a'){
			state5(w,i+1);
		}
		if(w[i]=='b'){
			state3(w,i+1);
		}
	}
}


int state6(string w, int i){
	//cout<<"\nstate 6\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state6(w,i+1);
		}
		
			
		if(w[i]=='a'){
			state7(w,i+1);
		}
		
	}
}


int state7(string w, int i){
	//cout<<"\nstate 7\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state8(w,i+1);
		}
		
			
		if(w[i]=='a'){
			state7(w,i+1);
		}
		
	}
}


int state8(string w, int i){
	//cout<<"\nstate 8\n";
	
	if(i==w.length()){
		cout<<"\nstring is accepted \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state6(w,i+1);
		}
		
			
		if(w[i]=='a'){
			state7(w,i+1);
		}
		
	}
}

int state9(string w, int i){
	//cout<<"\nstate 9\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state13(w,i+1);
		}
		
			
		if(w[i]=='a'){
			state10(w,i+1);
		}
		
	}
}

int state10(string w, int i){
	//cout<<"\nstate 10\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state11(w,i+1);
		}
		
			
		if(w[i]=='a'){
			state10(w,i+1);
		}
		
	}
}



int state11(string w, int i){
	//cout<<"\nstate 11\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state11(w,i+1);
		}
		
		if(w[i]=='a'){
			state12(w,i+1);
		}
		
	}
}

int state12(string w, int i){
	//cout<<"\nstate 12\n";
	
	if(i==w.length()){
		cout<<"\nstring is accepted \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state11(w,i+1);
		}
		
			
		if(w[i]=='a'){
			state10(w,i+1);
		}
		
	}
}

int state13(string w, int i){
	//cout<<"\nstate 13\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state14(w,i+1);
		}
		
			
		if(w[i]=='a'){
			state13(w,i+1);
		}
		
	}
}



int state14(string w, int i){
	//cout<<"\nstate 14\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state15(w,i+1);
		}
		
			
		if(w[i]=='a'){
			state13(w,i+1);
		}
		
	}
}


int state15(string w, int i){
	//cout<<"\nstate 15\n";
	
	if(i==w.length()){
		cout<<"\nstring is accepted \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state15(w,i+1);
		}
		
			
		if(w[i]=='a'){
			state13(w,i+1);
		}
		
	}
}

