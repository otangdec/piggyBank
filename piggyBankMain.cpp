#include <iostream>
#include <cstdlib>

using nameSpace std;

int    main    (void)
{
    PiggyBank pgBank;
    
    char usrInput;
    int coinCents;
    
    cout<< "Welcome to the piggy bank program!\n";    
    do
    {
        // Display the menu choices
        cout<< "Please select from the following options: \n";
        cout<< "1) Drop a coin into the piggy bank.\n";
        cout<< "2) Shake a random coin out of the piggy bank.\n";
        cout<< "3) State whether or not the piggy bank is empty\n";
        cout<< "4) Exit program\n\n";
        
        cout<< "Enter your menu choice(1-4): \n"  
        cin >> usrInput;
        
        if (usrInput == '1')
        {
            cout<<"Enter the value of the coin(number of cents)
                   you're dropping into the piggy bank: \n";
            cin >> coinCents;
                  
            pgBank.setCoin(coinCents);
        }
        else if (usrInput == '2')
        {
            pgBank.getCoin();
        }
        else if (usrInput == '3')
        {
            pgBank.checkCoin();
        }
        else if (usrInput == '4')
        {
            cout<< "Thank you for using the piggy bank program\n";
            return 0;
        }
        else
        {
            cout<<"Please enter the number from 1-4: \n";
        }    
    } while(usrInput != '4');
}            