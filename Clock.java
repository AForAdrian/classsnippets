package clockdemo;

public class Clock {
    private int hr;
    private int min;
    private int sec;
    
    public Clock(){
        hr = 12;
        min = 0;
        sec = 0;
    }
    public Clock(int hr, int min, int sec){
        if (hr>=0 && hr<=23){
            this.hr = hr;
        }
        if (min>=0 && min<=59){
            this.min = min;
        }
        if (sec>=0 && sec<=59){
            this.sec = sec;
        }
    }
    public Clock(int sec){
        this.sec = sec % 60;
        int hr = sec/60;
        min = hr%60;
        hr = hr/60;        
    }
    
    public void setClock(int sec){
        this.sec = sec % 60;
        int hr = sec/60;
        min = hr%60;
        hr = hr/60;        
    }
    
    public int getSec(){
        return this.sec;
    }
    public int getMin(){
        return this.min;
    }
    public int getHr(){
        return this.hr;
    }
    
    public void setHr(int hr){
        if (hr>=0 && hr<=23){
            this.hr = hr;
        }
    }
    public void setMin(int min){
        if (min>=0 && min<=59){
            this.min = min;
        }
    }
    public void setSec(int sec){
        if (sec>=0 && sec<=59){
            this.sec = sec;
        }
    }
   public void tick(){
       //increment where necessary
        this.sec++;
        if (this.sec>=60){
            this.min++;                    
        }
        if(this.min>=60){
            this.hr++;
        }
        this.sec = sec%60;
        this.min = min%60;
        this.hr = hr%24;
    }
    
    public void tickDown(){
        this.sec--;
    }
    
    public static String addClock(Clock a, Clock b){
       int hr = (a.hr+b.hr);
       int min = (a.min+b.min);
       int sec = (a.sec+b.sec);
       return (hr+" : "+min+" : "+sec);
    }
     
    public String toString(){
        return this.hr+"hrs: "+this.min+"mins: "+this.sec+"secs";
    }
}
