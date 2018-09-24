#include <stdio.h>
#define _GNU_SOURCE
#include <string.h>

int tld_check()
{
	return 0;
}

int extr_tld_after_dot()
{

}

int extr_url_from_text(char *text, int text_len, url_set_st *url_set)
{
	//It is impossible contain URL in str.
	if(text == NULL || text_len < MIN_URL_LEN)
		return 0;

	int ret = 0;
	int tld_length = 0;

	//find a domain in text
	//strcasestr(text, "http://") != NULL
	//strcasestr(text, "https://") != NULL;
	//find TLD in text
	while(text_len){
		if(*text == '.'){
			//find tld after '.'
			ret = extr_tld_after_dot(text+1, text_len-1, &tld_length);
		}
		text_len --;
		text ++;
	}
	
	return 0;
}

#if 0
int main(int argc, char *argv[])
{
	char str[20] = "text www.baidu.com hahah!";
	
	extr_url_from_text(str, strlen(str));
	
	return 0;
}
#endif