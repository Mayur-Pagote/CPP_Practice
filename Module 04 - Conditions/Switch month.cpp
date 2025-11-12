#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter week: ";
    cin>>num;

    switch (num)
    {
    case 1:
        cout<<"Jan 31";
        break;
    case 2:
        cout<<"Feb 28";
        break;
    case 3:
        cout<<"Mar 31";
        break;
    case 4:
        cout<<"Apr 30";
        break;
    case 5:
        cout<<"May 31";
        break;
    case 6:
        cout<<"Jun 30";
        break;
    case 7:
        cout<<"Jul 31";
        break;
    case 8:
        cout<<"Aug 31";
        break;
    case 9:
        cout<<"Sept 30";
        break;
    case 10:
        cout<<"Oct 31";
        break;
    case 11:
        cout<<"Nov 30";
        break;
    case 12:
        cout<<"Dec 31";
        break;
    
    default:
        break;
    }

}
