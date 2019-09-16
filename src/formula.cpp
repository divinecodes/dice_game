#include "formula.h"
#include <iostream>

using namespace std;

formula::formula()
{
    //ctor

}


formula::~formula()
{
    //dtor

}

 void formula::roll()
{
    int i  ,j ;

	for ( i =1 ; i <= 20; i ++)
	{
		for ( j = 1 ; j <= 2000 ; j ++)
			cout<< "ROLLING DICE\r";

		for ( j = 1 ; j <= 900 ; j ++)
			cout<< "ROLLING DICE!.\r";

		for ( j =1 ; j <= 400 ; j ++)
			cout<< "ROLLING DICE!!..\r";

		for ( j =1 ; j <= 10 ; j ++)
            cout<< "ROLLING DICE!!!...\r";
	}
}

void formula::displayMenu()
{
    cout<<"\t\t----------- MENU ------------- \n";
    cout<<"\t\t 1.REGISTER \n";
    cout<<"\t\t 2.PLAY GAME \n";
    cout<<"\t\t 3.EXIT \n\n";

    cout<<"Please select an option.Select '2' if you have already registered \n and 1 if you want to register to play the game\n";
}
