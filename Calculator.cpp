#include <iostream>
using namespace std;
//calculator project in C++

//function prototypes
void pluss(double a, double b);
void minuss(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);
void calculator();

//main function
int main(){

calculator();

    return 0;
}

//function definitions
void pluss(double a, double b) {
    cout << "Result: " << a + b << endl;
}

void minuss(double a, double b) {
    cout << "Result: " << a - b << endl;
}

void multiply(double a, double b) {
    cout << "Result: " << a * b << endl;
}

void divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return; // Return nothing or handle as needed
    }
    cout << "Result: " << a / b << endl;
}

void calculator(){
  while (true)
    {
    char choice;
    cout<<"do you want to use calculator? (y/n): ";
    cin >> choice;
    if (choice == 'n' || choice == 'N') {
        cout << "Exiting the program. Goodbye!" << endl;
        break;
    }else if (choice == 'y' || choice == 'Y')
    {
            double a, b;
            cout << "Enter first number: ";
            cin>>a;

            cout << "Enter operator (+, -, *, /): ";
            char op;
            cin >> op;

            cout << "Enter second number: ";
            cin>>b;

                if (op=='+')
                {
                pluss(a,b);
                }else if (op=='-'){
                minuss(a,b);
                }else if (op=='*'){
                multiply(a,b);
                }else if (op=='/'){
                divide(a,b);
                }else{
                    cout << "Invalid operator. Please enter one of +, -, *, /." << endl;
                    continue;
                }


    }else{
        cout << "Invalid choice. Please enter 'y' or 'n'." << endl;
        continue; // Skip the rest of the loop and ask again   
    }
    }

}
