//ques-6(1)
#include <iostream>
using namespace std;

int state1(string w, int i);
int state2(string w, int i);
int state3(string w, int i);
int state4(string w, int i);
int stateY5X2(string w, int i);
int stateX2Y5X3(string w, int i);
int stateY3X4(string w, int i);
int stateY4X3(string w, int i);
int stateY3X1(string w, int i);

int state6(string w, int i);
int state7(string w, int i);
int stateY8X2(string w, int i);
int stateY6X1(string w, int i);
int stateY7X3(string w, int i);
int stateY8X4X2(string w, int i);
int stateY6X4(string w, int i);


int state10(string w, int i);
int state9(string w, int i);
int state13(string w, int i);
int state14(string w, int i);
int stateY15X2(string w, int i);
int stateY13X3(string w, int i);
int stateY14X4(string w, int i);
int stateY15Y2X1(string w, int i);
int stateY15X2X1(string w, int i);


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
			state9(w,i+1);
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
			state3(w,i+1);
		}
		if(w[i]=='b'){
			state6(w,i+1);
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
			state4(w,i+1);
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
			state3(w,i+1);
		}
		
			
		if(w[i]=='a'){
			stateY5X2(w,i+1);
		}
		
	}
}


int stateY5X2(string w, int i){
	cout<<"\nstate 5\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='a'){
			stateX2Y5X3(w,i+1);
		}
		if(w[i]=='b'){
			stateY3X1(w,i+1);
		}
	}
}

int stateX2Y5X3(string w, int i){
	cout<<"\nstate X2Y5X3\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY3X4(w,i+1);
		}
			
		if(w[i]=='a'){
			stateX2Y5X3(w,i+1);
		}
	}
}

int stateY3X4(string w, int i){
	cout<<"\nstate Y3X4\n";
	
	if(i==w.length()){
		cout<<"\nstring is accepted \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY3X4(w,i+1);
		}
			
		if(w[i]=='a'){
			stateY4X3(w,i+1);
		}
	}
}

int stateY4X3(string w, int i){
	cout<<"\nstate Y4X3\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY3X4(w,i+1);
		}
		
			
		if(w[i]=='a'){
			stateX2Y5X3(w,i+1);
		}
	}
}



int stateY3X1(string w, int i){
	cout<<"\nstate Y3X1\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY3X1(w,i+1);
		}
		
			
		if(w[i]=='a'){
			stateY3X1(w,i+1);
		}
	}
}

int state6(string w, int i){
	cout<<"\nstate 6\n";
	
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
	cout<<"\nstate 7\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY8X2(w,i+1);
		}
		if(w[i]=='a'){
			state7(w,i+1);
		}
	}
}

int stateY8X2(string w, int i){
	cout<<"\nstate Y8X2\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY6X1(w,i+1);
		}
		if(w[i]=='a'){
			stateY7X3(w,i+1);
		}
	}
}



int stateY6X1(string w, int i){
	cout<<"\nstate X6X1\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY6X1(w,i+1);
		}
			
		if(w[i]=='a'){
			stateY6X1(w,i+1);
		}
	}
}


int stateY7X3(string w, int i){
	cout<<"\nstate Y7X3\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY8X4X2(w,i+1);
		}
			
		if(w[i]=='a'){
			stateY7X3(w,i+1);
		}
	}
}

int stateY8X4X2(string w, int i){
	cout<<"\nstate Y8X4X2\n";
	
	if(i==w.length()){
		cout<<"\nstring is accepted \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY6X4(w,i+1);
		}	
		if(w[i]=='a'){
			stateY7X3(w,i+1);
		}
	}
}

int stateY6X4(string w, int i){
	cout<<"\nstate Y6X4\n";
	
	if(i==w.length()){
		cout<<"\nstring is accepted \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY6X4(w,i+1);
		}
		if(w[i]=='a'){
			stateY7X3(w,i+1);
		}
	}
}

int state9(string w, int i){
	cout<<"\nstate 9\n";
	
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
	cout<<"\nstate 10\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			state10(w,i+1);
		}	
		if(w[i]=='a'){
			state10(w,i+1);
		}
	}
}

int state13(string w, int i){
	cout<<"\nstate 13\n";
	
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
	cout<<"\nstate 14\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY15X2(w,i+1);
		}
		if(w[i]=='a'){
			state9(w,i+1);
		}
	}
}

int stateY15X2(string w, int i){
	cout<<"\nstate Y15X2\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY15Y2X1(w,i+1);
		}	
		if(w[i]=='a'){
			stateY13X3(w,i+1);
		}
	}
}


int stateY15Y2X1(string w, int i){
	cout<<"\nstate Y15X2X1\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY15X2X1(w,i+1);
		}
		if(w[i]=='a'){
			stateY15X2X1(w,i+1);
		}
	}
}

int stateY13X3(string w, int i){
	cout<<"\nstate Y13X3\n";
	
	if(i==w.length()){
		cout<<"\nstring is rejected \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY14X4(w,i+1);
		}	
		if(w[i]=='a'){
			stateY13X3(w,i+1);
		}
	}
}

int stateY14X4(string w, int i){
	cout<<"\nstate Y14X4\n";
	
	if(i==w.length()){
		cout<<"\nstring is accepted \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY15X2X1(w,i+1);
		}
		if(w[i]=='a'){
			stateY13X3(w,i+1);
		}

	}
}

int stateY15X2X1(string w, int i){
	cout<<"\nstate Y15X2X1\n";
	
	if(i==w.length()){
		cout<<"\nstring is accepted \n";
		return 0;
	}else{
		
		if(w[i]=='b'){
			stateY15X2X1(w,i+1);
		}
		
			
		if(w[i]=='a'){
			stateY13X3(w,i+1);
		}
		
	}
}



