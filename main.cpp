#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int&,int&,int&);
void swap(int&,int&);

int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);

  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

//A function which takes in 3 variables and rearranged them according to value (least to greatest)
void sortDescending(int &first, int &second, int &third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
}

//A function that swaps two integer values by using a temporary integer
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
