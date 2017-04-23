// 강낭콩 실험 재배지의 평균 수확량을 계산한다.

#include <iostream>
using namespace std;

double estimateOfTotal(int minPeas, int maxPeas, int podCount);
// 수확한 총 강낭콩 수의 추정치를 return
// podCount는 콩깍지의 수
// maxPeas, minPeas는 최소와 최대의 콩깍지 수

int main() {
  int maxCount, minCount, podCount;
  double averagePea, yield;

  cout << "Enter minimum and maximum number of peas in a pod: ";
  cin >> minCount >> maxCount;

  cout << "Enter the number of pods: ";
  cin >> podCount;

  cout << "Enter the weight of an average pea (in ounces): ";
  cin >> averagePea;

  yield = estimateOfTotal(minCount, maxCount, podCount) * averagePea;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(3);

  cout << "Min number of peas per pod = " << minCount << endl;
  cout << "Max number of peas per pod = " << maxCount << endl;
  cout << "Pod count = " << podCount << endl;
  cout << "Average pea weight = " << averagePea << "ounces" << endl;
  cout << "Estimated average yield = " << yield << " ounces" << endl;

  return 0;
}

double estimateOfTotal(int minPeas, int maxPeas, int podCount) {
  double averagePea;

  averagePea = (maxPeas + minPeas) / 2.0;
  return (podCount * averagePea);
}
