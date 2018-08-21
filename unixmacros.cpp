#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include <iostream>
#include <unistd.h>
#include <limits.h>
using namespace std;
int main()
{
 #ifdef _POSIX_JOB_CONTROL
	cout<<"System supports job control"<<endl;
 #else
	cout<<"System doesn't support job control"<<endl;
 #endif

 #ifdef _POSIX_SAVED_IDS
	cout<<"System supports saved set_UID and saved set-GID"<<endl;
 #else
	cout<<"System does not supports saved set_UID and saved set-GID"<<endl;
 #endif

 #ifdef _POSIX_CHOWN_RESTRICTED
	cout<<"Chown restricted option isL:"<<_POSIX_CHOWN_RESTRICTED<<endl;
 #else
	cout<<"System does not supports"<<_POSIX_CHOWN_RESTRICTED<<endl;
 #endif
 #ifdef _POSIX_NO_TRUNC
	cout<<"Pathname Trunc option is:"<<_POSIX_NO_TRUNC<<endl;
 #else
	cout<<"System doesnot supports"<<_POSIX_NO_TRUNC<<endl;
 #endif
 
 #ifdef _POSIX_VDISABLE
	cout<<"Disable char for terminal files:"<<_POSIX_VDISABLE<<endl;
 #else
	cout<<"System doesnot supports"<<POSIX_VDISABLE<<endl;
 #endif
 #ifdef _POSIX_CHILD_MAX
	cout<<"Max. child proc"<<_POSIX_CHILD_MAX<<endl;
 #endif
 #ifdef _POSIX_OPEN_MAX
	cout<<"Max. open proc"<<_POSIX_OPEN_MAX<<endl;
 #endif
 #ifdef _POSIX_STREAM_MAX
	cout<<"Max. stream proc"<<_POSIX_STREAM_MAX<<endl;
 #endif
 return 0;
}
