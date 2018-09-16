#ifndef __EXTR_URL_H__
#define __EXTR_URL_H__

//define variable
#define MAX_TLD_LEN 10
#define MAX_DOMAIN_LEN 256

#define MIN_URL_LEN 4

typedef _url_single_st{
	char *url;
	int url_len;
}url_single_st;

typedef _url_set_st{
	int url_count;
	url_single_st *url_single_arr;
}url_set_st;

#endif