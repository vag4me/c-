#include <iostream>
#include <iomanip>  
#include <cmath>
using namespace std;

struct time
{
	int seconds;
	int minutes;
	int hours;
};


time take_time()
{
	time t;
	
	cout << "please give the seconds" << endl;
	cin >> t.seconds;
	cout << "give the minutes" << endl;
	cin >> t.minutes;
	cout << "give the hours" << endl;
	cin >> t.hours;
	
	return t;	
}

time final(int result)
{
	time t;
	t.hours = result/3600;
	t.minutes = (result%3600)/60;
	t.seconds = (result%3600)%60;
	return t;
}

int time2seconds(time t)
{
	return t.seconds + (t.minutes * 60) + (t.hours * 3600);
}

time calculate(time t1, time t2)
{
	int start,end,re;
	time f;
	
	start = time2seconds(t1);
	end = time2seconds(t2);
	
	re = end - start;
	f = final(re);	
	return f;
}




int main(){
	time start;
	time end;
	time res;
	
	start = take_time();
	end = take_time();
	
	res = calculate(start,end);
	
	cout << "time taken " << res.seconds << "/" << res.minutes << "/" << res.hours;
	

}
