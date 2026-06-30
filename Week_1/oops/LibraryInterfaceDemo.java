public class LibraryInterfaceDemo {

    public static void main(String[] args) {

        // Test Case 1 - KidUser

        KidUsers kid = new KidUsers();

        System.out.println("----- Kid User Test Case -----");

        kid.age = 10;
        kid.registerAccount();

        kid.bookType = "Kids";
        kid.requestBook();

        System.out.println();

        kid.age = 18;
        kid.registerAccount();

        kid.bookType = "Fiction";
        kid.requestBook();

        System.out.println();

        // Test Case 2 - AdultUser

        AdultUser adult = new AdultUser();

        System.out.println("----- Adult User Test Case -----");

        adult.age = 5;
        adult.registerAccount();

        adult.bookType = "Kids";
        adult.requestBook();

        System.out.println();

        adult.age = 23;
        adult.registerAccount();

        adult.bookType = "Fiction";
        adult.requestBook();
    }
}
