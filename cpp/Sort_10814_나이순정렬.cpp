#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class member {
public:
   int age;
   string name;
   member(int a, string b) {
      age = a;
      name = b;
   }
};

vector<member> v;

bool compare(member a, member b) {
   if (a.age < b.age) return true;
   else return false;
}

int main() {
   int N;
   cin >> N;
   for (int i = 0; i < N; i++)
   {
      int a;
      string b;
      cin >> a >> b;
      v.push_back(member(a, b));
   }
   stable_sort(v.begin(), v.end(), compare);
   for (int i = 0; i < N; i++)
   {
      cout << v[i].age << " " << v[i].name << "\n";
   }
}