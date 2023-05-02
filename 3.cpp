/*  1.7. Sesija
#include <bits/stdc++.h>
using namespace std;
class stud
{
private:
  double a, b, c, d, e;
  double vid;
public:
    void ivedimas()
    {
        cin >> a >> b >> c >> d >> e;
    }
    void vidur()
    {
      vid = ((a+b+c+d+e)*1.0/5);
    }
    double get_plot()
    {
        return vid;
    }
};
int main()
{
    int n, a = 0;
    string nam[100];
    string win;
    double aws = 9.0000;
    stud *s;
    cin >> n;
    s = new stud[n];
    for (int i = 0; i < n; i++)
    {
      cin>>nam[i];
      s[i].ivedimas();
      s[i].vidur();
      if(s[i].get_plot() > aws)
      {
        a++;
        if(s[i-1].get_plot() < s[i].get_plot())
        win = nam[i];
      }
    }
    if(a==0)
    {
      for (int i = 0; i < n; i++)
        {
          if(s[i-1].get_plot() < s[i].get_plot())
          win = nam[i];
        }
    }
    cout<<a<<" studentas/ai gaus stipendiją."<<endl;
    cout<<"Geriausiai mokosi "<<win<<".";
    delete[] s;
    return 0;
}
*/

/*
class Studentas
{
private:
double pazym[4];
double vidurk;
string vardas;
public:
    void ivedimas()
    {
        cin >> vardas;
        for(int i = 0; i < 5; i++)
        {
            cin >>pazym[i];
        }
    }
    void vidurkis()
    {
        double suma = 0;
        for ( int i = 0; i < 5; i++)
        {
            suma= pazym[i] + suma;
        }
        vidurk= suma/5;
    }
    double get_vidurkis()
    {
        return vidurk;
    }
    string get_vardas()
    {
        return vardas;
    }
};

int main() {
int n,skc = 0, didz=0;
double did = -1;
string Ger_vardas;
Studentas *s;
cin >> n;
 s = new Studentas [n]; // sukuriame masyvą iš n objektų
for( int i = 0; i < n; i++)
{
    s[i].ivedimas();
    s[i].vidurkis();
    if(s[i].get_vidurkis() > 9) 
        skc++;
    if(s[i].get_vidurkis() > did) {
        did = s[i].get_vidurkis();
        didz = i;
    }

}
cout<< skc<<" studentas/ai gaus stipendiją."<<endl;
cout<<"Geriausiai mokosi "<<s[didz].get_vardas()<<".";
delete [] s;
return 0;
}







*/

/* 1.6 Plotai

#include <bits/stdc++.h>
using namespace std;
class triangle
{
private:
  int a, b, c;
  double plot;
public:
    void ivedimas()
    {
        cin >> a >> b >> c;
    }
    void plotas()
    {
      double p = (a+b+c)*1.0/2.0; 
      plot = sqrt(p*(p-a)*(p-b)*(p-c));
    }
    double get_plot()
    {
        return plot;
    }
};
int main()
{
    int n;
    double aws = 0;
    triangle *s;
    cin >> n;
    s = new triangle[n];
    for (int i = 0; i < n; i++)
    {
      s[i].ivedimas();
      s[i].plotas();
      aws += s[i].get_plot();
    }
    cout<<setprecision(2)<<fixed<<aws;
    delete[] s;
    return 0;
}

*/



/* 1.2

#include <iostream>
using namespace std;
class Staciakampis
{
private:
    int a, b, plot;
public:
    void ivedimas()
    {
        cin >> a >> b;
    }
    void plotas()
    {
        plot = a * b;
    }
    int get_plot()
    {
        return plot;
    }
};
int main()
{
    int n, aws = 0;
    Staciakampis *s;
    cin >> n;
    s = new Staciakampis[n];
    for (int i = 0; i < n; i++)
    {
      s[i].ivedimas();
      s[i].plotas();
      aws += s[i].get_plot();
    }
    cout << aws;
    delete[] s;
    return 0;
}
*/





