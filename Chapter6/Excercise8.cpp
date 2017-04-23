#include <iostream>
using namespace std;

struct CourseLevel {
  char level;
  double fee;
};

void readCourseRecord(CourseLevel& newCourse);
CourseLevel discount(CourseLevel oldRecord);

int main() {
  CourseLevel course, newCourse;

  readCourseRecord(course);
  newCourse = discount(course);

  cout << "Course Level: " << newCourse.level << endl
  << "Course Fee: " << newCourse.fee << endl;
}

void readCourseRecord(CourseLevel& newCourse) {
  cout << "Enter level: ";
  cin >> newCourse.level;

  cout << "Enter fee: ";
  cin >> newCourse.fee;
}

CourseLevel discount(CourseLevel oldRecord) {
  oldRecord.fee -= oldRecord.fee * 0.1;
  return oldRecord;
}
