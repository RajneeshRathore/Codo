/*Anna is a contender for valedictorian of her high school. She wants to know how
many students (if any) have scored higher than her in the exams given during this
semester.
Create a class named Student with the following specifications:
➢ An instance variable named scores holds a student's 5 exam scores.
➢ A void input () function reads 5 integers and saves them to scores.
➢ An int calculateTotalScore() function that returns the sum of the student's
scores.
Input Format
In the void Student::input() function, you must read 5 scores from standard input
and save them to your scores instance variable.
*/
#include <iostream>
using namespace std;
class Student
{
    int score[5];

public:
    void input(int n)
    {
        cout << "Enter the marks of five exams :";
        for (int i = 0; i < n; i++)
        {
            cin >> score[i];
        }
    }
    int calculate_totalscore(int n)
    {
        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += score[n];
        }
        return total;
    }
};
int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter scores for student " << i + 1 << ":" << endl;
        s->input(n);
    }
    int annaScore = s[0].calculate_totalscore(n);
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i].calculate_totalscore(n) > annaScore)
        {
            count++;
        }
    }
    cout << "Number of students who scored higher than Anna: " << count << endl;
    return 0;
}