/* Problem 1.2

#include <bits/stdc++.h>
using namespace std;
class Staciakampis
{
private:
 int a, b, per;
public:
  void ivedimas()
  {
    cin>>a>>b;
  }
  void perimetras()
  {
    per=(a*2)+(b*2);
  }
  int get_per()
  {
  return per;
  }
};

int main()
{
  Staciakampis s;
  s.ivedimas();
  s.perimetras();

  cout<<s.get_per()<<endl;
  
  return 0;
}

*/




/* 1.0.0
#include <iostream>
using namespace std;
class Staciakampis
{
private:
    int a, b, plot;
public:
    void ivedimas()
    {
        cin >> a >> b;
    }
    void plotas()
    {
        plot = a * b;
    }
    int get_plot()
    {
        return plot;
    }
};
int main()
{
    int n, maxPlotas = 0;
    Staciakampis *s;
    cin >> n;
    s = new Staciakampis[n]; // sukuriame masyvą iš n objektų
    for (int i = 0; i < n; i++)
    {
        s[i].ivedimas(); // visiems objektams kviečiame įvedimą
        s[i].plotas(); // visiems objektams kviečiame ploto skaičiavimą
        if (s[i].get_plot() > maxPlotas) // ieškome maksimalaus ploto
            maxPlotas = s[i].get_plot();
    }
    cout << "Maksimalus plotas yra " << maxPlotas << endl;
    delete[] s; // atlaisviname dinamiškai išskirtą atmintį
    return 0;
}
*/

/* 10. Ar buvo?

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int pg, p;
  map<int, bool> a;
  cin>>pg;
  for(int i=0; i<pg; i++)
    {
      cin>>p;
      if(a.count(p)!=0)
      {
        cout<<"TAIP"<<endl;
      }
      else
      {
        cout<<"NE"<<endl;
        a[p]=true;
      }
    }
}





/* 9. Žuvų užklausos

#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long pg, p;
  long long cg, c;
  map<long long, long long> a;
  vector<long long> cap;
  cin>>pg;
  for(int i=0; i<pg; i++)
    {
      cin>>p;
      if (a.count(p) == 0)
        {
          a[p] = 1;
        }
        else
        {
          a[p]++;
        }
    }
  cin>>cg;
  
  for(long long i=0; i<cg; i++)
  {
    cin>>c;
    cap.push_back(c);
  }
  auto i(cap.begin());
  
  if(a.count(*i)==0)
      {
        cout<<"0";
      }
      else if(a.count(*i)!=0)
      {
        cout<<a[*i];
      }
    for (i++; i != cap.end(); i++)
    {
      if(a.count(*i)==0)
      {
        cout<<" "<<"0";
      }
      else if(a.count(*i)!=0)
      {
        cout<<" "<<a[*i];
      }
    }
}

*/









/* 8. Pažymių užklausos

#include <bits/stdc++.h>
using namespace std;

int main()

{
  int pg, p;
  int cg, c;
  int a[11];
  cin>>pg;
  for(int i=0; i<11; i++)
  {
    a[i]=0;
  }
  for (int i=0; i < pg; i++)
  {
    cin >> p;
    a[p]++;
  }
  cin>>cg>>c;
  cout<<a[c];
  for(int i=1; i<cg; i++)
  {
    cin>>c;
    cout<<" "<<a[c];
  }
}

*/






/*20
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, a; 
    cin >> size;
    set<int> num;
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        num.insert(a);
    }
  if(num.size()<=3)
  {
    cout<<"TAIP";    
  }
  else
  {
    cout<<"NE";
  }
}

*/




/*16


#include <iostream>
#include <set>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  set<int> num;
  int anm;
  for (int i = 0; i < a; i++)
  {
    cin >> anm;
    num.insert(anm);
  }
  return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        int first, last;
        std::cin >> first >> last;
        for (int d(first); d < last; d++)
        {
            a.insert(d);
        }
    }
    bool all(!(m - a.size()));
    if (all)
    {
        std::cout << "Taip" << std::endl; 
    }
    else
    {
        std::cout << "Ne" << std::endl;
    }
    return 0;
}
*/








