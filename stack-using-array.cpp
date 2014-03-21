/*
github @rajatbjain
*/
#include <iostream>

//Macro for the array count.
#define TEN 10
using namespace std;

//Defined set of global variables so that every function accesses the same value at each time.
int a[TEN], top=-1, n;
//pushes element at the very top.
//sanity check is when array is full and no element can be inserted.
void push(){
	if(top == TEN-1)
		cout << "Stack overflow" << endl;
	else{
	cout << "Enter element to push" << endl;
	cin >> n;
	top++;
	a[top]=n;
	cout << "Element " << n <<" Inserted." << endl;
	}
}
//pop or remove the element at the very top.
//Sanity check is when the top is at -1 then there are no elements left in the array.
void pop(){
	if (top == -1){
		cout << "Stack Underflow" << endl;
	}
	else{
		cout << "Element removed from position " << top << endl;
		top--;
	}
}
//Prints out the element at Nth position
//Sanity check is when the person enters N greater than TOP.
// Since we do not remove element in the POP operation it is important that we don't let anyone see that.
void peek(){
	cout << "Peek which element from total of " << top << endl;
	cin >> n;
	if (n > top){
		cout << "Nope. That don't exist. I said less than or equal to" << top << endl;
	}
	else {
		cout << a[n] << endl;
	}
}
//Displays element from top to bottom. Nothing more, nothing less.
//No sanity checks.
void display(){
	for (int i = top; i >= 0; i--){
		cout << a[i] << endl;
	}

}
//Just normal function to see if the stack array is empty.
void isempty(){
	if (top == -1){
		cout << "Yeah. it's empty" << endl;
	}
	else
		cout << "Nope, can't say if its empty." << endl;
}
//Again a normal function to see if the stack array is full.
//You can combine the two isempty() and isfull() functions to save time and lines.
void isfull(){
	if (top == TEN-1)
		cout << "Yeah it's full" << endl;
	else {
		cout << "Nope, can't say if its filled." << endl;
	}

}
//checks the current TOP position.
void checktop(){
	cout << "The top is at "<< top << endl;
}
int main(){
	int number;


	do {
        cout <<"\n\n";
        cout << "Ahoy! Enter what do you want to do. " << endl << "Reply with choice." << endl;
        cout << "1. Push an element " << endl;
        cout << "2. Pop an element" << endl;
        cout << "3. Peek element at desired position" << endl;
        cout << "4. Display all elements in top to bottom fashion" << endl;
        cout << "5. Check if the stack is empty" << endl;
        cout << "6. Check if the stack is full" << endl;
        cout << "7. Check top" <<endl;
        cout << "8. Exit" << endl;
        cin >> number;
		switch(number){
		case 1:
		push();
		break;
		case 2:
		pop();
		break;
		case 3:
		peek();
		break;
		case 4:
		display();
		break;
		case 5:
		isempty();
		break;
		case 6:
		isfull();
		break;
		case 7:
		checktop();
		break;
		case 8:
		return (0);
		default:
		cout << "Try again!!" << endl;
		}
	}while(1);//Forever loop! Exit only possible via the 8th OPTION.
}
