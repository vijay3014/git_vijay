#include<iostream>

using namespace std;
class cube
{
    double area;
    double side;

   public:
      void setdata(double s)
      {

               side = s;
          
      }
   cube operator +(cube &c)
  {
     cube cu;
     cu.side = side + c.side;

     return cu;
  }

  double getdata()
   {

       area  = 6*side*side;
       return area;
   }
};

int main()
{
   cube c1,c2,c3;

   c1.setdata(1);
   cout << "cube 1 value is :"<< c1.getdata() << endl;

   c2.setdata(2);
   cout << "cube 2 value is :"<< c2.getdata() << endl;

    c3 = c1 + c2;
    cout << "cube 3 value is :"<< c3.getdata() << endl;
}








