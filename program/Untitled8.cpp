#include <iostream> 
using namespace std;   
void TOH(int n, char source,char dest, char inter)  
{  
    if (n == 1)  
    {  
        cout << "Move ring 1 from tower " << source <<" to tower " <<dest<<endl;  
        return;  
    }  
	TOH(n-1,source,inter,dest);  
    cout << "Move ring " << n << " from tower " << source << " to tower " << dest << endl;  
    TOH(n-1,inter,dest, source);  
}   
int main()  
{  
    int n;
	cout<<"entrer the rings";
	cin>>n; 
    TOH(n, 'A', 'C', 'B'); 
    return 0;  
}  
  
