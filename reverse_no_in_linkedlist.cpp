#include<iostream>
#include<list>
#include<stack>
#include<algorithm>
#include<iterator>

using namespace std;

  list<int> reverseAndSum(list<int>l1, list<int>l2){

        list<int> l3;

        // calculating the size of the larger of the two received list...
        int max_size= max(l1.size(),l2.size());

        int sum=0,carry=0;

        for(int i=0;i< max_size;i++){

            // making the value of the sum =0 at the start of
                sum=0;
            if(l1.size()!=0 && l2.size()!=0){

                sum+= l1.front()+ l2.front() + carry;
                carry=0;
                l1.pop_front();
                l2.pop_front();

            }
            else if(l1.size()>0){
                sum+= l1.front() + carry;
                carry=0;
                l1.pop_front();

            }
            else if(l2.size()>0){

                sum+= l2.front() + carry;
                carry=0;
                l2.pop_front();

            }

            if(sum>= 10){

                carry=1;
                sum= sum - 10;

            }

        // at last we would be inserting the adjusted sum into the list
            l3.push_back(sum);

        }

        if(carry==1)l3.push_back(1);

       // returning the the resultant reversed list....it contains the sum of the two received reversed list...
       return l3;
}
int main(){

    list<int> l1,l2,l3;
    int x;// for inserting the values in the list...
    int size1,size2;
    cout<<"enter no. of digits in the first no. :\n ";
    cin>>size1;

    // inserting elements in the 1st list...
    for(int i=0;i<size1;i++){

        cout<<"enter the "<<i<<"th element of the first list: "<<endl;
        cin>>x;
        l1.push_back(x);
    }

    cout<<"enter no. of digits in the second no. :\n ";
    cin>>size2;

   // inserting elements in the 2nd list...
    for(int i=0;i<size2;i++){

        cout<<"enter the "<<i<<"th element of the first list: "<<endl;
        cin>>x;
        l2.push_back(x);
    }

    // calling the reverse function...
    l3= reverseAndSum(l1,l2);

    cout<<"the sum in reverse order :";

    //declaring iterators for traversing the received list...

    std:: list<int> :: iterator ptr = l3.begin();

    list<int> :: iterator ftr = l3.end();

    // displaying the received reversed list...

       for(ptr;ptr!=ftr;ptr++){

        cout<<*ptr;

       }

}
