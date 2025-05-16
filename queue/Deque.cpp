// deque stands for Double Ended Queue — it allows insertion and deletion from both front and back.


#include <iostream>
#include<deque>
using namespace std;


int main() {
    deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    cout<< dq.front();
        cout<< dq.back();

        dq.pop_front() ;
        dq.pop_back();
    return 0;
}
