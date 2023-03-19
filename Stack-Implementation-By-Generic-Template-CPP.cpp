//           * * Bismillahir Rahmanir Rahim  * *
// ************************@Author*******************************
/*                    Asik Ifthaker Hamim                       */
#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef pair<ll,ll> pr;
#define pb push_back
#define sz(n) n.size()
#define vs(n) (int)n.size()
#define pp pop_back
#define sp(n) setprecision(n)
const int MOD = 1000000007;
#define ffor(a, b) for (int i = a; i <b; i++)
#define frev(b, a) for (int i = b; i >= a; i--)
#define PI (acos(-1.0))
#define torad(x) ((x)*((2*acos(0))/180.0))
#define todeg(x) ((x)*(180.0/(2*acos(0))))
#define fixAngle(x) ((x)>1?1:(x)<-1?-1:(x))
#define tan(a) tan(a)/(pi/180)
#define sin(a) sin(a)/(pi/180)
#define cos(a) cos(a)/(pi/180)
#define inverse_sin(a) asin(a)/(pi/180)
#define inverse_cos(a) acos(a)/(pi/180)
#define inverse_tan(a) atan(a)/(pi/180)
const int dr4[] = {0, 1, 0, -1};
const int dc4[] = {1, 0, -1, 0};
const int dr8[] = {0, 1, 1, 1, 0, -1, -1, -1};
const int dc8[] = {1, 1, 0, -1, -1, -1, 0, 1};
using namespace std;
double neg_infinity(-std::numeric_limits<double>::infinity());
template<typename T>
class Stack
{
    int top,MAX=100;
    T arr[1000];
public:
    Stack()
    {
        top=0;
    }
    void Push(T x)
    {
        if(top==MAX)
        {
            cout<<"Overflow"<<endl;
            return;
        }
        arr[top++]=x;
    }
    void Pop()
    {
        if(top==0)
        {
            cout<<"Underflow"<<endl;
            return;
        }
        top--;
    }
    T Top()
    {
        return arr[top-1];
    }
    int Size()
    {
        return top;
    }

};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    Stack<char>st;
    st.Push('a');
    st.Push('b');
    st.Push('r');
    st.Push('q');
    cout<<st.Size()<<endl;
    cout<<st.Top()<<endl;
    st.Pop();
    st.Pop();
    cout<<st.Size()<<endl;
    cout<<st.Top()<<endl;
    st.Pop();
    st.Pop();
    st.Pop();

}


