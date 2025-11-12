#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    if (ch == 'A' || ch == 'a'){
        cout<<"Yes its vowel: A";
    }
    else if (ch == 'E' || ch == 'e'){
        cout<<"Yes its vowel: e";
    }
    else if (ch == 'I' || ch == 'i'){
        cout<<"Yes its vowel: i";
    }
    else if (ch == 'O' || ch == 'o'){
        cout<<"Yes its vowel: o";
    }
    else if (ch == 'U' || ch == 'u'){
        cout<<"Yes its vowel: U";
    }
    else {
        cout<<"No its a consonant";
    }

}
