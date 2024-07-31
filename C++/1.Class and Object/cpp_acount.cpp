#include<iostream>
using namespace std;

class multimedia
{
public:
	virtual void play()=0;
	virtual void pause()=0;
	virtual void stop()=0;
};

class audioplayer:public multimedia
{
public:
	void play()
	{
		cout<<"audio is playing"<<endl;
	}

	void pause()
	{
		cout<<"audio is pause"<<endl;
	}

	void stop()
	{
		cout<<"audio stop"<<endl;
	}
};

class videoplayer:public multimedia
{
public:
	void play()
	{
		cout<<"vdo is playing"<<endl;
	}

	void pause()
	{
		cout<<"vdo is pause"<<endl;
	}

	void stop()
	{
		cout<<"vdo stop"<<endl;
	}
};

int main()
{
	multimedia *audio=new audioplayer;
	multimedia *video=new videoplayer;

	audio->play();
	audio->pause();
	audio->stop();

	video->play();
	video->pause();
	video->stop();

	
   return 0;
}

