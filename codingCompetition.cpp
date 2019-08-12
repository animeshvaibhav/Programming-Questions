// This code is for counting the no. of occurences of each character in the passed string...

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<String.h>
using namespace std;

int main(){

    cout<<"Enter any string of your choice: ";
    string s1 = "We are job providers not Job Seekers";
    getline(cin,s1);

    int charCount[128] = {0};

    for(int i=0;i<s1.length();i++){

        if(s1[i]==' ')continue;

        else{
            int a= (int)s1[i];
            charCount[a] = charCount[a]+1;


        }

    }

    for(int i=0;i<128;i++){

        if(charCount[i]>0){
                char c= (char)i;
            cout<<"count of "<<c<<" = "<<charCount[i]<<endl;
        }
    }

    return 0;
}
