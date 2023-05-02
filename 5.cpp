/* 9
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
  int k = 0;
    int list[100000];
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        int ACM = 0;
        vector<int> divisors;
        for (int j = 1; j <= sqrt(i); j++) {
            if (i % j == 0) {
                ACM++;
                divisors.push_back(j);
                if (j != i/j) {
                    ACM++;
                    divisors.push_back(i/j);
                }
            }
        }

        int product = ACM;
        for (int j = 2; j < product; j++) {
            if (is_prime(j) && product % j == 0) {
                int factor = product / j;
                if (is_prime(factor)) {
                    list[k] = i;
                  k++;
                    break;
                }
            }
        }
    }
  if(k>0)
  {
    cout<<list[0];
    for(int i=1; i < k; i++)
    {
      cout<<" "<<list[i];
    }
  }
  if(k==0)
  {
    cout<<0;
  }

    return 0;
}

*/






/* 8
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int main() {
  unsigned long long top1, bottom1, top2, bottom2, addtop, addbottom;
  cin >> top1 >> bottom1 >> top2 >> bottom2;

  unsigned long long divisor1 = gcd(top1, bottom1);
  unsigned long long divisor2 = gcd(top2, bottom2);
  top1 /= divisor1;
  bottom1 /= divisor1;
  top2 /= divisor2;
  bottom2 /= divisor2;

  addtop = top1*bottom2 + top2*bottom1;
  addbottom = bottom1*bottom2;

  unsigned long long adddivisor = gcd(addtop, addbottom);
  addtop /= adddivisor;
  addbottom /= adddivisor;

  cout << addtop << " " << addbottom << endl;
}

*/



/*7
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int main() {
  unsigned long long top, bottom;
  cin >> top >> bottom;

  unsigned long long divisor = gcd(top, bottom);
  top /= divisor;
  bottom /= divisor;

  cout << top << " " << bottom << endl;

}
*/

/* 6
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int main() {
    int arr[1000];
    int n;
   int spin = 0;
  int i=0;
    cin >> n;
    for (int i = 0; i < n*2; i++) {
        cin >> arr[i];
    }

  while(spin != n){
    int maxGcd = 0;
    int currGcd = gcd(arr[i], arr[i+1]);
    maxGcd = max(maxGcd, currGcd);
    i+=2;

    cout << maxGcd << endl;
    spin++;
    }
}
*/

/* 5 UNFINISHED 
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
  int list[100000];
  int list2[100000];
  int input;
  int helper;
  int i = 1;
  int checker = 0;
  int j = 1;
  int amount;
  
  cin >> amount;
  for (int i = 0; i < amount; i++) {
    cin >> list[i];
  }

  sort(list, list + amount);

  input = list[amount-1]*list[0];
 
  while (i <= sqrt(input)) {
    if (input % i == 0) {
      list2[checker] = i; 
      checker++;
      if (i != sqrt(input)) {
        list2[checker] = input / i;
        checker++; 
      }
    }
    i++;
  }
  
  sort(list2, list2+checker);

  bool check = true;
  for (int i = 2; i <= sqrt(checker); i++) {
  if (checker % i == 0) {
    bool progress = false;
    for (int j = 0; j < amount; j++) {
      if (list[j] == i) {
        progress = true;
        break;
      }
    }
    if (!progress) {
      check = false;
      break;
    }
    if (i != checker/i) {
      progress = false;
      for (int j = 0; j < amount; j++) {
        if (list[j] == checker/i) {
          progress = true;
          break;
        }
      }
      if (!progress) {
        check = false;
        break;
      }
    }
  }
}

for (int i = 0; i < amount; i++) {
  cout << list[i] << " ";
      }
  cout << endl;
  for (int i = 1; i != amount; i++) {
  cout << list2[i] << " " ;
      }
cout << endl;
  
for (int i = 0; i < amount-1; i++) {
      if (list[i] != list2[i+1]) {
          cout<<-1;
        return 0;
      }
  }

  cout << input;
  
}
*/




/* 4
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
  long long list[100000];
  long long input;
  long long helper;
  long long i = 1;
  long long checker = 0;
  long long j = 1;
  int e = 0, o = 0;

  cin>>input;

  while (i <= sqrt(input)) {
    if (input % i == 0) {
      list[checker] = i; 
      checker++;
      if (i != sqrt(input)) {
        list[checker] = input / i;
        checker++; 
      }
    }
    i++;
  }
  
  sort(list, list+checker);

  for (int k = 0; k < checker; k++) {
    if (list[k] % 2 == 0) {
      e++;
    } else {
      o++;
    }
  }

  if(e == o)
  {
    cout << "TAIP";
  }
  else{
    cout<<"NE";
  }

}
*/









/* 3
#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int input;
    cin >> input;

    for (int i = input; i <= 2*input-2; i++) {
        if (is_prime(i) && is_prime(i+2)) {
            cout << "YES";
            i = input*2;
           return 0;
        }
      }
    cout << "NO";
}
*/




/* 2
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    long long input;
    cin >> input;

    long long ans = 1;
    for (long long i = 2; i <= sqrt(input); i++) {
        if (input%i == 0) {
            if (i == (input/i)) {
                ans += i;
            } else {
                ans += i+(input/i);
            }
        }
    }

    if (ans == input && input != 1) {
        cout << "TAIP";
    } else {
        cout << "NE";
    }
}
*/


/* 1
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
  long long list[100000];
  long long input;
  long long helper;
  long long i = 1;
  long long checker = 0;
  long long j = 1;

  cin>>input;

  while (i <= sqrt(input)) {
    if (input % i == 0) {
      list[checker] = i; 
      checker++;
      if (i != sqrt(input)) {
        list[checker] = input / i;
        checker++; 
      }
    }
    i++;
  }
  
  sort(list, list+checker);
  
  cout<<list[0];
  
  while(j != checker)
    {
      cout<<" "<<list[j];
      j++;
    }
  return 0;
}

*/