/* 15
#include <iostream>
#include <set>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int a = (n * m);
  set<int> num;
  int anm;
  for (int i = 0; i < a; i++)
  {
    cin >> anm;
    num.insert(anm);
  }
  int ats(a - num.size());
  cout << ats;
  return 0;
}
*/





/* 14
#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> num;
  int amn;
  int n;
  cin >> amn;
  for (int i=0; i < amn; i++)
  {
    cin >> n;
    num.insert(n);
  }


  if (num.size() >= 2)
  {
    auto it = num.begin();
    it++;
    cout << *it;
  }
  else
  {
    cout << "NE";
  }
}
*/





/* 13
#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> num;
  int amn;
  int n;
  cin >> amn;
  for (int i=0; i < amn; i++)
  {
    cin >> n;
    num.insert(n);
  }

  int max;
  if(!num.empty())
    max = *(num.rbegin());

  cout << max;
}
*/


/* 12
#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> num;
  int amn;
  int n;
  cin >> amn;
  for (int i=0; i < amn; i++)
  {
    cin >> n;
    num.insert(n);
  }
  if(num.size()==1)
  {
    cout << "TAIP";
  }
  else
  {
    cout << "NE";  
  }
  return 0;
}
*/


/* 11
#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> num;
  int amn;
  int n;
  cin >> amn;
  for (int i=0; i < amn; i++)
  {
    cin >> n;
    num.insert(n);
  }
  cout << num.size();
  return 0;
}

*/



/*    10

#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> num;
  int amn;
  int n;
  cin >> amn;
  for (int i=0; i < amn; i++)
  {
    cin >> n;
    num.insert(n);
  }
  cout << num.size();
  return 0;
}

*/










/*   6

#include <iostream>
#include <vector>
using namespace std;

struct Student
{ 
  string name; 
  int grade; 
};

int main()
{
  int a;
  cin>>a;
  int ct=0;
  vector<Student> stud;
  for(int i=0; i<a; i++)
    {
      string opi;
      int hpi;
      cin>>opi>>hpi;
      Student safe
      {
        opi, hpi
      };
      stud.push_back(safe);
    }
  
  bool c=true;
  while(c)
    {
      auto stand(stud.begin());
      if((stud[0].name == "Petriukas")&&(stud[0].grade>=5))
      {
        ct++;
        c = false;
      }
      else if((stud[0].name != "Petriukas")&&(stud[0].grade>=5))
      {
        stud.erase(stud.begin());
        ct++;
      }
      else if(stud[0].grade<5)
      {
        stud.push_back(Student());
        stud[0].grade++;
        stud.erase(stud.begin());
        ct++;
      }
    }
  cout << ct;  
}


    while (1)
    {
        auto stand(stud.begin());
        if ((stand->opi == "Petriukas") && (stand->hpi < 5))
        {
            stand->hpi++;
            if (stand->opi == "Petriukas" && stand->hpi >= 5)
            {
              ct++;
              c = false;
            }
            else
            {
              stud.insert(stand + stud.size(), *stand);
            }
        else if ((stand->opi != "Petriukas") && (stand->hpi < 5))
            {
                if (stand->hpi < 5)
                {
                    cout << "Stumiame šį mokinį į eilės galą...\n";
                  
                    stud.insert(stand + stud.size(), *stand);
                }
                 else
                {
                    cout << "Kadangi mokinio vardu " << stand->opi << " pažymys yra patenkinamas, galime jį šalinti iš eilės.\n";
                } 

                stud.erase(stand);
            }
            
        }
        else
        {
            if (stand->opi == "Petriukas" && stand->hpi >= 5)
            {
                cout << "Petriuko pažymys yra teigiamas. Galima darbą nutraukti.";
                break;
            }
            else
            {
                 cout << "Mokinio vardu " << stand->opi << " pažymys yra " << stand->hpi << ", galime jį šalinti iš eilės...\n";
                stud.erase(stand);
            }
        }

*/
        

