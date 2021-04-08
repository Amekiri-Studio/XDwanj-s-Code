package CommodityWholesale;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Commodity com = new Commodity();
        Users us = new Users();

        while (true) {
            System.out.print("请输入账号：");
            String accountNumber = input.next();
            System.out.print("请输入密码：");
            String password = input.next();

            if (!us.judgeAccountNumber(accountNumber) && !us.judgePassword(password) ) {
                System.out.println("账号和密码错误！");
                continue;
            } else if (!us.judgeAccountNumber(accountNumber) ) {
                System.out.println("账号错误！");
                continue;
            } else if (!us.judgePassword(password) ) {
                System.out.println("密码错误！");
                continue;
            } else {
                com.menu();

                System.out.print("请输入您批发的商品编号：");
                com.receivingSerialNumber(input.nextInt());
                System.out.print("请输入批发数量：");
                com.receivingCnt(input.nextInt());

                System.out.println("您需要付：￥" + com.output());
                break;
            }
        }
    }
}
