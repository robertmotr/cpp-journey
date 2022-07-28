#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
	public:
		bool isValid(string s) {
			stack<int> m;
			for(const char &ch : s) {
				if(ch == '(' || ch == '{' || ch == '[') {
					m.push(ch);
				}
				else {
					if(m.empty() == true) {
						return false;
					}
					else if(m.top() == '(' and ch != ')' || m.top() == '{' and ch != '}' || m.top() == '[' and ch != ']') {
						return false;
					}
					else {
						m.pop();
					}
				}
			}
			return m.empty() == true;
	}
};

int main() {

	return 0;

}