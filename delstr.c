 #include<stdio.h>

	 int main()
	 {
	    char s1[20];   
	    
printf("Enter 1st  string=");
gets(s1);
	   
	    int count=0;
	    for(int i=0;s1[i]!='\0';i++)
	    {
	        count++;
	    }
		printf("%d",count);
		int n;
		char x;
printf("Enter a letter number to be deleted=");
scanf("%d",&n);
for(int i=n;i<=count;i++)
{
	s1[i]=s1[i+1];
    printf("Changed string=%s\n",s1);
}
printf("Final Changed string=%s",s1);
return 0;
	 }