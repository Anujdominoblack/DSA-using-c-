// the idea for this solution is we considers numbers as string
// we tried to enque 5&6 we run a loop we pop out from queue and append 
// 5 and 6 and then we enqueqe it again
#include<iostream>
#include<queue>
using namespace std;

void printN(int n)
{
    queue<string> q;
    q.push("5");
    q.push("6");
    // enque 5 and 6
    for(int count=0;count<n;count++)
    {
        string curr = q.front(); //getting curr element
        cout<<curr<<" ";
        q.pop();
        q.push(curr+"5");
        q.push(curr+"6");
    }

}
//driver code
int main()
{
    printN(10);
    return 0;
}