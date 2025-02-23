   #include<iostream>
using namespace std;

class college {
public:
    int an;
    string branch;
    string name;
   static int cs,me,ci,aiml,tad;

    void newAdmission() {
    	tad++;
        cout << "Enter admission number: ";
        cin >> an;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter branch (cs for Computer Science, me for Mechanical, ci for Civil, aiml for Artificial Intelligence): ";
        cin >> branch;

        if (branch == "cs") {
            cs++;
            cout << "Thanks for admission" << endl;
        } else if (branch == "me") {
            me++;
            cout << "Thanks for admission" << endl;
        } else if (branch == "aiml") {
            aiml++;
            cout << "Thanks for admission" << endl;
        } else if (branch == "ci") {
            ci++;
            cout << "Thanks for admission" << endl;
        } else {
            cout << "Unknown branch" << endl;
        }
    }

    void show() {
        cout << "Your details\n"
             << "Name: " << name << "\n"
             << "Admission number: " << an << "\n"
             << "Branch: " << branch << endl;
    }

    int totalAd() {
        return tad;
    }

    int branchAd(string branch) {
        if (branch == "cs") {
            return cs;
        } else if (branch == "me") {
            return me;
        } else if (branch == "aiml") {
            return aiml;
        } else if (branch == "ci") {
            return ci;
        }
        return 0;
    }
};
int college::tad=0;
int college::aiml=0;
int college::cs=0;
int college::ci=0;
int college::me=0;
int main() {
    college a1, a2,a3,a4;
    a1.newAdmission();
    a2.newAdmission();
    a3.newAdmission();
    a4.newAdmission();
    a1.show();
    a2.show();
    a2.show();
    a2.show();
    cout << "Total Admissions: " << a1.totalAd() << endl;
    cout << "Computer Science Admissions: " << a1.branchAd("cs") << endl;
    cout << "Mechanical Engineering Admissions: " << a1.branchAd("me") << endl;
    cout << "Civil Engineering Admissions: " << a1.branchAd("ci") << endl;
    cout << "Artificial Intelligence Admissions: " << a1.branchAd("aiml") << endl;

    return 0;
}

