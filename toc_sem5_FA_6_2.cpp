//ques-6(1)
#include <iostream>
using namespace std;

int state1(string w, int i);
int state2(string w, int i);
int state3(string w, int i);
int state4(string w, int i);
int state5(string w, int i);
int state10(string w, int i);
int state16(string w, int i);

int main(){
	string w; 
	cout<<"enter string : ";
	cin>>w;
	state1(w,0);
}

int state1(string w, int i){
	cout<<"\nstate 1\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='a'){
			state2(w,i+1);
		}
		if(w[i]=='b'){
			state3(w,i+1);
		}
	
	}
}


int state2(string w, int i){
	cout<<"\nstate 2\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		if(w[i]=='a'){
			state4(w,i+1);
		}
		if(w[i]=='b'){
			state5(w,i+1);
		}
	}
}


int state3(string w, int i){
	cout<<"\nstate 3\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state3(w,i+1);
		}
		if(w[i]=='a'){
			state3(w,i+1);
		}
		
		
	}
}


int state4(string w, int i){
	cout<<"\nstate 4\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state4(w,i+1);
		}
		
			
		if(w[i]=='a'){
			state4(w,i+1);
		}
	}
}

int state5(string w, int i){
	cout<<"\nstate 5\n";
	
	if(i==w.length()){
		cout<<"\nstring is accepted \n";
		return 0;
	}else{
		
		if(w[i]=='a'){
			state10(w,i+1);
		}
		if(w[i]=='b'){
			state5(w,i+1);
		}
	}
}


int state10(string w, int i){
	cout<<"\nstate 10\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state16(w,i+1);
		}
		
			
		if(w[i]=='a'){
			state10(w,i+1);
		}
	}
}


int state16(string w, int i){
	cout<<"\nstate 16\n";
	
	if(i==w.length()){
		cout<<"\nstring is accepted \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state5(w,i+1);
		}
		
			
		if(w[i]=='a'){
			state10(w,i+1);
		}
	}
}