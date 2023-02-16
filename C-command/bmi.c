//
//  BMI.c
//  C
//
//  Created by NA_Yu on 2023/2/16.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
//    定义保存数据的变量
    float height = 0;
    float weight = 0;
    float bmi = 0;
//    在这里新加循环
    while (1) {
        system("cls");
//        输入数据
        printf("请输入你的身高（单位：米）：");
        scanf("%f",&height);
        printf("请输入你的体重（单位：千克）：");
        scanf("%f",&weight);
//        计算BMI值
        bmi = weight/(height * height);
//        显示数据
        printf("你的体质指数（BMI）为%f\n",bmi);
//        判断BMI值的区间，给出结论和建议
        printf("------------------------------\n");
        if (bmi < 18.5)
        {
            printf("结论：你的BMI<18.5，体重过轻，属于低危险群体\n");
            printf("建议：多注意营养，增加体重！");
        }
        else if (bmi>=18.5 && bmi<24.0)
        {
            printf("结论：你的BMI在18.5～24.0之间，体重正常\n");
            printf("建议：别骄傲，要保持哦！");
        }
        else if (bmi>=24 && bmi<27)
        {
            printf("结论：你的BMI在24～27之间，体重过重\n");
            printf("建议：该减重啦！加强运动！");
        }
        else if (bmi>=27 && bmi<30)
        {
            printf("结论：你的BMI在27～30之间，轻度肥胖，属于中危险群体\n");
            printf("建议：控制饮食，加强运动，必须减重！");
        }
        else if (bmi>=30 && bmi<35)
        {
            printf("结论：你的BMI在30～35之间，中度肥胖，属于重危险群体\n");
            printf("建议：减重！减重！减重！");
        }
        else if (bmi>=35)
        {
            printf("结论：你的BMI>=35，病症肥胖，属于非常危险群体\n");
            printf("建议：在医生的指导下进行减重吧，我已经不能给出建议了！");
        }
        printf("\n------------------------------\n");
        
//        在这里增加询问
        char yesorno;
        printf("请问还继续计算吗（y/n)?");
        scanf("%s",&yesorno);
        if (yesorno == 'Y' || yesorno == 'y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
//    循环在这里结束！
    return 0;
}
