int mystrlen(char ch[])
{ 

	int i;	
	for(i=0;ch[i]!='\0';i++);
		return i;

}
void mystrcpy(char ch[],char str[])
{
	int i=0;
	while(ch[i]=str[i])
	{
		i++;
	}
	//str[i]='\0';

}