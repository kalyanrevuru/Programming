#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int no_of_digits(lli num)
{
    int count=0;
    while(num!=0)
    {
        num=num/10;
        ++count;
    }
    return count;
}

// lli mirror(lli num,int n)
// {
//     stack<int> digits;
//     while(num!=0)
//     {
//         lli last=num%10;
//         digits.push(last);
//         num=(num-last)/10;
//     }
//     int arr[n]={0};
//     if(n%2==0)
//     {
//         for(int i=0;i<n/2;i++)
//         {
//             arr[i]+=digits.top();
//             digits.pop();
//         }
//     }
//     else
//     {
//         for(int i=0;i<=n/2;i++)
//         {
//             arr[i]+=digits.top();
//             digits.pop();
//         }    
//     }
//     for(int i=0;i<n/2;i++)
//     {
//         arr[n-i-1]+=arr[i];
//     }
//     int number=0;
//     for(int i=0;i<n;i++)
//     {
//         number=10*number+arr[i];
//     }
//     return number;
// }

lli mirror(lli num, int n)
{
    string str=to_string(num);
    for(int i=0;i<n/2;i++)
    {
        str[n-i-1]=str[i];
    }
    lli number=stoi(str);
    return number;
}

lli Next_Palindrome(lli num,int n)
{
    lli tens;
    tens=pow(10,ceil(n/2));
    lli mir=mirror(num,n);
    if(mir>num)
    {
        return mir;
    }
    else
    {
        mir=mir+tens;
        return mirror(mir,no_of_digits(mir));
    }
}

int main()
{
    lli num;
    int n;
    cin>>num;
    n=no_of_digits(num);
    cout<<"The Next Smallest Plaindrome is :"<<Next_Palindrome(num,n);
    return 0;
}
