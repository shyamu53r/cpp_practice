#include<iostream>
using namespace std;

class artist
{
    string name;
    int  rating;
    string country;
    public:

    artist(string name ="JAMES Gunn", int r = 3,string country ="USA")
    {
        this->name= name;
        this->rating=r;
        this->country=country;
    }
    void acceptartistdata()
    {

    }
    void printartistdata()
    {
        cout<<"\n name="<<name<<"\nrating="<<rating<<"\n country="<<country;
    }

    void isfamous()
    {
        if (rating == 3 || 4)
        {
        cout<<" \nartist is famous";
        }
       else
       {
        cout<<" \nartist is not famous";
       }

    }
};

class painter:public artist
{
    int painting_no;
    int painting_rate;
    string type;

    public:
    void acceptpainterdata()
    {

    }
    void printpainterdata()
    {

    }

    void calculatetotalincome()
    {

    }
};

class singer:public artist
{
    int no_album;
    int rate_per_song;
    public:

    void acceptsingerdata()
    {

    }
    void printsingerdata()
    {

    }
    void calculatetotalincome()
    {

    }
};
int main()
{
    artist a("JAMES",2,"usa");
    a.printartistdata();
    a.isfamous();
}