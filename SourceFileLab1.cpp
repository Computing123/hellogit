#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  //using auto
  auto letter = "A";
  auto n= 1;
  auto name= "Family";
  
  cout << "Char is: " << letter << endl;
  cout << "Int is: " << n << endl;
  cout << "String is: " << name << endl;
  
  //using vectors
  vector<int> vec;
  vec.push_back(12);
  vec.pop_back();
  //using loop for push
  for (unsigned int i=0; i<5; i++) 
  {
   vec.push_back(i);
  }
  //printing vector with for loop
  for(unsigned int a=0; a < vec.size(); a++) 
  {
    cout<< "Vector: " << vec[a] << endl;
  }
  //using loop for pop
  for (unsigned int f=0; f<1; f++) 
  {
     vec.pop_back();
  }
  //loop with auto
  for (auto vect: vec)
  {
    cout << vect << endl;
  }

  //strings
  string str1="GoodMorning";
  string str2= str1 + name;
  cout << "First string: "<< str1 << endl;
  cout << "Third character of first string: "<< str1[2] << endl;
  cout << "Second string: "<< str2 << endl;
  cout << "Size of first string: " << str1.size() << endl;
  
  if (str1 == "GoodMorning")
  {
   cout << "Correct"<<endl;
  }
  return 0;
 }
