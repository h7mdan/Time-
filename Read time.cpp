//Write a C++ program to read time in HH:MM:SS format and convert into total seconds using class.
#include<iostream>
#include<iomanip>
	using namespace std;
	
	class Time{
		private:
			int seconds;
			int hh,mm,ss;
		public:
			void getTime(void);
			void convertimeintoseconds(void);
			void displayTime(void);
	};
	
	void Time::getTime(void)
	{
		cout<<"Enter time: "<<endl;
		cout<<"Hours? ";
		cin>>hh;
		cout<<"Minutes? ";
		cin>>mm;
		cout<<"Seconds? ";
		cin>>ss;
	}
	void Time::convertimeintoseconds(void)
	{
		seconds=hh*3600+mm*60+ss;
	}
	
	void Time::displayTime(void)
	{
		cout<<"The time is = "<<setw(2) << setfill('0')<<hh<<":"<<setw(2) << setfill('0')<<mm<<":"<<setw(2) << setfill('0')<<ss<<endl;
		
		cout<<"Time in Total seconds = "<<seconds;
	}
	
	main()
	{
		Time t;
		t.getTime();
		t.convertimeintoseconds();
		t.displayTime();
		
		return 0;
	}
	
