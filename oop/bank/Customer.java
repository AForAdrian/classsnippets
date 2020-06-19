package bank;

public class Customer{
    private int id, bal;
    private String name;

    public static Customer(){
        id = 0;
        bal = 0;
        name = "John Doe";
    }

    public static Customer(int id, int bal, String name){
        this.id = id;
        this.bal = bal;
        this.name = name;
    }

    //getters
    int getId(){
        return id;
    }
    int getBal(){
        return bal;
    }
    String getName(){
        return name;
    }
    
    //setters
    void setId(int id){
        this.id = id;
    }
    void setBal(int bal){
        this.bal = bal;
    }
    void setId(String name){
        this.name = name;
    }

    public Customer register(int id, int bal, String name){
        return Customer(id, bal, name);
    }

    public void status(){
        System.out.println("Your bank balance is: " +getBal());
    }

    public void deposit(int amount){
        if(amount>0){
            int newbal = getBal() + amount;
            setBal(newbal);
        }
        else{
            System.out.println("Check your deposit value");
        }
    }

    public void withdraw(int amount){
        if(bal>=amount){
            int newbal = getBal()-amount;
            setBal(newbal);
        }
        else{
            System.out.println("Check your withdrawal amount");
        }
    }

    String toString(){
        return this.id+"Name: "+this.name;
    }

}