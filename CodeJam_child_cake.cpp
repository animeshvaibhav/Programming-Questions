#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int testcase,row,col;

    cout<<"Enter the no. of test cases,row,columns :\n";

    cin>>testcase>>row>>col;
    char a[testcase][row][col];
    for(int i=0;i<testcase;i++)
    {

        for(int j=0;j<row;j++)
        {
            for(int k=0;k<col;k++)
            {
                cin>>a[i][j][k];

            }
        }
   } // end of taking input into the array...

    for(int i=0;i<testcase;i++)
    {
        for(int j=0;j<row;j++)
        {
           int k=0;
            while(k<col){
            if(a[i][j][k]=='?'&&k<col){k++;}

            else if(a[i][j][k]!='?')
            {
                if(k>0&&a[i][j][k-1]=='?')
                {
                    int p=k;

                    char ch=a[i][j][p];
                    p--;
                    for(int t=p;((a[i][j][p]=='?')&&(p>-1));p--)
                    {
                        a[i][j][p]=ch;
                    }

                }//end of if(k>0)...

                else if(k==0)
                {
                    if(a[i][j][k+1]=='?')
                        a[i][j][k+1]=a[i][j][k];

                    k++;
                }

                else if(k<col-1)
                {
                    if(a[i][j][k+1]=='?')
                        a[i][j][k+1]=a[i][j][k];

                    k++;
                }

                else
                    k++;//when a[i][j][k-1]!='?'...then also we need to increment k...

            }

          }
        }
    }

    //now i need to write for checking of the totally empty row....
    /* for(int i=0;i<testcase;i++)
    {
        for(int j=0;j<row;j++)
        {
            for(int k=0;k<col;k++)
            {
                cout<<a[i][j][k];
            }
            cout<<endl;
        }cout<<endl;
    }
*/

    for(int i=0;i<testcase;i++)
    {
       int j=0,index=-1;
       while(j<row-1)
       {
           if(a[i][j][0]=='?')index=j++;
           if(a[i][j][0]!='?')break;
       }
       if(index>-1)
    {
       for(int t=j;t>1;t--)
       {
           for(int k=0;k<col;k++)
            a[i][t-1][k]=a[i][t][k];
       }
    }
      else if(a[i][j][0]!='?')
      {
          for(int p=j;p<row-1;p++){
            if(a[i][p+1][0]=='?'){
            for(int k=0;k<col;k++)
           {
              a[i][p+1][k]=a[i][p][k];
           }
         }
        }
      }
    }

    //for displaying the output...
    for(int i=0;i<testcase;i++)
    {
        for(int j=0;j<row;j++)
        {
            for(int k=0;k<col;k++)
            {
                cout<<a[i][j][k];
            }
            cout<<endl;
        }cout<<endl;
    }

    return 0;
}
