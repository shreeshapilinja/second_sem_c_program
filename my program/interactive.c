#include<stdio.h>
#include<string.h>
#include<time.h>
#include <stdlib.h>
void main()
{
    char name[10],ans1[14],ans2[14],ans3[14],ans4[14],its[50];
    int a,b,c,d,e,f;
    int a1,a2,a3,a4;
    char q1[10],q2[30],qq1[14],qq2[15];
    time_t s, val = 1;
    struct tm* current_time;
    current_time = localtime(&s);
    printf("answer all in lowercase\n");
    printf("now the time is %02d hrs\n",current_time->tm_hour);
    printf("what is your name:\n");
    scanf("%s",name);
    if(current_time->tm_hour<12)
    {
        printf("good morning %s\n",name);
        printf("how are you:\n");
        scanf("%s",ans1);
        if(strcmp(ans1,"fine")==0)
        {printf("good\n");}
        else
        {
            printf("why what happened ? \n");
            scanf("%s",its);
            printf("its ok nothing will happen it will go fine\n");
        }
        printf("what did you have in your breakfast\n");
        scanf("%s",ans2);
    }
    else
    {
        printf("good evevning %s\n",name);
        printf("how are you:\n");
        scanf("%s",ans1);
        if(strcmp(ans1,"fine")==0)
        {printf("good\n");}
        else
        {
            printf("why what happened ? \n");
            scanf("%s",its);
            printf("its ok nothing will happen it will go fine\n");
        }
        printf("what did you have in your dinner or lunch\n");
        scanf("%s",ans2);
    }
    printf("are you feeling sleepy now (answer yes or no)\n");
    scanf("%s",ans3);
    if(strcmp(ans3,"yes")==0)
        printf("then go and sleep \n good bye\n");
    else
    {
        printf("lets have some fun are you ready\n");
        scanf("%s",ans4);
        if(strcmp(ans4,"no")==0)
            printf("then go and do another work\n");
        else
        {
            printf("lets play games,the games are listed below\n1 - memory\n2 - quiz\n3 - basic maths\n(press 1 or 2 or 3)\n");
            scanf("%d",&a);
            switch(a)
            {
                case 1:
                {
                    system("clear");
                    printf("you choice is memory %s\n",name);
                    printf("1.what is the first input you gave\n");
                    scanf("%s",q1);
                    if(strcmp(q1,name)==0)
                    {
                        printf("yes correct\n");
                        printf("2.what was the time in hrs when this started execution\n");
                        scanf("%d",&b);
                        if(current_time->tm_hour==b)
                        {
                            printf("yes correct\n");
                            printf("3.what was the 1st sentence printed in execution(write same)\n");
                            scanf("%s",q2);
                            if(strcmp(q2,"answer all in lowercase")==0)
                            {
                                printf("yes correct you scored 3/3 congrats\n");
                            }
                            else
                            {
                                printf("no sorry you are out of game\nyour score is 2/3\nthankyou for your interest\n");
                                break;
                            }
                        }
                        else
                        {
                        printf("no sorry you are out of game\nyour score is 1/3\nthankyou for your interest\n");
                        break;
                        }
                    }
                    else
                        printf("no sorry you are out of game\nyour score is 0/3\nthankyou for your interest\n");
                    break;
                }
                case 2:
                {
                    printf("your choice is quiz %s\n",name);
                    printf("Q1.who is our present chief minister (choose nos)\n1 - H. D. Kumaraswamy\n2 - Siddaramaiah\n3 - D. V. Sadananda Gowda\n4 - B. S. Yeddyurappa\n");
                    scanf("%d",&c);
                    if(c==4)
                    {
                        printf("yes correct\n");
                        printf("Q2.capital of india\n1-mumbai\n2-bangalore\n3-new delhi\n4-kolkatta\n");
                        scanf("%d",&d);
                        if(d==3)
                        {
                            printf("yes correct");
                            printf("Q3.Who was the Prime Minister of the United Kingdom from 1945 to 1951?\n");
                            printf("1-Clement Attlee\n2-Sir Robert Walpole\n3-Margaret Thatcher\n4-Tony Blair\n");
                            scanf("%d",&e);
                            if(e==1)
                            {
                                printf("yes correct\n");
                                printf("Q4.Entomology is the science that studies\n1-fossils\n2-insects\n3-humans\n4-flowers\n");
                                scanf("%d",&f);
                                if(f==2)
                                {
                                    printf("yes correct\nyou scored 4/4 congrats %s\n",name);
                                    break;
                                }
                                else
                                {
                                    printf("sorry you are out of game your score is 3/4\nthankyou correct answer is 2\n");
                                    break;
                                }
                            }
                            else
                            {
                                printf("sorry you are out of game your score is 2/4\nthankyou correct answer is 1\n");
                                break;
                            }
                        }
                        else
                        {
                            printf("sorry you are out of game your score is 1/4\nthankyou correct answer is 3\n");
                            break;
                        }
                    }
                    else
                    {
                        printf("sorry you are out of game your score is 0/4\ncorrect ans is 4");
                        break;
                    }
                }
                case 3:
                {
                    printf("your choice is basic maths (only integers) %s\n",name);
                    printf("Q1. 11*12*10= \n");
                    scanf("%d",&a1);
                    if(a1==1320)
                    {
                        printf("correct\n");
                        printf("Q2. 7344/34*2+8 = \n");
                        scanf("%d",&a2);
                        if(a2==440)
                        {
                            printf("correct\n");
                            printf("Q3. 8*56+8/2 = \n");
                            scanf("%d",&a3);
                            if(a3==452)
                            {
                                printf("correct\n");
                                printf("Q4. 8888/44/4+2*2-4 = \n");
                                scanf("%d",&a4);
                                if(a4==50)
                                {
                                    printf("yes exellent %s you scored full 4\ncongrats\n",name);
                                    break;
                                }
                                else
                                {
                                    printf("wrong (asked only integer) \n thankyou for playing score 3 %s\n",name);
                                    break;
                                }
                            }
                            else
                            {
                                printf("oh...! sorry %s you are wrong \n score 2",name);
                                break;
                            }
                        }
                        else
                        {
                            printf("oh...! sorry %s you are wrong \n score 1",name);
                            break;
                        }
                    }
                    else
                    {
                        printf("oh...! sorry %s you are wrong \n score 0",name);
                        break;
                    }
                }
            }
        }
    }
    
}
