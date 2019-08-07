#include <string.h>
#include <iostream>
using namespace std;
char ch1[105001] ;
char ch2[105001] ;
int ch3[105001] ;
 int length;

int main()
{
	cout<<"helloworld"<<endl;
    int number ;
    cin>>number;

    int ans = 0;
    for(int i = 0;i<number;i++)
    {
        ans = 0;
        cin>>ch1>>ch2;
        length = strlen(ch1);
        int flag = 0;
        for(int j=0;j<length;j++)
        {
            if(ch1[j]==ch2[j]){
                ch3[j] = 0;
            }else if(ch1[j]==ch2[length-j-1]){
                ch3[j] = 1;
            }else{
                cout<<-1<<endl;
                flag =1;
                break;
            }
        }
        if(flag){
            continue;
        }else{
             ans=0;
                int w,j;
        for( w=0,j=length-1;w<length/2;w++,j--)
        {
            if(ans%2==0)
            {
                if(ch1[w]!=ch2[w])
                    ans++;
            }
            else
            {
                if(ch1[w]!=ch2[j])
                {
                    ans++;
                }
            }
        }
//            int stand = 0;
//            int j=0;
//            while(j<length/2){
//
//                if(ch3[j]==stand){
//                   j++;
//                }else{
//                    j++;
//                   while(j<length/2&&ch3[j]!=stand){
//                    j++;
//                   }
//                   ans++;
//                   if(stand){
//                    stand = 0;
//                   }else{
//                    stand =1;
//                   }
//                }
//            }


            cout<<ans<<endl;
        }


    }
}
