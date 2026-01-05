#include <stdio.h>
int main() 
{
	int a,b,c,d,max,min,ans;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	max=(a>b)? a:b ;
	max=(max>c)? max:c ;
	max=(max>d)? max:d ;
	
	ans=(a!=max)? a:b ;
	ans=((c!=max)&&(c>ans))? c:ans;
	ans=((d!=max)&&(d>ans))? d:ans ;
	
	printf("%d",ans);
}
