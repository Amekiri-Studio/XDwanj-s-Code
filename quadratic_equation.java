public class quadratic_equation
{
    public static void main(String[] args)
    {
        A aa = new A(2, 3, 1);//构造函数为变量赋值
        aa.show_1();//求delta

        if (aa.show_2())
        {
            if (aa.show_1() == 0)
                System.out.println(aa.show_3());//输出一个解就够了
            else
            {
                System.out.println(aa.show_3());//分别输入两个解
                System.out.println(aa.show_4());
            }
        }
        else 
        {
            System.out.println("此方程无解");//输出无解的结果
        }
    }
}

class A
{
    public double a;
    public double b;
    public double c;
    public double delta;
    
    public A(double a, double b, double c)//构造函数
    {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public double show_1()//求delta
    {
        return delta = b*b - 4*a*c;
    }

    public boolean show_2()//判断解的个数
    {
        if (delta >= 0)
            return true;//多个解返回真
        else
            return false;//无解返回假
    }

    public double show_3()//返回第一个解
    {
        return (-b + Math.sqrt(delta) / 2*a);
    }
    public double show_4()//返回第二个解
    {
        return (-b - Math.sqrt(delta) / 2*a);
    }
}
