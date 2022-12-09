#include <bits/stdc++.h>
using namespace std;

class Actor {
public:
	string name;
	int sno;
};


signed main(void) {
	Actor DJ;
	DJ.name = "Disc Jockey";
	DJ.sno = 1;

	cout << DJ.name << "\n";
	cout << sizeof(DJ) << "\n";
}