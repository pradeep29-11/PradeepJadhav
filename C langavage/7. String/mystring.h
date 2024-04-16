int mystrlen(char ch[])
{
	int count;
	count=0;

	for(int i=0;ch[i]!='\0';i++)
	{
		count++;
	}
	return count;
}