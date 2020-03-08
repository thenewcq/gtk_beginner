void getastring(char thestr[])
{
	int x=1;
	int ct=0;
	char c;
	
	fpurge(stdin);
	
	while(x==1)
	{
		c=getchar();

		if(c == '\n')
		{
			x=0;
			thestr[ct]='\0';
			break;
		}
		
		thestr[ct]=c;
		ct ++;
	}
	
	return;
}
