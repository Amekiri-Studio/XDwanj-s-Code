package CommodityWholesale;

public class Commodity {
//    public double electricFan = 123.23; //电风扇
//    public double washingMachine = 4500; //洗衣机
//    public double television = 8800 ; //电视机
//    public double fridges = 5000.88; //冰箱
//    public double airConditioning = 4556.0; //空调
    int cnt; //数量
    int SerialNumber; //编号
    double[] commodity = new double[] {
            123.23, 4500, 8800.9, 5000.88, 4456.0
    };
    public String[] tradeName = new String[]{
            "电风扇", "洗衣机", "电视机", "冰箱", "空调"
    };

    //承接货物的编号
    public void receivingSerialNumber(int SerialNumber) {
        this.SerialNumber = SerialNumber;
    }

    //承接货物的数量
    public void receivingCnt(int cnt) {
        this.cnt = cnt;
    }

    //计算金额
    public StringBuffer output() {
        return Segmentation(commodity[SerialNumber-1]*cnt);
    }

    //金额分段，返回StringBuffer字符串
    public StringBuffer Segmentation(double dou) {
        String str = String.valueOf(dou);
        StringBuffer sb = new StringBuffer(str);

        int len;
        int val = sb.indexOf(".");
        if (val != -1) {
            len = val;
        } else {
            len = sb.length();
        }
        for (int i=len-3; i>0; i-=3) {
            sb.insert(i, ",");
        }

        return sb;
    }

    //菜单
    public void menu (){
        int i;

        for (i=0; i<9; ++i)
            System.out.print("*");
        System.out.print("欢迎来到商品批发城");
        for (i=0; i<9; ++i)
            System.out.print("*");
        System.out.print("\n");
        System.out.printf("\t编号\t\t商品\t\t\t价格\n");
        for (i=0; i<5; i++) {
            System.out.printf("\t%d\t\t%-3s\t\t%-3s\n", i+1, tradeName[i], Segmentation(commodity[i]));
        }
        for (i=0; i<30; i++)
            System.out.print("*");
        System.out.printf("\n");
    }

//    StringBuffer sb = new StringBuffer("12345655.756");
//    int val = sb.indexOf(".");
//    System.out.println(val);
//    for (int i=val-3; i>0; i-=3) {
//        sb.insert(i, ",");
//    }
}
