public class quadratic_equation
{
    public static void main(String[] args)
    {
        A aa = new A(2, 3, 1);//���캯��Ϊ������ֵ
        aa.show_1();//��delta

        if (aa.show_2())
        {
            if (aa.show_1() == 0)
                System.out.println(aa.show_3());//���һ����͹���
            else
            {
                System.out.println(aa.show_3());//�ֱ�����������
                System.out.println(aa.show_4());
            }
        }
        else 
        {
            System.out.println("�˷����޽�");//����޽�Ľ��
        }
    }
}

class A
{
    public double a;
    public double b;
    public double c;
    public double delta;
    
    public A(double a, double b, double c)//���캯��
    {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public double show_1()//��delta
    {
        return delta = b*b - 4*a*c;
    }

    public boolean show_2()//�жϽ�ĸ���
    {
        if (delta >= 0)
            return true;//����ⷵ����
        else
            return false;//�޽ⷵ�ؼ�
    }

    public double show_3()//���ص�һ����
    {
        return (-b + Math.sqrt(delta) / 2*a);
    }
    public double show_4()//���صڶ�����
    {
        return (-b - Math.sqrt(delta) / 2*a);
    }
}
