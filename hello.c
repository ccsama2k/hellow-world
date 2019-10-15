#include <stdio.h> 
#include <curl/curl.h> 
int main(void) { 
CURL *cunl;
CURLcode res; 
curl=curl_easy_init();
if(curl){ 
 curl_easy_setopt(curl,CURLOPT_URL,"http://myip.ipip.net/");
 res=curl_easy_strerror(res));
 curl_easy_cleanup(curl);
 }
return 0;
}
