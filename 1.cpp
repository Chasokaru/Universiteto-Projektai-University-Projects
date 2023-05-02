/* 21
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

int funk(int a, int b)
{
  if(a==b || b==0)
  {
    return 1;
  }
  return funk(a-1, b-1) + funk(a-1, b);
}


int main()
{
  int a, b;
  ifstream ofs("duom.txt");
  ofs>>a>>b;
  int sum = funk(b, a);

  ofstream ons("U1rez.txt");
  ons<<sum;
  ofs.close();
  ons.close();
}

*/



/* 16
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

void funk(int a[], int n, int& min, int& max)
{
  for (int i=0; i<n; i++)
  {
    if (a[i]<min)
    {
      min=a[i];
    }
  }
  for (int i=0; i<n; i++)
  {
    if (a[i]>max)
    {
      max=a[i];
    }
  }
}


int main()
{
  int a[10];
  ifstream ons("duom.txt");
  int n = -1;  
  int min = 999999; 
  int max = -999999;
  while (ons >> a[++n]){}

  funk(a, n, min, max);

  cout<<"Minimumas yra "<<min<<endl;
  cout<<"Maksimumas yra "<<max;
  ons.close();
}
*/







/* 15
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;


void funk(double a[], double b[], double& plot, double& sum)
{
  double sid1 = sqrt(((b[1] - b[0])*(b[1] - b[0]))+((a[1] - a[0])*(a[1] - a[0])));
  double sid2 = sqrt(((b[2] - b[1])*(b[2] - b[1]))+((a[2] - a[1])*(a[2] - a[1])));
  plot = sid1 * sid2;
  sum = (sid1 + sid2) * 2.0;
}


int main()
{
  double a[4], b[4];
  double plot, sum;
  for (int i = 0; i < 4; i++)
  {
    cin >> a[i] >> b[i];
  }


  funk(a, b, plot, sum);


  ofstream ofs("rez.txt");
  ofs<<fixed<<setprecision(5)<<plot<<endl;
  ofs<<fixed<<setprecision(5)<<sum;
  ofs.close();
  return 0;
}
*/








/* 14
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;


void funk(int a, int b, int& sum, int arr[], int brr[])
{
  int dif = 0;
  if(a>b)
  {
    dif=a;
  }
  else
  {
    dif=b;
  }

  sort(arr, arr + a, greater<int>());
  sort(brr, brr + b, greater<int>());

  for (int i = 0; i < dif; i++) {
    if(arr[i] != brr[i])
    {
      if(a>b)
      {
        sum=arr[i];
        i = dif;
      }
      else
      {
        sum=brr[i];
        i = dif;
      }
    }
  }
}




int main()
{
  int a, b;
  int sum = -99999999;
  int arr[100], brr[100];
  cin >> a;
  for (int i=0; i<a; i++)
    cin >> arr[i];
  cin >> b;
  for (int i=0; i<b; i++)
    cin >> brr[i];

  
  funk(a, b, sum, arr, brr);

  if(sum == -99999999)
  {
    if(a>b)
    {
      sum=arr[a-1];
    }
    else
    {
      sum=brr[b-1];
    }
    cout<<sum;
  }
  else
  {
    cout<<sum;
  }
}

*/


/* 13
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;


void plotas(double& ibr, double& api, double pi, double n)
{
  ibr = pi*(n/2)*(n/2);
  api = sqrt(((n/2)*(n/2))+((n/2)*(n/2)));
  api = api*api*pi;
}


int main()
{
  double n;
  double ibr, api;
  double pi = 355.0/113;
  ifstream ons("in.txt");
  ons >> n;

  plotas(ibr, api, pi, n);

  ofstream ofs("rez.txt");
  ofs << setprecision(2) << fixed << "Įbrėžto plotas: " <<ibr<<endl;
  ofs << setprecision(2) << fixed <<"Apibrėžto plotas: "<<api<<endl;
  ons.close();
  ofs.close();
  return 0;
} */


