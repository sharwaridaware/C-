#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

class timer
{
public:
	int hour, min, sec;
	int setTime()
	{
		time_t now = time(0);
		tm *ltm = localtime(&now);
		hour = ltm->tm_hour;
		min = ltm->tm_min;
		sec = ltm->tm_sec;
		cout << hour << endl;
		cout << min << endl;
		cout << sec << endl;
	}
	int getTime()
	{
		time_t now = time(0);
		tm *ltm = localtime(&now);
		hour = ltm->tm_hour;
		min = ltm->tm_min;
		sec = ltm->tm_sec;
	}

	timer sleeptime(timer t1, timer t2)
	{
		timer t3;
		t3.hour = t2.hour - t1.hour;
		t3.min = t2.min - t1.min;
		t3.sec = t2.sec - t1.sec;
		return t3;
	}
};

class date
{
public:
	int year, month, day;
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int setdate(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
		cout << "Year " << year << "Month " << month << "Day " << day << endl;
	}

	date getdate()
	{
		date d;
		d.year = 1900 + ltm->tm_year;
		d.month = 1 + ltm->tm_mon;
		d.day = ltm->tm_mday;
		return d;
	}

	date setdob(int y, int m, int d)
	{
		date d1;
		d1.year = y;
		d1.month = m;
		d1.day = d;
		return d1;
	}

	void findage(date dob)
	{
		date d = getdate();
		date diff;
		diff.year = d.year - dob.year;
		diff.month = d.month - dob.month;
		diff.day = d.day - dob.day;
		cout << "Age is " << diff.year << "Years " << diff.month << "Months " << diff.day << "Days old" << endl;
	}
};

int main()
{
	timer t;
	timer d1, d2, d3;
	timer diff1, diff2;
	int h, m, s;
	t.setTime();
	t.getTime();
	cout << t.hour << " " << t.min << " " << t.sec << endl;
	t.getTime();
	h = t.hour;
	m = t.min;
	s = t.sec;
	diff1.hour = h;
	diff1.min = m;
	diff1.sec = s;
	sleep(10);
	t.getTime();
	h = t.hour;
	m = t.min;
	s = t.sec;
	diff2.hour = h;
	diff2.min = m;
	diff2.sec = s;
	d3 = t.sleeptime(diff1, diff2);
	cout << "Hours " << d3.hour << " Minutes " << d3.min << " Seconds " << d3.sec << endl;
	date p;
	p.setdate(2012, 2, 3);
	date d;
	d = p.getdate();
	date dob;
	dob = p.setdob(2000, 16, 3);
	cout << "Year " << dob.year << "Month " << dob.month << "Day " << dob.day << endl;
	p.findage(dob);

	return 0;
}
