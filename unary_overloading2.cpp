#include<iostream>
using namespace std;
class rectangle
{
   double length;
   double width;
   public:

   void setdata(double l, double w)
 {
    length =l;
    width = w;
 }
     rectangle operator+(rectangle &r)
   {
      rectangle rec;

     rec.length = length + r.length;
     rec.width  = width  + r.width;
     
     return rec;

   }   
         
         double getdata()
         {
            return length*width;
         }
};

       int main()
   {
      rectangle rec1,rec2,rec3;
      rec1.setdata(5.2,2.5);
      cout << "rectangle 1 value is :"<<rec1.getdata()<<endl;

      rec2.setdata(10.,5.5);
      cout <<"rectangle 2 value is :"<<rec2.getdata()<<endl;

      rec3=rec1+rec2;
      cout<<"rectangle 3 value is :"<< rec3.getdata()<<endl;
   }    