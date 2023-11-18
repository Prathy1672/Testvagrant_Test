#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int maxm=0;
    int total=0;
    char item;
    struct basket
    {
        char product;
        int price;
        int gst;
        int quantity;
    };
    
    struct basket st[4];
    st[1]={"leatherwallet", 1100 ,18, 1};
    st[2]={ "umbrella", 900, 18, 1};
    st[3]={ "cigarette", 200, 28, 3};
    st[4]={ "honey",100 , 0 ,2};
    
    for(int i=0;i<4;i++)
    {
        total+= st[i].price;

        if(maxm= max(maxm,st[i].gst))
        {
            item=st[i].product;
        }
    }
    cout<<"the product with maximum gst is"<<item<<endl;
    cout<<"total amount to be paid for shopkeeper is"<<total<<endl;
    
}
