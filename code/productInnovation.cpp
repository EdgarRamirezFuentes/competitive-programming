#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, p; cin >> n >> p;
	list<int> nums;
	int num;
	auto it = nums.begin();
	while(n--) {
		cin >> num;
		nums.push_back(num);
	}
	it = nums.begin();
	advance(it,p-1);
	int q; cin >>  q;
	while(q--) {
		auto lastNumber = prev(nums.end(),1);
		auto nextNumber = next(it,1);
		string command;
		cin >> command;
		if(command == "print") {
			cout << *it << endl;
		}
 
		if(command == "moveLeft") {
			if(it != nums.begin()) it--;
		}
 
		if(command == "moveRight") {
			if(it != lastNumber) it++;
		}
 
		if(command == "insertLeft") {
			cin >> num;
			nums.insert(it,num);
		}
 
		if(command == "insertRight") {
			cin >> num;
			if(it == lastNumber) {
				nums.push_back(num);
			}else{
				nums.insert(nextNumber, num);
			}
		}
	}
	return 0;	
}
