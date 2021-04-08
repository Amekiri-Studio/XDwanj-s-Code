package CommodityWholesale;

public class Users {
    private String accountNumber = "TOM";
    private String password = "123";

    public boolean judgeAccountNumber(String accountNumber) {
        return this.accountNumber.equals(accountNumber);
    }

    public boolean judgePassword(String password) {
        return this.password.equals(password);
    }
}
