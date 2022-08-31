

#include <iostream>
#include <cstdlib>

using namespace std;


struct student {
    string firstname;
    string lastname;
    int ide;
    string Section;
    int yaer;
    string SubjectName;
    string SubjectName2;
    float digret;
    float digret2;
    float sum;




};
int main()
{
    int n, choise, change;
    string sersh;
    cout << "enter the number student :";
    cin >> n;
    student s_stu[n];
    system("cls");
    do {
        cout << "1-Enter student data" << endl;
        cout << "2-Print student data" << endl;
        cout << "3-Order student data" << endl;
        cout << "4-Print student data according to their academic grade" << endl;
        cout << "5-Find student data" << endl;
        cout << "6-Get out of the program" << endl;
        cout << "Choose from the list" << endl << "choose number :";
        cin >> choise;
        switch (choise)
        {
        case 1:
            for (int i = 0;i < n;i++) {
                cout << "student: " << i + 1 << endl;
                cout << "-------------------" << endl;
                cout << "enter the firstname : " << endl;
                cin >> s_stu[i].firstname;
                cout << "enter the lastname : " << endl;
                cin >> s_stu[i].lastname;
                cout << "enter the ide : " << endl;
                cin >> s_stu[i].ide;
                while (s_stu[i].ide != 12345) {
                    cout << "error!!,your enter is wrong " << endl;
                    cout << "please enter agine :";
                    cin >> s_stu[i].ide;
                }
                cout << "enter the Section : " << endl;
                cin >> s_stu[i].Section;
                cout << "enter the yaer : " << endl;
                cin >> s_stu[i].yaer;
                cout << "enter the subject name : " << endl;
                cin >> s_stu[i].SubjectName;
                cout << "enter the digret : " << endl;
                cin >> s_stu[i].digret;
                cout << "enter the subject name2 : " << endl;
                cin >> s_stu[i].SubjectName2;
                cout << "enter the digret : " << endl;
                cin >> s_stu[i].digret2;
                cout << "\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
            }
            for (int i = 0;i < n;i++) {
                s_stu[i].sum = 0.0;
                s_stu[i].sum = s_stu[i].digret + s_stu[i].digret2 / 100 * 100;
                cout << s_stu[i].firstname << " " << s_stu[i].lastname << endl;
                cout << s_stu[i].ide << endl;
                cout << s_stu[i].Section << endl;
                cout << s_stu[i].yaer << endl;
                cout << s_stu[i].SubjectName << endl;
                cout << s_stu[i].digret << endl;
                cout << s_stu[i].SubjectName2 << endl;
                cout << s_stu[i].digret2 << endl;
                cout << "this is avreg the student : " << endl;
                cout << s_stu[i].sum << "\n\n*********************************\n" << endl;

            }
            break;
        case 2:
            for (int i = 0;i < n;i++) {
                s_stu[i].sum = 0.0;
                s_stu[i].sum = s_stu[i].digret + s_stu[i].digret2 / 100 * 100;
                cout << s_stu[i].firstname << " " << s_stu[i].lastname << endl;
                cout << s_stu[i].ide << endl;
                cout << s_stu[i].Section << endl;
                cout << s_stu[i].yaer << endl;
                cout << s_stu[i].SubjectName << endl;
                cout << s_stu[i].digret << endl;
                cout << s_stu[i].SubjectName2 << endl;
                cout << s_stu[i].digret2 << endl;
                cout << "this is avreg the student : " << endl;
                cout << s_stu[i].sum << "\n\n*********************************\n" << endl;

            }
            break;
        case 3:
            for (int i = 0;i < n;i++) {
                cout << "student: " << i + 1 << endl;
                cout << "-------------------" << endl;
                cout << "enter the firstname : " << endl;
                cin >> s_stu[i].firstname;
                cout << "enter the lastname : " << endl;
                cin >> s_stu[i].lastname;
                cout << "enter the ide : " << endl;
                cin >> s_stu[i].ide;
                while (s_stu[i].ide != 12345) {
                    cout << "error!!,your enter is wrong " << endl;
                    cout << "please enter agine :";
                    cin >> s_stu[i].ide;
                }
                cout << "enter the Section : " << endl;
                cin >> s_stu[i].Section;
                cout << "enter the yaer : " << endl;
                cin >> s_stu[i].yaer;
                cout << "enter the subject name : " << endl;
                cin >> s_stu[i].SubjectName;
                cout << "enter the digret : " << endl;
                cin >> s_stu[i].digret;
                cout << "enter the subject name2 : " << endl;
                cin >> s_stu[i].SubjectName2;
                cout << "enter the digret : " << endl;
                cin >> s_stu[i].digret2;
                cout << "\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
                for (int i = 0;i < n - 1; i++) {
                    for (int j = i + 1;j < n;j++) {
                        s_stu[i].sum = 0.0;
                        s_stu[i].sum = s_stu[i].digret2 + s_stu[i].digret2 / 100 * 100;
                        if (s_stu[n].sum > s_stu[j].sum) {
                            change = s_stu[n].sum;
                            s_stu[n].sum = s_stu[n].sum;
                            s_stu[n].sum = change;

                        }
                    }
                }



            }
            break;
        case 4:
            for (int i = 0;i < n;i++) {
                cout << s_stu[i].firstname << " " << s_stu[i].lastname << endl;
                cout << s_stu[i].sum << endl;
            }
            break;
        case 5:
            for (int i = 0;i < n;i++) {
                cout << "enter first name student :";
                cin >> sersh;
                if (sersh == s_stu[i].firstname) {
                    s_stu[i].sum = 0.0;
                    s_stu[i].sum = s_stu[i].digret + s_stu[i].digret2 / 100 * 100;
                    cout << s_stu[i].firstname << " " << s_stu[i].lastname << endl;
                    cout << s_stu[i].ide << endl;
                    cout << s_stu[i].Section << endl;
                    cout << s_stu[i].yaer << endl;
                    cout << s_stu[i].SubjectName << endl;
                    cout << s_stu[i].digret << endl;
                    cout << s_stu[i].SubjectName2 << endl;
                    cout << s_stu[i].digret2 << endl;
                    cout << "this is avreg the student : " << endl;
                    cout << s_stu[i].sum << "\n\n*********************************\n" << endl;
                }
            }
            break;
        case 6:
            cout << "\t\t****************** Thank you for using our app ********************* \n\n\n\n\n\n\n\n";
            exit(0);
            break;
        default:
            cout << "it is wrong enter " << endl;
            break;
        }

    } while (true);


    return 0;
}
