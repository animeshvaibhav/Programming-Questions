#include<iostream>
#include<string>
using namespace std;

void reverseit(string &s)
{
    int i=0;
    char temp;
    int len=s.length();

    while(i<=len/2)
    {
        temp=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
        i++;

    }

}
reverse_word(string &s)
{
        char temp;
    int i=0;
    while(s[i]!='\0')
    {
        while(s[i]==' ')i++;
        int j=i;
        int t=i;
        while(s[t]!=' '&&s[t]!='\0' && s[i]!= '.')
        {
            t++;// for incrementing the pointer to the characters of the words of the given statement as a string
            i++;// for incrementing the pointer to the characters of the string

        }
        t--;


        while(j<t){
            temp=s[j];
            s[j]=s[t];
            s[t]=temp;
            t--;
            j++;

        }

        while(s[i]==' ' || s[i]=='.')
           i++;
    }

}

int main()
{
    string s;
    cout<<"Enter your string: ";
   getline(cin,s);
    //reverseit(s);
    reverse_word(s);
    cout<<"Your reversed string is: "<<s<<endl;
    return 0;
}
