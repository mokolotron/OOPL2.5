#include <iostream>
#include <queue>
#include <time.h>
#include <stdlib.h>  
#include <chrono>
#include <random>;
#include <windows.h>
#include "Source.h"
using namespace std;
//using namespace std::chrono;



int random() {
	return rand() % 100;
}

void show(deque<int> q) {
	deque<int>::iterator qit;
	
	for (qit = q.begin(); qit < q.end(); qit++)
		cout << *qit << ' ';
	cout << endl;
}

int main() {
	const int  size = 6;
	std::deque<int> que;
	srand(time(NULL));
	
	for(int i = 0; i < size; i++)
		que.push_back(random());
	show(que);

	que.pop_back();
	que.pop_front();
	deque<int>::iterator h = que.begin() + 3;
	que.insert( h , 100);
	show(que);

	srand(time(NULL)+1);
	std::deque<int> que2;
	for (int i = 0; i < size; i++)
		que2.push_back(random());
	

	int inp1, inp2;
	/*cout << "From which element erase queue? ";
	cin >> inp1;
	cout << "How many elems need to ears? ";
	cin >> inp2;*/

	inp1 = 2;
	inp2 = 2;


	que.erase(que.begin() + inp1, que.begin() + inp1 + inp2);
	que.insert(que.begin(), que2.begin(), que2.end());

	show(que);
	show(que2);


	return 0;
}

