#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
#include <windows.h>
#include <formula.h>

void roll();
void displayMenu();

struct info
{
    int dd,mm,yy,age;
};

using namespace std;

ofstream passwords;
ofstream fcout;
ofstream check;
ifstream fcin;
ifstream confirm;

int main()
{
    formula metaData;
    info users;
    system("color 3E");
    while(6>2)
    {
        int option;

        metaData.displayMenu();

        cin>>option;
        if(option== 3)
        {
            cout<<"\nProgram is exiting";
            Sleep(5000);
            return 0;
        }else if(option==1)
        {
            passwords.open("password.bat",ios::app);
            string code;
            string f_name;
            string s_name;
           string email;
           string password1;
          string password2;

            cout<<"\t\t---------- REGISTERATION ---------- \n";
            cout<<"\t\tPlease Provide the following info"<<endl;
            cout<<"\t\tDATE: ";cin>>users.dd>>users.mm>>users.yy;
            cout<<"\n\t\tFIRST NAME: ";cin>>f_name;
            cout<<"\n\t\tSURNAME: ";cin>>s_name;
            cout<<"\n\t\tEMAIL: ";cin>>email;
            cout<<"\n\t\tAGE: ";cin>>users.age;
            if(users.age<18)
            {
                cout<<"\n SORRY,YOU MUST BE 18YEARS AND ABOVE TO PLAY THIS GAME!!! \n";
                exit(1);
            }
             check.open("temp.txt");
            cout<<"\n\t\tPASSWORD: ";cin>>password1;check<<password1;
            check.close();
            cout<<"\n\t\tCONFIRM PASSWORD:";cin>>password2;
            fcin.open("temp.txt");

                while(!fcin.eof())
                {
                    fcin>>code;
                    if(code==password2)
                    {
                        char ans;
                        passwords<<password2<<" ";
                        cout<<"\n\t\tPASSWORD CONFIRMED!! \n";
                        cout<<"\n\n\t\t BY ACCEPTTING,YOU HAVE AGREED TO OUR TERMS AND CONDITIONS!!!\n"
                            <<"(DISCLAIMER:BY ACCEPTING YOU HAVE AGREED THAT YOU ARE ABOVE THE AGE OF \n 18 AND IT IS LEGAL TO PLAY THIS GAME IN YOUR AREA)";
                        cout<<"\nDo you accept(Y/N): ";cin>>ans;
                            if(ans=='Y')
                            {
                                cout<<"\n\n\t\tCONGRATULATIONS!!! YOU HAVE SUCCESSFULLY REGISTERED FOR THE GAME \n YOU CAN NOW ACCESS IT WITH YOUR PASSWORD!\n\n";
                                continue;
                            }else
                            {
                                cout<<"\n\t\tSorry,Thank you for your time \n";
                                exit(1);
                            }
                    }
                }

                if(code!=password2)
                {
                    cout<<"\n\t\tPassword not confirmed,Please restart the registration\n";
                    continue;
                }

                passwords.close();

        }else if(option==2)
        {
            confirm.open("password.bat");
            string x;
            string y;
            cout<<"\n\t\t PLEASE ENTER YOUR PASSWORD TO ACCESS THE GAME:";cin>>x;

            do
            {
                while(!confirm.eof())
                {
                    confirm>>y;
                    if(y==x)
                    {   Sleep(5000);
                        cout<<"\n\t\tPASSWORD AUTHENTICATED!!\n ENJOY THE GAME \n\n\n";

                        int x;
    string email,fname,sname;
    char ans;


    cout<<"\t\t ------- ROLL! ROLL!! ROLL AWAY!!! -------- \t\t\n\n";
    cout<<"\t\tRULE OF THE GAME!!!\n";
    cout<<"\t\tGuess a number from 1 to 6 which you think would appear when the dice is rolled\n\n";
    cout<<"\t\tEnter the number: ";cin>>x;
    if(x>6)
    {
        cout<<"\n\n\t Sorry you entered a wrong number.Please re-enter the a number from 1 to 6 \n\n";
        cin>>x;
    }
    cout<<endl<<"\tDo you want to roll the dice?(Y/N):";cin>>ans;

    if(ans == 'Y')
    {
        char choice;
        int dice;
        roll();

        srand(time(0));
        dice=1+(rand()%6);

        cout<<"\n\t the number produced after the dice was rolled is:"<<dice;


        if(dice == x)
        {
            fcout.open("winners.txt",ios::app);

            cout<<"\n\t\tCongratulations!!!You have won $1000";
            cout<<"\n\t\tPlease provide the following info to be eligible to claim your price";
            cout<<"\n First Name: ";cin>>fname;
            cout<<"\n Surname:";cin>>sname;
            cout<<"\n Email:";cin>>email;
            fcout<<" "<<fname<<" "<<sname<<" "<<email<<"\n";
            cout<<fname<<",please check your email ( "<<email<<" ) for a code.Use that code to redeem your price";
            cout<<"\n\t\t Thank you for playing!!!";

            cout<<"\n\n Do you want to play again?(Y/N):";cin>>choice;
            if(choice == 'Y')
            {
                cout<<"\n\n";
                continue;
            }else
            {
                cout<<"\n\t\tThank you for playing the game \n";
            exit(1);
            }

            fcout.close();
        }else
        {
            cout<<"\n\t\tSorry!!Better luck next time";
            cout<<"\n Do you want to play again?(Y/N)";cin>>choice;
            if(choice == 'Y')
            {
                continue;
            }else
            {
                cout<<"\n\t\tThank you for playing the game \n";
            exit(1);
            }
        }
    }else
    {
        cout<<"\n\n\t\t Thank You for using this game!! \n";
        break;
        exit(1);
    }


                    }
                }
            }while(y!=x);

        if (y!=x)
        {
            cout<<"\n\t\tSorry, Password is wrong,Please Reselect and enter the password again\n\n";
            continue;
        }
    }


}
    system("pause");
    return 0;
}

void roll()
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

