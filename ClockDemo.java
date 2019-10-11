package clockdemo;

public class ClockDemo{
    public static void main(String[] args){
    Clock firstClock = new Clock(59);
    Clock secondClock = new Clock(6,6,6);
    
    for(int count=0; count<=10;count++){
        firstClock.tick();
        System.out.println("Time after a tick:"+""+firstClock.toString());
    }
    
    System.out.println(Clock.addClock(firstClock, secondClock));
    System.out.println(firstClock.toString());
    System.out.println(secondClock.toString());
}
    
}