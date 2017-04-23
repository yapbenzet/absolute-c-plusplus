// 2차원 배열 grade로부터 각 학생의 퀴즈 점수를 읽는다.
// 학생과 퀴즈의 평균 값을 계산한다. 퀴즈 점수와 평균을 출력한다.

#include <iostream>
#include <iomanip>

using namespace std;

const int NUMBER_STUDENTS = 4, NUMBER_QUIZZES = 3;

void computeStAve(const int grade[][NUMBER_QUIZZES], double stAve[]);
void computeQuizAve(const int grade[][NUMBER_QUIZZES], double quizAve[]);
void display(const int grade[][NUMBER_QUIZZES], const double stAve[], const double quizAve[]);

int main() {
  int grade[NUMBER_STUDENTS][NUMBER_QUIZZES] = {
    {10, 10, 10},
    {2, 0, 1},
    {8, 6, 9},
    {8, 4, 10}
  };
  double stAve[NUMBER_STUDENTS];
  double quizAve[NUMBER_QUIZZES];

  computeStAve(grade, stAve);
  computeQuizAve(grade, quizAve);
  display(grade, stAve, quizAve);

  return 0;
}

void computeStAve(const int grade[][NUMBER_QUIZZES], double stAve[]) {
  for (int stNum=1; stNum <= NUMBER_STUDENTS; stNum++) {
    double sum = 0;
    for(int quizNum=1; quizNum <= NUMBER_QUIZZES; quizNum++) {
      sum += grade[stNum-1][quizNum-1];
    }
    stAve[stNum-1] = sum / NUMBER_QUIZZES;
  }
}

void computeQuizAve(const int grade[][NUMBER_QUIZZES], double quizAve[]) {
  for (int quizNum=1; quizNum <= NUMBER_QUIZZES; quizNum++) {
    double sum = 0;
    for(int stNum=1; stNum <= NUMBER_STUDENTS; stNum++) {
      sum += grade[stNum-1][quizNum-1];
    }
    quizAve[quizNum-1] = sum / NUMBER_STUDENTS;
  }
}

void display(const int grade[][NUMBER_QUIZZES], const double stAve[], const double quizAve[]) {
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);

  cout << setw(10) << "Student";
  cout << setw(5) << "Ave";
  cout << setw(15) << "Quizzes" << endl;

  for(int stNum=1; stNum <= NUMBER_STUDENTS; stNum++) {
    cout << setw(10) << stNum;
    cout << setw(5) << stAve[stNum-1];
    for(int quizNum=1; quizNum <= NUMBER_QUIZZES; quizNum++) {
      cout << setw(5) << grade[stNum-1][quizNum-1];
    }
    cout << endl;
  }

  cout << "Quiz Averages = ";
  for(int quizNum=1; quizNum <= NUMBER_QUIZZES; quizNum++) {
    cout << setw(5) << quizAve[quizNum-1];
  }
  cout << endl;
}
