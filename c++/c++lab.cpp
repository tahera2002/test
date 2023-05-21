#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Student {
private:
    string name;
    int id;
    int creditsCompleted;
    double cgpa;

public:
    Student(string n, int i, int c, double g) {
        name = n;
        id = i;
        creditsCompleted = c;
        cgpa = g;
    }

    string getName(){
        return name;
    }

    int getId() {
        return id;
    }

    int getCreditsCompleted() {
        return creditsCompleted;
    }

    double getCGPA() {
        return cgpa;
    }
};

void display(vector<Student>&students) {
    cout<<"Rank\tName\tID\tCredit completed\tCGPA\n";
    for(int i=0;i<students.size();i++)
    {
        cout<<i+1<<"\t"<<students[i].getName()<<"\t"<<students[i].getId()<<"\t"<<students[i].get CreditsCompleted()<<"\t"<<students[i].getCgpa()<<"\n";
        }
}

int main() {
    vector<Student>students;

    // Input student information
    for (int i = 0; i <5; i++) {
            string name;
    int id,creditsCompleted;
    double cgpa;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;

        cout << "Enter ID of student " << i + 1 << ": ";
        cin >> id;

        cout << "Enter credits completed by student " << i + 1 << ": ";
        cin >> creditsCompleted;
        cout << "Enter CGPA of student " << i + 1 << ": ";
        cin >> cgpa;

        Student s(name, id, creditsCompleted, cgpa);
        students.push_bach(s);
    }
    sort(students.being(),students.End(),(Student&a,Student&b)
    {
        if(a.getcreditsCompleted()==b.getcreditsCompleted())
        {
            return a.grtCgpa()>b.getCgpa();
        }
    });



    return 0;
}

};
