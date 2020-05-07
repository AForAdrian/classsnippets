package unistud;
public class UniversityStudent {
    private int id;
    private int age;
    private String name;
    
    public UniversityStudent(){
        id = 1;
        age = 18;
        name = "UNK";
    }
    public UniversityStudent(int id, int age, String name){
        this.id = id;
        this.age = age;
        this.name = name;
    }
    
    public int getId(){
        return id;
    }
    public void setId(int id){
        this.id = id;
    }
    public int getAge(){
        return age;
    }
    public void setAge(int age){
        this.age = age;
    }
    public String getName(){
        return name;
    }
    public void setName(String name){
        this.name = name;
    }
    
    public String toString(){
        return (id+" "+name+" "+age);
    }
}
