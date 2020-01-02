#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool end = false;
    int choice, num, p;
    
    struct Queue {
    	stack<int> s1, s2;
    	
    	void enQueue(int x) {
    		while(!s1.empty()) {
    			s2.push(s1.top());
    			s1.pop();
			}
			s1.push(x);
			while(!s2.empty()) {
				s1.push(s2.top());
				s2.pop();
			}
		}
		
		int deQueue() {
			if(s1.empty()) {
				cout << "Queue is empty" << endl;
				return -1;
			}
			else {
				int x = s1.top();
				s1.pop();
				return x;
			}
		}
	};
	
	Queue q;
	
	
	while(!end) {
		cout << "Press 1 to enqueue, 2 to dequeue, 3 to exit" << endl;
		cin >> choice;
		switch(choice) {
			case 1:
				cout << "Enter the number" << endl;
				cin >> num;
				q.enQueue(num);
				break;
			case 2:
				p = q.deQueue();
				if(p != -1) {
					cout << "Dequeued number: " << p << endl;
				}
				break;
			case 3:
				end = true;
				break;
			default:
				cout << "Invalid option\n" << endl;
		}
	}
    
    return 0;
}
