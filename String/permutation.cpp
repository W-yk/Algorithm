/*
问题描述：给定一个字符串S[0...N-1],枚举S的全排列

算法要求：时间复杂度为O（n）,空间复杂度为O(1);
*/

#include<iostream>
using namespace std;


void swap(char *str, int m,int n)
{
    char tmp=str[m];
    str[m]=str[n];
    str[n]=tmp;
    return ;
}
void permutation(char *str,int from, int to)
{
    if(from==to)
    {
        for(int i=0;i<=to;i++)
        {
            cout<<str[i];
        }
        cout<<endl;
        return;
    }
    else
    {
        for(int i=from; i<=to;i++ )
        {
            swap(str,i,from);
            permutation(str,from+1,to);
            swap(str,i,from);

        }
    }
}

int main()
{
    char s[7]="1234";
    permutation(s,0,3);
    return 0;
}