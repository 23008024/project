#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  cout<<"Calculating the euclidean distance between two points\n";
 int x1,x2,y1,y2;
 cout<<"Enter the value of x1\n";
 cin>>x1;

cout<<"Enter the value of x2\n";
 cin>>x2;
int x=x2-x1;
cout<<"Enter the value of y1\n";
 cin>>y1;



cout<<"Enter the value of y2\n";
 cin>>y2;
 int z=y2-y1;


int distance=sqrt(pow(x,2)+pow(z,2));
cout<<"the distance between point 1 and point 2 is:";
cout<<distance;

    return 0;
}
