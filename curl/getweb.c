/*************************************************************************
	> File Name: getweb.c
	> Author: lightless
	> Mail: lightless@foxmail.com
	> Created Time: 2014年04月22日 星期二 03时42分14秒
 ************************************************************************/

#include <stdio.h>
#include <curl/curl.h>

int main(int argc, char **argv)
{

    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();
    if (!curl)
    {
        perror("curl");
        return 1;
    }
    curl_easy_setopt(curl, CURLOPT_URL, argv[1]);
    res = curl_easy_perform(curl);

    curl_easy_cleanup(curl);
    return 0;
}
