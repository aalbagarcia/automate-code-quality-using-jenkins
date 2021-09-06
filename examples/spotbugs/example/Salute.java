package example;

public class Salute implements Cloneable {

	public String salutee;

	public Salute(String salutee) {
		this.salutee = salutee;
	}

	public void informal() {
        	System.out.println("Hello, " + salutee + "!"); 
	} 

	public void formal(String title) {
        	System.out.println("Hello, " + title + "" + salutee + ". Have a wonderful day."); 
	} 

	@Override
	protected Object clone() throws CloneNotSupportedException {
		return super.clone();
	}
}
