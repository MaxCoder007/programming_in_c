    #include<stdio.h>

	 int main()
	 {
	    char s1[10],s2[10];   
	    
printf("Enter 1st  string=");
gets(s1);
	    printf("Enter 2nd  string=");
gets(s2);
	    int count1=0;
	    for(int i=0;s1[i]!='\0';i++)
	    {
	        count1++;
	    }
	    int count2=0;
	    for(int i=0;s2[i]!='\0';i++)
	    {
	        count2++;
        }
        printf("%d,%d",count1,count2);
	    int count=1;
	    if(count1==count2)
	    {
	      for(int i=0;i<count1;i++)
	{
	    if(s1[i]!=s2[i])
        {
            count=0;
            break;
        }
        
	}
	if(count==1)
	{
	 printf("same");
	
	}
	else{
	    printf("different");
	}
	    }
	    else{
	        printf("different");
	    }
	   return 0;
	 }