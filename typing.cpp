#include<bits/stdc++.h>
#include<chrono>
#include<thread>
#include<ctime>
#include<cstdlib>
using namespace std::this_thread;
using std::chrono::system_clock;
using namespace std::chrono;
using namespace std;
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	srand(time(NULL));
	s.clear();
	ifstream in;
	in.open("dihydrogen_monoxide.txt");
	while(getline(in,s)){
		for(int i=0;i<s.length();i++){
			cout<<s.at(i);
			cout.flush();
			sleep_for(milliseconds(rand()%100+30));
			if(i%(rand()%12+18)==0){
				cout<<char(rand()%26+'a');
				cout.flush();
				sleep_for(milliseconds(rand()%100+200));
				cout<<"\b ";
				cout.flush();
				sleep_for(milliseconds(rand()%100+200));
				cout<<"\b";
			}
		}
		s.clear();
		cout<<endl;
	}
	return 0;
}
