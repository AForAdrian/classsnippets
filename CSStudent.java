package unistud;
public class CSStudent extends UniversityStudent{
    private double oop1;
    
    public CSStudent(){
        super();
        oop1 = 0.0;
    }
    
    public CSStudent(double oop1, int id, int age, String name){
        super(id, age, name);
        this.oop1 = oop1;
    }
    
    public void setOop1(double oop1){
        this.oop1 = oop1;
    }
    public double getOop1(){
        return oop1;
    }
    
    @Override
    public String toString(){
        return super.toString()+ " "+oop1;
    }
    
    
}