/*  5
#include <iostream>
#include <vector>
using namespace std;


int main()
{
  int a, b;
  int jon, pet;
  cin>>a>>b;
  vector<int> arr;
  vector<int> brr;

  int ct = 0;

  for(int i=0; i<a; i++)
  {
    int nm;
    cin>>nm;
    arr.push_back(nm);
  }
  for(int i=0; i<b; i++)
  {
    int nm;
    cin>>nm;
    brr.push_back(nm);
  }

  bool c = true;

  while(c)
  {
    int pet = arr[0];
    int jon = brr[0];
    if(pet > jon)
    {
      arr.push_back(jon);
      arr.erase(arr.begin());
      arr.push_back(pet);
      brr.erase(brr.begin());
      a++;
      b--;
      ct++;
    }
    else if (pet < jon)
    {
      brr.push_back(pet);
      arr.erase(arr.begin());
      brr.push_back(jon);
      brr.erase(brr.begin());
      a--;
      b++;
      ct++;
    }
    if(ct == 1000000)
    {
      cout << "Abu looseriai";
      c = false; 
    }
    if(a == 0)
    {
      cout << ct << " Jonukas";
      c = false;
    }
    if(b == 0)
    {
      cout << ct << " Petriukas";
      c = false;
    }
  }
}
*/





/* 4
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int a, b, c;
  cin>>a;
  vector<int> arr;
  vector<int> brr;
  for(int i=0; i<a; i++)
  {
    int nm;
     nm = i+1;
    arr.push_back(nm); 
  }

  for(int i=0; i<a; i++)
  {
    int sk = arr[0];
    brr.push_back(sk);
    arr.erase(arr.begin());

    sk = arr[0];
    arr.push_back(sk);
    arr.erase(arr.begin());
  }

  for(int i=0; i<a-1; i++)
    {
      cout<<brr[i]<<",";
    }
  cout<<brr[a-1];
}
*/





/* 3
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d;
  cin >>a;
  vector<int> arr;
  vector<int> brr;
  c = a;
  d = 0;
  b = 0;
  for(int i=0; i<a; i++)
  {
    int sk;
    cin>>sk;
    arr.push_back(sk);
  }

  for(int i=0; i<a; i++)
  {
    if(arr[b] < 0)
    {
      d++;
      c--;
      int sk = arr[b];
      brr.push_back(sk);
      arr.erase(arr.begin() + b);
    }
    else{
      b++;
*/







/* 2
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 int main() {
    int a, b;
    cin >> a >> b;
    vector<int> arr;
    for (int i = 0; i < a; i++)
    {
      int sk; 
      cin >> sk;
      arr.push_back(sk);
    }
    for (int i = 0; i < b; i++)
    {
        string op;
        int hp;
        cin >> op >> hp;
        if (op == "sum")
        {
          int sum = 0;
          for (int i = 0; i < hp; i++)
            {
              sum += arr[i];
            }
            cout << sum << "\n";
        }
        else if (op == "del")
        {
          arr.erase(arr.begin() + hp - 1);
        }
        else if (op == "pap")
        {
          arr.insert(arr.begin() + hp, 2*hp);
        }
    }
}


*/




/*  1

#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 
      
int main() {
  int a, b; 
  cin >> a >> b; 
  vector<int> arr; 
  for (int i=0; i<a; i++) 
  { 
    int sk; cin >> sk; 
    arr.push_back(sk);
  } 
  
  for (int i=0; i<b; i++) 
  { 
    int sk; cin >> sk; 	 
    arr.erase(arr.begin() + sk - 1); 
  } 
  cout << arr[0]; 
  for (int i = 1; i < arr.size(); i++) 
  { 		
    cout << " " << arr[i]; 
  }
}
*/
