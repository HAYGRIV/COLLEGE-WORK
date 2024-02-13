/*#include <iostream>
using namespace std;

class Practice
{
    private:
        //int a;
    public:
        int a;
        int b;
        int c;
};

int main()
{
    Practice add;
    int sum;
    cout << "ENTER FIRST NUMBER:";
    cin >> add.a;
    cout << "ENTER SECOND NUMBER:";
    cin >> add.b;
    cout << "ENTER THIRD NUMBER:";
    cin >> add.c;
    sum = add.a + add.b + add.c;
    cout << "THE SUM IS:" << sum;
    return 0;
}*/

#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
        int RollNo;
        char Name[10];
        int Marks;
    public:
        static int ObjectCount;
        Student()
        {
            ObjectCount++;
        }

    void getdata()
    {
        cout<<"Enter Roll Number:"<<endl;
        cin>> RollNo;
        cout<<"Enter Name:"<<endl;
        cin>> Name;
        cout<<"Enter Marks:"<<endl;
        cin>> Marks;
    }

    void putdata()
    {
        cout<<"Roll Number: "<<RollNo<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Marks: "<<Marks<<endl;
        cout<<endl;
    }
};

int Student::ObjectCount = 0;
int main(void) {
   Student s1;
   s1.getdata();
   s1.putdata();
   Student s2;

   s2.getdata();
   s2.putdata();
   Student s3;

   s3.getdata();
   s3.putdata();
   cout << "Total objects created = " << Student::ObjectCount << endl;
   return 0;
}
