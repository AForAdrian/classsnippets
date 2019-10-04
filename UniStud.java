package unistud;

public class UniStud {

    public static void main(String[] args) {
        CSStudent cs = new CSStudent();
        System.out.println(cs.getAge());
        
        BAStudent ba = new BAStudent(0.0,5,10,"Henry");
        System.out.println(ba);
        
    }
}
