package bank;

public class Bank {
    class Account{
        public String name;
        protected String email;
        private String password;
    
        public String getPassword(){
            return this.password;
        }
        public void setPassword(String pass){
            this.password = pass;
        }
    }
    public static void main(String[] args) {
        Account account1 = new Account();
        account1.name = "Nikhil Jain";
        account1.email = "nikhiljain28806@gmail.com";
        account1.setPassword("123456789");
        System.out.println(account1.getPassword());

    }
}
