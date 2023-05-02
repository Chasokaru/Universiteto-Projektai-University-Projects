

/*9
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, time;
    cin >> t;
    while (t--) {
        map<pair<int,int>,bool> x, y;
        auto pair = make_pair(0, 0);
        x[pair]=0;
        y[pair]=0;
        time = 0;
        string moves;
        cin >> moves;
        for (char move : moves) {
            if (move == 'N') 
            {
              pair.second++;
              if(y[pair] == true)
              {
                time++;
              }
              else{
                y[pair] = true;
                time+=5;
              }
            }
            else if (move == 'S') 
            {
              if(y[pair] == true)
              {
                time++;
              }
              else{
                y[pair] = true;
                time+=5;
              }
              pair.second--;
            }
            else if (move == 'E') 
            {
              pair.first++;
              if(x[pair] == true)
              {
                time++;
              }
              else{
                x[pair] = true;
                time+=5;
              }
            }
            else 
            {
              if(x[pair] == true)
              {
                time++;
              }
              else{
                x[pair] = true;
                time+=5;
              }
              pair.first--;
            }
        }
        cout << time << endl;
    }
}

*/



/* 8
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += abs(a[i] - b[i]);
    }
     printf("%.9lf", sum/n);
}

*/






/* 4
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, q, r, s, t, u;
    double a, b, x, val;
    while(cin >> p >> q >> r >> s >> t >> u)
      {
    a = 0;
    b = 1;
    bool test = false;
    for (int i = 0; i < 50; i++) {
    x = (a + b) / 2;
    val = p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
    if (val > 0) {
      a = x;
    } 
    else {
      b = x;
    }
    if (fabs(val) < 1e-10) {
      test = true;
      printf("%.4lf\n", x);
      break;
    }
  }
      
  if (!test) {
    cout << "No solution";
  }  
      }
  exit(0);
}
*/


/*3
#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b,d;
    cin>>d;

    a = (d + sqrt(d*d - 4*d)) / 2;
    b = d - a;
    cout<<fixed<<setprecision(9);
    if(a!=a)
    {
      cout<<"NERA";
      return 0;
    }
    if(a>b)
    {
      cout<<b<<" "<<a;
    }
    else
    {
      cout<<a<<" "<<b; 
    }
}
*/

/*2
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  long long balls, n, test;
  cin>>balls;

  n=1;
  test=0;
  while(test<=balls)
    {
      test = n*(n+1)*(n+2)/6;
      n++;
    }
  cout<<n-2;
}
*/

/*1
#include <iostream>
using namespace std;

int main() {
  long long balls, n;
  cin>>n;
  balls = n*(n+1)*(n+2)/6;
  cout<<balls;
}
*/