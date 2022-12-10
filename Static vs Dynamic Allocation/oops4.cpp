#include <bits/stdc++.h>
using namespace std;

class Actor {
	string name;
	int sno;

public:

	string getName() {
		return name;
	}

	int getSno() {
		return sno;
	}

	void setName(string n) {
		try {
			if (n != "") {
				name = n;
			}
			else throw 505;
		}
		catch (...) {
			cout << "Name can't be empty!\n";
		}
	}

	void setSno(int s) {
		try {
			if (s > 0 && s < 5000) {
				sno = s;
			}
			else {
				throw 505;
			}
		}
		catch (...) {
			cout << "Enter a valid serial no.\n";
		}
	}

};


signed main(void) {
	Actor DJ;
	DJ.setName("Disc Jockey");
	DJ.setSno(5);

	Actor *adi = new Actor;
	(*adi).setName("Aditya");
	adi->setSno(1);

	cout << DJ.getName() << "\n";
	cout << sizeof(DJ) << "\n";
	cout << (*adi).getName() << "\n";
	cout << adi->getSno() << "\n";
}