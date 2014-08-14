#include <iostream>
#include <cstdlib>
#include "piggyBankHeader.h"

PiggyBank::PgBank()
{
	m_coinCents = 0;
	m_coinBank[25]={NULL};
}
void PiggyBank::setCoin(int coinCents) 
                 throw (PiggyBankInvalidCoinException, PiggyBankException)
{
	 while(coinCents != 1 || coinCents != 5
	       coinCents != 25 || coinCents != 100)
	 {
		 throw PiggyBankInvalidCoinException
		     ("PiggyBankInvalidCoingException: There's no " 
		       coinCents "cents coin")
	     cout<<"Enter the value of the coin(number of cents) "
	    		"you're dropping into the piggy bank: \n";       
	     cin<< coinCents
	 }
	
	m_coinCents = coinCents;
	
    for (int j = 0; j < 26; j++)
    {
    	// if array is full
    	if (j == 26)
    	    throw PiggyBankException
    			("PiggyBankException: the piggy bank is full")
		else if (m_coinBank[j] == NULL)
     	    m_coinBank[j] = m_coinCents;
    }							
}	
void PiggyBank::getCoin() throw (PiggyBankException)
{	
	// if array is empty
    for (int k = 0; k < 26; k++)
    {
    	// if array is empty
    	if (k == 26)
    		throw PiggyBankException
    			("PiggyBankException: the piggy bank is empty")
		else if (m_coinBank[k] == NULL)
		{
			int n = (rand() % 25) + 1;	
	        while (coinBank[n] == NULL)
		        n = (rand() % 25) + 1;
		}
    }
    
    if (coinBank[n] == 1)
    	cout<< "A penny came out of the piggy bank\n";
    else if (coinBank[n] == 5)
    	cout<< "A nickle came out of the piggy bank\n";
    else if (coinBank[n] == 25)
    	cout<< "A quarter came out of the piggy bank\n";
    else if (coinBank[n] == 100)
    	cout<< "A dollar coin came out of the piggy bank\n"    	
}
void PiggyBank::checkCoin()
{
	 for (int l = 0; l < 26; l++)
	    {
	    	// if array is empty
	    	if (l == 26)
	            cout<<"The piggy bank is empty\n"; 
			else if (m_coinBank[l] != NULL)
				cout<<"The piggy bank is not empty\n";
	    }	
	
}
