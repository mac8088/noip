#include <cstdio>

//坑爹的奥数P58-59
int main() {
	int a,b,c,d,e,f,g,h,i,total=0;
	for(a=1;a<=9;a++)
	for(b=1;b<=9;b++)
	for(c=1;c<=9;c++)
	for(d=1;d<=9;d++)
	for(e=1;e<=9;e++)
	for(f=1;f<=9;f++)
	for(g=1;g<=9;g++)
	for(h=1;h<=9;h++)
	for(i=1;i<=9;i++) {
		// 接下来判断每一位的数字互不相等
		if(a!=b && a!=c && a!=d && a!=e && a!=f && a!=g && a!=h && a!=i
		&& b!=c && b!=d && b!=e && b!=f && b!=g && b!=h && b!=i
		&& c!=d && c!=e && c!=f && c!=g && c!=h && c!=i
		&& d!=e && d!=f && d!=g && d!=h && d!=i
		&& e!=f && e!=g && e!=h && e!=i
		&& f!=g && f!=h && f!=i
		&& g!=h && g!=i
		&& h!=i
		&& a*100+b*10+c+d*100+e*10+f==g*100+h*10+i) {
				total++;
				printf("%d%d%d+%d%d%d=%d%d%d\n",a,b,c,d,e,f,g,h,i);
			}
	}
	printf("total=%d", total/2);  // total=168
	puts("");
	return 0;
}