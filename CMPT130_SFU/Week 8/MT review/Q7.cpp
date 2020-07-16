#include <iostream>
using namespace std;

int main()
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            for(int k=0; k<10; k++)
            {
                //没有奇数情况
                if(i%2 == 0 && j%2== 0 && k%2 == 0)
                    cout<<i<<j<<k<<" ";
                //两个奇数情况
                else if(i%2 == 1 && j%2 == 1 || i%2 == 1 && k%2 == 1 || k%2 == 1 && j%2 == 1)
                    cout<<i<<j<<k<<" ";
                //三个奇数情况
                else if (i%2 == 1 && j%2== 1 && k%2 == 1)
                    cout<<i<<j<<k<<" ";
            }
        }
    }
    system("pause");
    return 0;
}