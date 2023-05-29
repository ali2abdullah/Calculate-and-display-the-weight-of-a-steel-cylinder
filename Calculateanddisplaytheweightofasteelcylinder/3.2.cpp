//Ali Abdullah Al Omani
//431900303

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   double weight, volume, density, h, r, pi;
   
  pi = 3.1416;
  density= 0.284;
  cout <<"Please enter the height : ";
  cin >> h;
  
  cout <<"Please enter the radius : ";
  cin >> r;
    
    volume = pi * pow(r,2.0) * h ;
    weight = volume * density;
    
    cout << fixed
         << setprecision(3) << "The weight is : " << weight;
    
    return 0;
}

