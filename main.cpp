//
//  main.cpp
//  Ch4Ex7
//
//  Created by Ryan Kishan Persad on 11/27/21.
//

#include <iostream>
#include <vector>
using namespace std;
vector<string> numbers;


void implement() {
    numbers.push_back ("zero");
    numbers.push_back ("one");
    numbers.push_back ("two");
    numbers.push_back ("three");
    numbers.push_back ("four");
    numbers.push_back ("five");
    numbers.push_back ("six");
    numbers.push_back ("seven");
    numbers.push_back ("eight");
    numbers.push_back ("nine");
    numbers.push_back ("ten");
}

int get_number(){
    char choice;
    string type_val;
    int val = 0;
    cout << "do you wish to enter a number or word? n/w" << endl;
    cin >> choice;
    
    if ( choice == 'n')
    {
        cin >> val;
    }
    else if(choice == 'w')
    {
        cin >> type_val;
        bool found = false;
        for (int i = 0; i<numbers.size() && !found; i++){
            if (numbers[i] == type_val)
            {
                val = i;
                found = true;
            }
        }
        if(!found){ cout << "Number not found."; }
    }
    return val;
    
}

void print_answer(int ans, char oper, int val1,int val2) {
    cout << "Your Answer is:" << ' ' << val1 << ' ' << oper << ' ' << val2 << ' ' << '=' <<   ans << endl;
}
int main(void){
    implement();
    int val1, val2, answer;
    char op;
    val1 = get_number();
    val2 = get_number();
    cout << "Please input operation:";
    cin >> op;
    switch (op){
            
        case '+': cout << "You have chosen addition!" << endl;
            answer = val1 + val2;
            print_answer (answer, op, val1, val2);
            break;
        case '-': cout << "you have chosen subtraction!" << endl;
            answer = val1 - val2;
            print_answer (answer, op, val1, val2);
            break;
        case '*': cout << "you have chosen multiplication!" << endl;
            answer = val1 * val2;
            print_answer (answer, op, val1, val2);
            break;
        case '/': cout << "you have chosen division!" << endl;
            answer = val1 / val2;
            print_answer  (answer, op, val1, val2);
            break;
        case '%': cout << "you have chosen modulos!" << endl;
            answer = val1 % val2;
            print_answer (answer, op, val1, val2);
            break;
        default: cout << "incorrent operation" << endl;
    }
    
}

    
    
    