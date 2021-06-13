#include<bits/stdc++.h>
using namespace std;

long long isprime(long long n)
{
    if(n==1){
        return false;
    }
    else if(n==2){
        return true;
    }
    else if(n<4){
        return true;
    }
    else if(n%2==0){
        return false;
    }
    else if(n%3==0){
        return false;
    }
    else{
        long long r = floor(sqrt(n));
        long long f=5;
        while(f<=r){
            if(n%f==0){
                return false;
            }
            if(n%(f+2)==0){
                return false;
            }
            f+=6;
        }
        return true;
    }
}

void makeprime(long long array[])
{
    long long n=100001,count=1,value=1;
    array[1]=2;
    while(count!=n){
        value+=2;
        if(isprime(value)){
           count++;
           array[count]=value;

        }
    }
}
int main()
{
    long long t ,n;
    long long array[100000];
    makeprime(array);
    cin >> t;
    while(t--){
        cin>>n;
        cout <<array[n] <<endl;
    }
    return 0;
}

