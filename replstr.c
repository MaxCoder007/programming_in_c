 #include<stdio.h>

	 int main()
	 {
	    char s1[10];   
	    
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
printf("Enter a letter number to be replace=");
scanf("%d",&n);
getchar();
printf("Enter a letter to replace=");
scanf("%c",&x);
		
		s1[n]=s1[count+1];
		s1[n]=x;
		printf("changed string=%s",s1);
	 return 0;
	 }