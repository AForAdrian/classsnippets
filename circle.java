package demo;

public class circle {
    private double radius;
    
    public circle(){
        radius = 1.0;
    }
    public circle(double radius){
        this.radius = radius;
    }
    public void setRadius(double radius){
        this.radius = radius;
    }
    public double getRadius(){
        return radius;
    }
    public double getArea(){
        return (Math.PI*Math.pow(radius,2));
    }
    public double getDiameter(){
        return (2*radius);
    }
    public String toString(){
        return ("The radius is"+radius+" the area is"+this.getArea());
    }   
}