/* 12
#include <iostream>
#include <fstream>
using namespace std;


void keitimas(int n, int m, int a[][100]){
  int kairysisKampas = a[n - 1][0] * 2;
  double suma = 0; double vid;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      suma += a[i][j];
    }
  }
  vid = suma / (n * m);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (a[i][j] < vid) {
        a[i][j] = kairysisKampas;
      }
    }
  }
}


int main() {
  int n, m;
  cin >> n >> m;
  int a[100][100];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> a[i][j];
    }
  }
  keitimas(n, m, a);
  ofstream ost;
  ost.open("rex.txt");
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (j != m - 1) {
        ost << a[i][j] << " ";
      } else {ost << a[i][j];}
    }
    ost << endl;
  }
  ost.close();
  return 0;
}
*/

/*11
void uga(int n, int m, int a[][100], double & vid, double & mazDidVid) {
    double suma = 0;  double maz = a[0][0]; double did = a[0][0];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            suma += a[i][j];
        }
    }
    vid = suma / (n * m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (maz > a[i][j]) {
                maz = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (did < a[i][j]) {
                did = a[i][j];
            }
        }
    }
    mazDidVid = (maz + did) / 2;
}

int main() {
    int n, m;
    int a[100][100];
    double vid1, vid2;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    uga(n, m, a, vid1, vid2);
    if (vid1 > vid2) {
      cout << "TAIP";
    } else {
      cout << "NE";
    }
    return 0;
}
*/






/* 10
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

void funk(int a[], int n, int& suba, int& sum)
{
  for (int i=0; i<n; i++)
  {
    sum += a[i];
    if (a[i] > suba)
    {
      suba = a[i];
    }
  }
}

int main()
{
  int a[10];
  int n, max, sum;
  int suba = -9999999;
  ifstream ons("duom.txt");
  ons >> n;
  for (int i = 0; i < n; i++)
  {
    ons >> a[i];  
  }
  ons.close();

  funk(a, n, suba, sum);


  ofstream ofs("rez.txt");
  ofs<<"Maksimumas yra " <<suba<<endl;
  ofs<<"Suma yra "<<sum<<endl;
  ons.close();
  ofs.close();
  return 0;
}
*/


/* 9
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;


int funk(int eld, int ble, int sula, int a[], int i)
{
  eld = sqrt(a[i]);
  ble = sqrt(a[i]);
  sula = eld*ble;
  return sula;
}



int main()
{
  int n, sum, eld, ble, suba, sula;
  cin >> n;
  int a[1000];
  for (int i=0; i<n; i++)
    cin >> a[i];
  sort(a, a+n);
  for (int i=0; i<n; i++)
  {
    suba = funk(eld, ble, sula, a, i);
    if(suba != a[i])
    {
      sum = a[i];
    }
  }
  if(sum != 0)
  cout << sum;
  else
  cout << "No";
}
*/





/* 8
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;


bool isPrime (long long a)
{
  if (a==0 || a==1) {
    return 0;
  }
  for (int i=2; i<=sqrt(a); i++)
    if (a%i == 0) 
      return 0;
  return 1;
}

int main()
{
  int n, m;
  ifstream ons("duom.txt");
  ons >> n >> m;
  int a[10][10];
  int sum = 0;
  for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
      {
          ons >> a[i][j];
      }
  ons.close();


  for (int i=0; i<n; i++)
  {
    if (i==0 || i==(n-1))
    {
      for (int j=0; j<m; j++)
      {
        if (isPrime(a[i][j]))
        {
          sum++;
        }
      }
    }
  else 
  {
    if (isPrime(a[i][0]))
    {
      sum++;
    }
    if (isPrime(a[i][m - 1]))
    {
      sum++;
    }
  }
  }
  ofstream ofs("rez.txt");
  ofs << sum;
  ofs.close();
  return 0;
}
*/



/* 7
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;


bool isPrime (long long a)
{
  if (a==0 || a==1) {
    return 0;
  }
  for (int i=2; i<=sqrt(a); i++)
    if (a%i == 0) 
      return 0;
  return 1;
}

int main(){
  long long  a;
  cin >> a;
  ofstream ofs;
  ofs.open("rez.txt");
  if (isPrime (a) == 1) {
    ofs << 1; 
  } 
  else 
  { 
    ofs << 0;
  }
  ofs.close();
  return 0;
}
*/





