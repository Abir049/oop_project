#include<bits/stdc++.h>
using namespace std;

int main();



class System
{
public:

    void registr()
    {
        string ruser,rpass,ru,rp;
        system("cls");
        cout<<"ENTER  THE USERNAME\n";
        cin>>ruser;
        cout<<"ENTER THE PASSWORD\n";
        cin>>rpass;
        ofstream reg("database2.txt",ios::app);
        reg<<ruser<<" "<<rpass<<endl;
        system("cls");
        cout<<"Registration successful\n";
        main();


    }


    void login()
    {
        int c;
        string user,pass,u,p;
        cout<<"Please enter the following details\n"<<"USERNAME\n";
        cin>>user;
        cout<<"PASSWORD\n";
        cin>>pass;
        ifstream input("database2.txt");
        while(input>>u>>p)

            if(u==user && p==pass)
            {
                c=1;
                system("cls");
            }
        input.close();
        if(c==1)
        {
            cout<<"Hello "<<user<<endl;
            //cin.get();
            main();
        }
        else
        {
            cout<<"login error!\n";
            main();
        }
    }
    void forgot()
    {
        int a;
        system("cls");
        cout<<"Forgot?\n";
        cout<<"1. Search your id by username\n";
        cout<<"2. Main Menu \n";
        cin>>a;
        if(a==1)
        {
            int c=0;
            string suser,su,sp;
            cout<<"Enter your username: \n";
            cin>>suser;
            ifstream searchh("database2.txt");
            while(searchh>>su>>sp)
            {
                if(su==suser)
                    c=1;
            }
            searchh.close();
            if(c==1)
            {
                cout<<"Account is found\n";
                cout<<"Password: \n"<<sp;
                // cin.get();
                system("cls");

            }
            else
            {
                cout<<"Sorry,user id is not found\n";
                // cin.get();
                main();
            }

        }
        else main();
    }


};




class Contact
{
private:
    string Name;
    long long int num;
public:
    void add_contact(long long int n,string nm)
    {
        num=n;
        Name=nm;
        ofstream cont("contact.txt",ios::app);
        cont<<nm<<" "<<n<<endl;
        cont.close();
    }
    void show_contacts()
    {
        string s;
        long long int c;
        ifstream show("contact.txt");
        while(show>>s>>c)
        {
            cout<<s<<" "<<"0"<<c<<endl;
        }
        show.close();
        cout<<endl;

    }


};



int main()
{
    long long int n;
    int a,b;
    Contact ob1;
    string name;
    cout<<"..................You can keep your contacts safe here..................."<<endl;
    cout<<"Submit your choice here ->"<<endl;
    cout<<"1. Add Contacts :"<<endl;
    cout<<"2.Show contacts :"<<endl;
    cout<<"3. System of registration :"<<endl;
    cin>>a;
    if(a==1)
    {
        cout<<"Insert your number :"<<endl;
        cin>>n;
        cout<<"Save contact as :"<<endl;
        cin>>name;
        ob1.add_contact(n,name);

        system("cls");
        cout<<"Saved Successfully\n";
        main();
    }
    else if(a==2)
    {
        ob1.show_contacts();
    }
    else if(a==3)
    {
        //reg();
        int choice;
        System ob1;
        cout<<"..............................\n";
        cout<<"..........WELCOME.............\n";
        cout<<"MENU: \n";
        cout<<"1. LOGIN \n";
        cout<<"2. REGISTER :\n"<<endl<<"3. FORGOT USERNAME OF PASSWORD \n";
        cout<<"4. EXIT\n";
        cout<<"ENTER YOUR CHOICE: \n";
        cin>>choice;
        cout<<endl;
        if(choice==1)
            ob1.login();
        else if(choice==2)
            ob1.registr();
        else if(choice==3)
            ob1.forgot();
        else if (choice==4)
            system("cls");


    }
    return 0;

}

