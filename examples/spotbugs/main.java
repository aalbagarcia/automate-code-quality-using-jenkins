import example.Salute;

class HelloWorld {
    public static void main(String[] args) {
        Salute salute = new Salute("Alfonso");
	salute.informal();
	salute.formal("Mr.");
    }
}
