#include <stdio.h>
#include<stdlib.h>
#include<string.h>



float plus(float a,float b )
{
return a + b;
}



int main(void)
{  int q = 1;
    do{
         //获取样本总数量
        int sum1;

        puts("Please input the amount of your data:");
        scanf("%i",&sum1);

        //创建对应数量数组，并初始化

        float *list = malloc(sum1 * sizeof(float));
        if (!list){
            return 1;
        }
        for(int n = 0;n <sum1;n++ )
        {
            list[n] = 0;
        }

        //将数据依次输入数组中

        puts("Please input your data sequentially:");
        for(int n = 0;n < sum1;n++)
         {
             scanf("%f",&list[n]);
        }

        //将所有数据求和并得到数据平均值

        float sum2;
        for(int n = 0;n < sum1;n++)
         {
            sum2 = sum2 + list[n];
        }
        float average = sum2/sum1;

         //将各个数据与平均值做差并平方，存入原数组中

         float via;
        for(int n = 0;n < sum1;n++)
        {
           via = list[n] - average;
           list[n] = via * via;
        }

        //将所有数据求和

          float sum3;
            for(int n = 0;n < sum1;n++)
         {
             sum3 = sum3 + list[n];
         }

         //得到最后的数据

        float final = sum3 / sum1;
        printf("This is the result of these data:\n%f\n",final);

     //清空所有变量
        for(int n = 0;n < sum1;n++)
         {
             list[n] = 0;
         }
             sum1 = 0;
             sum2 = 0;
             sum3 = 0;
             via = 0;
             final = 0;
             free(list);


        //
         int judgement;
            scanf("%d",&judgement);
            if (judgement == 0)
            {
                q = 0 ;
            }

    }while(q);



}



