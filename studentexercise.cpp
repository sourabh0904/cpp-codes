#include<iostream>
using namespace std;
class student
{
    private:
        int roll;
        string name;
        int mathmarks;
        int phymarks;
        int chemmarks;
    public:
        student(int r,string n, int m, int p, int c)
        {
            roll=r;
            mathmarks=m;
            phymarks=p;
            chemmarks=c;
        }
        int total()
        {
            return mathmarks+phymarks+chemmarks;
        }
        char grade()
        {
            float average = total()/3;
            if(average>=60)
                return 'A';
            else if(average>=40 && average<60)
                return 'B';
            else
                return 'C';
        }
};

int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"enter a roll number of student: ";
    cin>>roll;
    cout<<"enter a name of student: ";
    cin>>name;
    cout<<"enter a marks of 3 subjects: ";
    cin>>m>>p>>c;
    student s(roll , name , m , p , c);
    cout<<"total marks : "<<s.total()<<endl;
    cout<<"total grade : "<<s.grade()<<endl;
}