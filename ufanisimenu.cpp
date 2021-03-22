#include <stdio.h>
#include<iostream>
#include <ctype.h>
int i, j;
using namespace std;
int n=20;

bool processMenu() {
    cout<< "\n\n UFANISI PRIMARY SCHOOL \n"<<flush;
	cout<< "============================ \n"<<flush; //flush forces the printing to the screen before it pauses
system ("PAUSE"); //pause displays a message and waits for the user to hit a key
cout<< "Good-Bye"<<endl;
system ("CLS");

	cout << "\n\n Main Menu" << endl;
	cout << " UFANISI PRIMARY SCHOOL:" << endl;
	cout << "=============================" << endl;
	char choice;
printf("\n\n Do you want to create a Multiplication Table (M) or perform a Calculation (C) \n");
printf("===============================================================================\n");
scanf(" %c", &choice);
switch(choice)
{

    case 'M': 
     
          int n, range;
          range<15;

    cout << "\n\n Please enter the Multiplication Table number \n:";
    cin >> n;

    cout << "Enter range: ";
    cin >> range;
    
    for (int i = 1; i <= range; ++i)
	 {
        cout << n << " * " << i << " = " << n * i << endl;
    }
   cout<< "Hello"<<flush; //flush forces the printing to the screen before it pauses
system ("PAUSE"); //pause displays a message and waits for the user to hit a key
cout<< "Good-Bye"<<endl;
system ("CLS");
    break;
    default:
    	cout << "please enter M or N";
    	break;
    	cout<< "Hello"<<flush; //flush forces the printing to the screen before it pauses
system ("PAUSE"); //pause displays a message and waits for the user to hit a key
cout<< "Good-Bye"<<endl;
system ("CLS");
    case 'C':
    
        char op;
    float num1, num2,answer;
    cout<<" Please enter your first number (0 - 1000)\n";
    cin>>num1;  
    cout<<"Please enter your second number (0 - 999)\n:";
	cin >> num2;
	cout << "Enter operator either + or - or * or /:\n ";
    cin>>op;
    if(num1<=1000){
    	cout<<"num1(range between 0 to 999)\n";
    	}else cout<<num1<<"\out of range\n";
    	break;
    	 if(num2<=999){
    	cout<<"num1(range between 0 to 999)\n";
    	}else cout<<num1<<"\out of range\n";
    	break;
    	
    	
	
    switch(op)
    {
        case '+':
            answer = num1 + num2;
                printf("%3f + %3f = %3f\n", num1,num2,answer);
                break;
            break;

        case '-':
            answer = num1 - num2;
                printf("%3f - %3f = %3f\n", num1,num2,answer);
            cout << "result " << answer;
            break;

        case '*':
            answer = num1 * num2;
                printf("%3f * %3f = %f\n", num1,num2,answer);
            break;

        case '/':
            cout <<  num1/num2;
            
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
           
    
    }
    
    	
   
         cout<< "\n\n Hello"<<flush; //flush forces the printing to the screen before it pauses
system ("PAUSE"); //pause displays a message and waits for the user to hit a key
cout<< "Good-Bye"<<endl;
system ("CLS");
    break;
        
}
}

int main () {


    while (!processMenu()) {
    	
}
    	
		while(!processMenu()) {


    }

    cout << endl << "Thank you for Reading." << endl;

    return 0;

}
