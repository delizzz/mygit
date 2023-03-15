#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
bool isMatch(char *s, char *p){
	int s_len = strlen(s);
	int p_len = strlen(p);
	int s_cnt = 0;
	int p_cnt = 0;
	for (p_cnt = 0; p_cnt++; p_cnt < p_len)
	{
		if ('.' == p[p_cnt++]) 
		{
			s_cnt++;
		}
		else if (p[p_cnt] >= 'a' && p[p_cnt] <= 'z')
		{
			return true;
		}
	return true;
}

int main()
{
	
	return 0;
}

	
