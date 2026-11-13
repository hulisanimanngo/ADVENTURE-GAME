#include <iostream>

using namespace std;
int lives= 4;
string name;
int option;

void left()
{
    cout<<"YOU HAVE BEEN BITTEN BY A SNAKE:"<<endl;
    cout<<"you lost one lives :"<<endl;
    lives = lives-1;
    cout<<"you have "<<lives <<"left"<<endl;
}
void right()

{
   cout<<"YOUR BEING ATTACKED BY A LION:"<<endl;
   cout<<"you lost one lives:"<<endl;
   lives= lives-1;
   cout<<"you have"<<lives<<"right"<<endl;
}
void middle()
{
    cout<<"YOU HAVE BEEN BY A MOSQUITOS:"<<endl;
    cout<<"you have lost one lives:"<<endl;
    lives = lives - 1;
    cout<<"you have"<<lives<<"middle"<<endl;
    cout<<"YOU HAVE ONE LIVE TO SAVE MAKE IT COUNT IF YOU FAIL TO DO SO ONE OF YOUR FRIENDS MAY ASSIST YOU WITH ONE OF THEIR LIVES:"<<endl;
}
void menu()

{

    cout<<"----------------------------------:"<<endl;
    cout<<"JUMANJI:WELCOME TO THE JUNGLE"<<endl;
    cout<<"::::::::::::::::::::::::::::::::::"<<endl;

    cout<<"SELECT THE NAME OF THE CHARACTER YOU WANNA BE :"<<endl;
    getline(cin,name);
    cout<< name <<"GET READY FOR OUR WILD ADVENTURE:"<<endl;

    cout<<"----------------------------------:"<<endl;
    cout<<"YOU ARE TRAPPED IN A JUNGLE AND YOU HAVE BEEN GIVEN 4 LIVES TO SAVE YOUR SELF YOU LOSS ALL YOU DIE:"<<endl;
    cout<<"YOU HAVE BEEN GIVEN 4 WEAKNESS AND STRENGTH:"<<endl;
    cout<<"find a way to go back home:"<<endl;
    cout<<"===================================:"<<endl;
    // DATE
    cout<<"NAME:"<<name<<endl;
    cout<<"LIVES:"<<lives<<endl;
    cout<<"LOCATION:JUMANJI"<<endl;
    cout<<"============================================:"<<endl;

    cout<<"YOU ARE FACED WITH 3 PATHS:"<<endl;
    cout<<"enter 1 to go LEFT"<<endl;
    cout<<"enter 2 to go RIGHT"<<endl;
    cout<<"enter 3 to go MIDDLE"<<endl;
    cin>>option;
    switch(option)
    {
        case 1:
            left();
            break;
        case 2:
            right();
            break;
        case 3:
            middle();
            break;
        default:
            cout<<"INVALID INPUT :"<<endl;
            break;

    }

}
int main()
{
    menu();
    left();
    right();
    middle();
    return 0;
}
