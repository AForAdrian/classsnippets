class Rectangle{
    private double width;
    private double height;

    public Rectangle(){
        width = 1.0;
        height = 1.0;
    } //you might want to call this no arg constructor
    
    public Rectangle(double w, double h){
        width = w;
        height = h;
    }

    public getArea(){
        return width*height;
    }

    public getPerimeter(){
        return 2(width+height);
    }
}