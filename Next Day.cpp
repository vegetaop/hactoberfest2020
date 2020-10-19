#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
#define loop(i,c,n) for(int i=c;i<n;i++)
bool isleap(int yy)
{
	if( yy%400==0) return true;
	if(yy%100==0) return false;
	if (yy%4==0)  return true; 
	return false ;
}
void solve()
{
	int dd,mm,yy;
	string st; cin>>st;
	yy= std::stoi(st.substr(0,4));
	mm= std::stoi(st.substr(5,2));
	dd = std::stoi(st.substr(8,2));
	unsigned long long int count=0;
	if(mm==1||mm==3|| mm==5 ||mm==7||mm==8 ||mm==10 ||mm==12)
	{
		count=(31-dd+2)/2;
	}
	if(mm==4||mm==6|| mm==9 ||mm==11)
	{
		
		count=(61-dd+2)/2;
	} 
	if(mm==2)
	{
		if(isleap(yy))
		{
			count=(29-dd+2)/2;
		}else
		{
			count=(59-dd+2)/2;
		}
	}
	cout<<count<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}