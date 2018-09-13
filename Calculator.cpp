#include<iostream>
#include<string>
#include "mathly.h"
using namespace std;

void calculator();

int main() {
  calculator();
  return 0;
}

void calculator()
{
char user_input;
char op;
float first_val, second_val;


while(user_input !='y')
{
  cout << "Enter First Value" << '\n';
  cin>>first_val;
  cout << "Enter Second Value" << '\n';
  cin>>second_val;
  std::cout << "?? operation" << '\n';
  cin>>op;
  switch (op) {
    case '+':
    cout <<"Addition: "<<add(first_val,second_val);
    break;
    case '-':
    std::cout << " Subtration " <<subtract(first_val, second_val) << '\n';
    break;
    case '*':
    cout << " Multiplication:" << mult(first_val, second_val)<< '\n';
    break;
    case '/':
    cout<< "Division: " <<our_div(first_val, second_val);
    break;

    default:
       std::cout << "Invalid Opeator" << '\n';
  }
  cout<< "\nDo you want to quit !!" <<endl;
  cin>>user_input;
}

}