/* 6
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int funk(int a[], int b[], int c[], int n, int s, int sk){
for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        if (i != j) {
          if (a[i] == a[j]) {
            b[i]++;
          }
        }
      }
    }
    for (int i = 0; i < n; ++i) {
      if (b[i] == 0) {
        c[s] = a[i];
       s++;
      }
      if ( b[i] > 0) {
        sk++;
      }
      sort (c, c + s, greater<int>());
   }
   return sk;
}


int main()
{
  int a[10];
  int b[100] = {0};
  int c[100] = {0}; 
  int n;
  int s = 0;
  int sk = 0;
  ifstream ofs;
  ofs.open("U1.txt");
  ofs >> n;
  for(int i=0; i<n; i++)
	{
    ofs >> a[i];
  }
  sort(a, a + n, greater<int>());
  
  ofstream ons;
  ons.open("U1rez.txt");
  int bbd;
  bbd = funk(a, b, c, n, s, sk);


  if (bbd == n) { 
    ons << "NO";
  } 
  else {
    ons << c[0];
  }
  ofs.close();
  ons.close();
  return 0;
}

*/


/* 5
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
double funk(double a[3], double n, double sum);
int main()
{
  double a[3];
  double b, n,c, sum, pi, d;
  int min;
  cout<<fixed<<setprecision(2);
  c=4/(3*1.00);
  pi= 355/(113*1.00);
  for(int i=0; i<3; i++)
		{
      cin>>a[i];
    }
  sum = funk(a, n, sum);
  
  sum = sum/2.00;
  b = (c*pi*(sum*sum*sum));

    cout<<b;

}


double funk(double a[3],double n, double sum)
{
  double min = 999999999;
  for(int i=0; i<3; i++)	
			if(a[i]<min)
			{
				min = a[i];
			}
    sum = min;
  return sum;
}

*/








/* 4
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int funk(int n, int a[10]);
int main()
{
  int n, a[10], sum, boom;
  cin>>n;
  for(int i=0; i<n; i++)
		cin>>a[i];
  funk(n, a);
  for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
  for(int i=0; i<n; i++)
    if((a[i]+1)!=a[i+1] && (a[i]+1<=n))
    {
      boom = a[i]+1;
    }
  ofstream isved("rex.txt");
  cout<<boom;
}

int funk(int n, int a[10])
{
  int sum;
  for(int i=0; i<n; i++)	
		for(int j=i+1; j<n; j++)
			if(a[i]>a[j])
			{
				sum = a[i];
				a[i] = a[j];
				a[j] = sum;
			}
  return sum;
}
*/



/*  3
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int funk(int a[10][10], int n, int m, int i, int j);
int main()
{
  int n, m, a[10][10], sum;
  cin>>n>>m;
  ifstream ived("duom.txt");
  sum = 0;
  ived>>n>>m;
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      cin>>a[i][j];
  for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)  
        sum = funk(a, n, m, i, j);
  sum = sum - a[0][m-1];
  cout<<endl<<sum;
}

int funk(int a[10][10], int n, int m, int i, int j)
{
  int sum;

  if((i==0) || (j==m-1))
  {     
     sum=sum + a[i][j];
  }
  return sum;
}
*/







/*  2
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void funk(int a[10], int n, int sum);
int main() 
{
  int n, a[10];
  int sum = -1999999;
  cin>>n;

  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  funk(a, n ,sum);
}


void funk(int a[10], int n, int sum)
{
  for(int i=0; i<n; i++)
  {
    if (sum<a[i])
      {
        sum=a[i];
      }      
  }
  cout<<sum;
}
*/



/* 1
#include <iostream>
#include <fstream>
using namespace std;
int funk(int a, int b);
int main() 
{
  int a,b,sum;
  ifstream ived;
  ived.open("duom.txt");
  ived>>a>>b;
  sum=funk(a, b);

  ofstream isved;
  isved.open("rez.txt");
  isved<<sum;

  ived.close();
  isved.close();
}

int funk(int a, int b)
{
  int sum;
  sum=a+b;
  return sum;
}
*/