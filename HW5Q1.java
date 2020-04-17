class Main {
  public static void main(String[] args) {
    
    Main one = new Main();
    Main two = new Main(5);
    int x = 0;

    if(one.getClass() == two.getClass()){
      System.out.println("Name Type Equivalence Only");
    }
    else {
      System.out.println("Not Name Type Equivalence Only");
    }
  }

  public Main(){

  }

  public Main(int petal){
    int pedal = petal;
  }
}