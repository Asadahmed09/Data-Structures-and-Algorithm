#include "iostream"
using namespace std;

class University
{
public:
  int id, age;
  double gpa;
  string name;
  University() : id(0), age(0), gpa(0), name("none") {}
  void addDetails(int id, int age, double gpa, string name)
  {
    this->id = id;
    this->age = age;
    this->gpa = gpa;
    this->name = name;
  }
};

void Sort_Gpa(University *arr, int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int MaxIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j].gpa > arr[MaxIndex].gpa) // ✅ pick max GPA
      {
        MaxIndex = j;
      }
    }
    swap(arr[i], arr[MaxIndex]);
  }
}

void Search_Gpa(University *arr, int n, double target)
{
  int start = 0, Last = n - 1, Middle;
  while (start <= Last)
  {
    Middle = (start + Last) / 2; // ✅ correct middle

    if (arr[Middle].gpa == target)
    {
      cout << "GPA found -> "
           << arr[Middle].name << " (" << arr[Middle].gpa << ")\n";
      return;
    }
    else if (arr[Middle].gpa > target)
    {
      Last = Middle - 1;
    }
    else
    {
      start = Middle + 1;
    }
  }
  cout << "GPA not found!\n";
}

void displayObject(University *obj, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "Name: " << obj[i].name
         << " - GPA: " << obj[i].gpa << endl;
  }
  cout << "-------------------\n";
}

int main()
{
  University *batch22 = new University[3];
  batch22[0].addDetails(1, 18, 3.6, "Asad Ahmed");
  batch22[1].addDetails(2, 18, 3.8, "Asad Janjua");
  batch22[2].addDetails(3, 18, 3.5, "Asad Khan");

  cout << "Before sorting:\n";
  displayObject(batch22, 3);

  Sort_Gpa(batch22, 3);

  cout << "After sorting (descending by GPA):\n";
  displayObject(batch22, 3);

  cout << "Searching GPA 3.8:\n";
  Search_Gpa(batch22, 3, 3.8);

  delete[] batch22;
}
