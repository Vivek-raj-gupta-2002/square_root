#include<stdio.h>
#include<conio.h>

//finding the square root

double sq_root(int number)
{
    if(number == 1 || number == 0)
    {
        if(number == 0)
        {
            return 0;
        }

        else
        {
            return 1;
        }
    }
    else
    {
        for(int loop_var = 0; loop_var < number; loop_var++)
        {
            int sq_var = loop_var * loop_var, sq_val1 = (loop_var + 1) * (loop_var + 1);//two squares of loop variable and loop variable + 1
            
            if(sq_var == number)//when their is proper root
            {
                return loop_var;
            }

            else if (number > sq_var && number < sq_val1)//when the root is not proper
            {
                for(double sub_loop_var = loop_var; sub_loop_var < (loop_var + 1); sub_loop_var = sub_loop_var + 0.00001)//just checking for every point
                {
                    int square_roots = sub_loop_var * sub_loop_var;//taking square

                    if (square_roots == number)
                    {
                        return sub_loop_var;
                    }

                    else
                    {
                        continue;
                    }


                }
            }       

            else
            {
                continue;
            }
            
        }        
    }
}


void main()
{
    printf("%lf", sq_root(15));
}