#include <iostream>
using namespace std;
int main() {
    int month_size[]   = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int dayOfWeek    = 1 ; // bat dau tu thu 2 ngay 1/1//1900
    int sunday_count = 0;    
    for(int i=0;i<12;i++)  // tinh xem 1/1/1901 la thu may ?
    {
        dayOfWeek+=month_size[i]%7;
		if(dayOfWeek>7)
		dayOfWeek=0+dayOfWeek%7;	
	}
	for(int i=1901;i<2001;i++)
	{
		if(i%4==0&&i%100!=0 || i%400==0) // kiem tra nam nhuan
		month_size[1]=29;
		else month_size[1]=28;
		for(int j=0;j<12;j++)  
      {
        dayOfWeek+=(month_size[j]%7);
		if(dayOfWeek>7)
		{
			dayOfWeek=0+ dayOfWeek%7;
		}
		else if(dayOfWeek==7) 
		{
			sunday_count++;
		}
	  }
   }
   cout<<"there are "<<sunday_count<<" Sundays fell on the first of the month during the twentieth century ";
   return 0;
}
