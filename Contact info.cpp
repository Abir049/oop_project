#include<bits/stdc++.h>
using namespace std;

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
    return 0;

}
