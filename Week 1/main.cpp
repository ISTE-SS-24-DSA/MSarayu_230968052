
1.
#include <iostream>
using namespace std;

int main() {
    cout<<"Welcome to ISTE Summer School";

    return 0;
}


2.
#include <iostream>
using namespace std;

int main() {
    int x,sm=0;
    cout << "Enter a number ";
    cin >> x;
    while (x>0) {
        int rmd = x%10;
        sm = (sm*10) + rmd;
        x = x/10;
    }
    cout<<"The reversed number is " << sm;

    return 0;
}


3.
#include <iostream>
using namespace std;

int main() {
    int x,isprime=1;
    cout << "Enter a number ";
    cin >> x;
    if (x==2) {
        cout <<"The number is a prime number";
    }
    else {
        for (int i=2; i<x; i++) {
            if (x%i==0) {
                isprime=0;
        }
        }
    }

    if (isprime==0) {
        cout <<"The number is a composite number";
    }
    else {
        cout <<"The number is a prime number";
    }

    return 0;
}


4. 
#include <iostream>
using namespace std;

int main() {
    int x,i,j,k=1;
    cout << "Enter a number ";
    cin >> x;
    for (i=1;i<=x;i++) {
        for (j=1;j<=i;j++) {
            cout << k << " ";
            k++;
        }
        cout <<endl;
    }
    return 0;
}


5. 
#include <iostream>
using namespace std;

int main() {
    int x,i,j,k;
    cout << "Enter the number of rows: ";
    cin >> x;
    for (i=0;i<x;i++) {
        for (j=0;j<x-i;j++) {
            cout << " ";
        }
        for (k=0;k<(2*i-1);k++) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}


6.
#include <iostream>
using namespace std;

int main() {
    int x[100],max=0,j,i,n;
    cout << "Enter the number elements: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (i=0;i<n;i++) {
        cin >> x[i];
        }
    for (j=0;j<n;j++) {
        if (x[j]>max) {
            max = x[j];
        }
    }
    cout << "The largest element in the array is: " << max;

    return 0;
}


7. 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int i,j,k,n;
    vector<int> v;
    cout << "Enter the number elements: ";
    cin >> n;
    cout << "Enter the elements of the vector: ";
    for (i=0;i<n;i++) {
        cin >> k;
        v.push_back(k);
    }
    cout << "The sorted vector in ascending order is: "<<endl;
    sort(v.begin(),v.end());
    for (i=0;i<n;i++) {
        cout << v[i] << endl;
    }
    cout << "The reversed vector is: "<<endl;
    for (vector<int>::reverse_iterator it = v.rbegin(); it!=v.rend();it++) {
        cout << *(it) << endl;
    }

    return 0;
}


8.
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int i,j,k,n;
    vector<int> v;
    cout << "Enter the number elements: ";
    cin >> n;
    cout << "Enter the elements of the vector: ";
    for (i=0;i<n;i++) {
        cin >> k;
        v.push_back(k);
    }
    cout << "The vector is: "<<endl;
    for (vector<int>::iterator it = v.begin(); it!= v.end(); it++) {
        cout << *(it) <<endl;
    }
    
    cout << "The reversed vector is: "<<endl;
    for (vector<int>::reverse_iterator it = v.rbegin(); it!=v.rend();it++) {
        cout << *(it) << endl;
    }
    
    return 0;
}









