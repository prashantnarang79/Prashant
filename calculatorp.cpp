#include<iostream>
using namespace std;

int main(){	
	string op_type;
	cout << "Enter operation type (trig or no_trig or exp): ";
	cin >> op_type;
    
    if (op_type == "no_trig"){
		double a;
 	   cout << "Enter first number: ";
 	   cin >> a;
    
 	   double b;
 	   cout << "Enter second number: ";
  	  cin >> b;
    
 	   string command;
 	   cout << "Enter operation ";
  	  cin >> command;
    
  	  if (command == "/"){
    	cout << a/b;
	    }
   
	    else if (command == "*"){
    	cout << a*b;
 	   }
   
 	   else if (command == "+"){
    	cout << a+b;
	    }
   
	    else if (command == "-"){
        	if (a>b){
    			cout << a-b;
            }
            if (a<b){
            	cout << b-a;
            }    
	    }
   
   
    }
    
    else if (op_type == "trig"){
    	string func;
        cout << "Enter function(sin/cos/tan): ";
        cin >> func;
        
        double x;
        cout << "Enter value(in radians): ";
        cin >> x;
        
        if (func == "sin"){
        cout << (x) - ((x*x*x)/(3*2*1)) + ((x*x*x*x*x)/(5*4*3*2*1)) - ((x*x*x*x*x*x*x)/(7*6*5*4*3*2*1));
        }
        
        if (func == "cos"){
        cout << (1) - ((x*x)/(2*1)) + ((x*x*x*x)/(4*3*2*1)) - ((x*x*x*x*x*x)/(6*5*4*3*2*1));
        }
        
        if (func == "tan"){
        cout << (x) + ((x*x*x)/(3)) + ((2*x*x*x*x*x)/(15));
        }
    }
        
    else if (op_type == "exp"){
        int power;
        cout << "Enter power: ";
        cin >> power;
        
        int q;
        cout << "Enter number: ";
        cin >> q;
        
        int answer;
        answer = 1;
        
        for (int i=1; i<= power; i++){
        	answer = answer*q;
        }
        cout << answer;
    }    
   return 0;
}
