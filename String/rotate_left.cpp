/*
问题描述：给定一个字符串S[0...N-1],要求把S的前k个字符移到S的尾部，如把S的字符串“abcded"前面的前两个字符“a”,“b”移到字符串的尾部，得到新字符串“cdefab”，即字符串循环左移k位

算法要求：时间复杂度为O（n）,空间复杂度为O(1);
*/
#include<iostream>
using namespace std;


void reverse(char *str, int from, int to)
{
    char tmp;
    while(from<to)
    {
        tmp=str[from];
        str[from++]=str[to];
        str[to--]=tmp;
    }
    return ;
}

void rotate_left(char *str,int k,int N)
{
    k %= N;
    reverse(str,0,k-1);
    reverse(str,k,N-1);
    reverse(str,0,N-1);
    return ;
}

int main()
{
    int n=6;
    char s[7]="123456";
    rotate_left(s,3,n);
    cout<<s;
}