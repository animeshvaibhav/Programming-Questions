/* A generic class is also known as a class template...in this the value passed into the constructor can be made generic */

#include<iostream>
using namespace std;

template<class X,class Y> class student{

    int roll;
    Y name;         // 'name' variable of Y data type...
    float fees;
    X marks;        //'marks' variable of X data type...

     public :
                student(Y name,int roll,float fees,X marks)
                {
                    this->fees=fees;
                    this->marks=marks;
                    this->name=name;
                    this->roll=roll;

                }

                void display()
                {
                    cout<<"name="<<name<<endl;
                    cout<<"roll="<<roll<<endl;
                    cout<<"marks="<<marks<<endl;
                    cout<<"fees="<<fees<<endl;
                }

};
int main()
{
    student<float,string> s1("animesh",2316002,0,99.5);     //mentioning the type of X and Y respectively during the declaration of object 's1'...
    s1.display();
    return 0;
}
