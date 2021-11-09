#include<iostream>
#include<string.h>

using namespace std;
void getuppercase(string text)
{
    int len=0;
    while(text[len]!='\0')
    {
        len++;
    }
    cout<<"length:"<<len<<endl;

}
int main()
{

    string text;
     cout<<"enter text:";
     getline(cin,text);

     getuppercase(text);
    return 0;
}
