1.Using inheritance, one class can acquire the properties of others. Consider the following Animal class:
class Animal{
    void walk(){
        System.out.println("I am walking");
    }
}

class Bird extends Animal {

    void fly() {
        System.out.println("I am flying");
    }

    void sing() {
        System.out.println("I am singing");
    }
}
