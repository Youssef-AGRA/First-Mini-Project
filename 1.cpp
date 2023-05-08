#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout<<"Hello , Welcome to the APP."<<endl;
    cout<<"Please create a new account"<<endl;
    cout<<"Choose a username"<<endl;
    string user;
    getline(cin,user);

    cout<<"Choose a password"<<endl;
    string pass;
    getline(cin,pass);
    
    cout<<"Please enter your information"<<endl;
    string username;
    getline(cin,username);

    cout<<"Password"<<endl;
    string password;
    getline(cin,password);

    while(username != user && password  != pass){
        cout<<"Wrong username or wrong password please try again"<<endl;
        cout<<"Username :"<<endl;
        getline(cin,username);
        cout<<"Password :"<<endl;
        getline(cin,password);

    }
    cout<<"Welcome to the bagel app"<<endl;

    double  balance = 5.00;
    cout<<"Would you like to add money to your balance ?"<<endl;
    string q1;
    getline(cin,q1);
    if(q1=="yes"){
        cout<<"Enter how much money you want to add :"<<endl;
        double add;
        cin>>add;
        cout<<"Your new balance is : "<<balance+add<<" dollars "<<endl;
    }else{
        cout<<"Alright"<<endl;
    }

    cout<<"Would like a bagel today ?"<<endl;
    string q2;
    getline(cin,q2);

    if(q2=="yes"){
        cout<<"Please select what bagel you want "<<endl;
        string bageltype[]={"nature bagel","cheese bagel","egg bagel"};
        double bagelprices[]={3.00,4.00,5,00};

        cout<<"1. "<<bageltype[0]<<" --> "<<bagelprices[0]<<"dollars"<<endl;
        cout<<"2. "<<bageltype[1]<<" --> "<<bagelprices[1]<<"dollars"<<endl;
        cout<<"3. "<<bageltype[2]<<" --> "<<bagelprices[2]<<"dollars"<<endl;

        cout<<"Your choice : "<<endl;
        int q3;
        cin>>q3;

        while(q3>3||q3<1){
            cout<<"This is not a valid input please try again "<<endl;
            cin>>q3;
        }

        if(q3==1){
            cout<<"You have ordered "<<bageltype[0]<<endl;
            cout<<"The total of your order is :"<<bagelprices[0]<<endl;
            cout<<"You have "<<balance-bagelprices[0]<<" dollars left on your balance."<<endl;
        }
        else if(q3==2){
            cout<<"You have ordered "<<bageltype[1]<<endl;
            cout<<"The total of your order is :"<<bagelprices[1]<<endl;
            cout<<"You have "<<balance-bagelprices[1]<<" dollars left on your balance."<<endl;
        }
        else if(q3==3){
            cout<<"You have ordered "<<bageltype[2]<<endl;
            cout<<"The total of your order is :"<<bagelprices[2]<<endl;
            cout<<"You have "<<balance-bagelprices[2]<<" dollars left on your balance."<<endl;
        }

    }else{
        cout<<"Alright have a good day"<<endl;
    }


    return 0;
}