package unistud;
public class BAStudent extends UniversityStudent{
    private double music;
    
    public BAStudent(){
        super();
        music = 0.0;
    }
    
    public BAStudent(double music, int id, int age, String name){
        super(id, age, name);
        this.music = music;
    }
    
    public void BAStudent(double music){
        this.music = music;
    }
    public double getMusic(){
        return music;
    }
    
    @Override
    public String toString(){
        return super.toString()+ " "+music;
    }
    
}
