/*
Suppose you have a Piggie Bank with an initial amount of Rs.50 and you have to add some more amount to it. Create a class 'AddAmount' with a data member named 'amount' with an initial value of Rs. 50. Now make two constructors of this class as follows:
1 - without any parameter - no amount will be added to the Piggie Bank
2 - having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.
*/

#include <iostream>

using namespace std;

class AddAmount{                //Class defination
    public:
    int amount = 50;
    
    AddAmount(){                //default constructor
        amount;
    }
    
    AddAmount(int newAmount) {              //parametarized constructor
        amount = amount + newAmount;
    }
    
    void final_amount(){                
        cout << "The final amount in your piggy bank is:" << amount << endl;
    }
};                  //end of the class

int main() {
    
    int newAmount;
    cout << "Enter the amount you want to deposit in your piggy bank: " << endl;
    cin >> newAmount;
    
    AddAmount a1;
    //a1.final_amount();
    
    AddAmount a2(newAmount);
    a2.final_amount();
    
    return 0;
}
