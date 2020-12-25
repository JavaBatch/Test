// Program To _Count_Num_of_Positv_Inte_In_An_Array_Using_Function.c
#include<stdio.h>

void Count_no_of_posi_int(int *ptr,int n);
int main(){
int n;
printf("\n How Many Integers You Want To Enter In The Array : =");
scanf("%d",&n);
int Array_of_Int[n];
for (int i = 0; i < n; i++)
{
    printf("\n Enter Array_of_Int[%d] = ",i);
    scanf("%d",&Array_of_Int[i]);
}

Count_no_of_posi_int(Array_of_Int,n);


return 0;
}
void Count_no_of_posi_int(int *ptr ,int n){
int no_of_posi_int=0;
for (int i = 0; i < n; i++)
{
    if (*ptr % 2 == 0)
    {
        printf("\n  %d",*ptr);
        no_of_posi_int++;
    }
    ptr++;
}
printf("");
printf("\n \t The No. Of Positive Integer in Your Array is := %d",no_of_posi_int);

}