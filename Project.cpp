#include <iostream>
using namespace std;

double CgpaCalc(double marks[], int n) {
    double gradePoints = 0;
    for (int i = 0; i < n; i++) {
        gradePoints += (marks[i] / 10.0); 
    }
    return gradePoints / n;
}

int main() {
    int n;
    cout << "Enter number of subjects: ";
    cin >> n;
    double marks[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
    }
    double cgpa = CgpaCalc(marks, n);
    cout << "CGPA = " << cgpa << endl;
    cout << "CGPA Percentage = " << cgpa * 9.5 << endl; 
    return 0;
}
