1. Java Program To Check Whether The Given Number Is Binary Or not

SOLUTION:
public class JavaBinaryOrNot {

	static void isBinaryOrNot(int number) {
		boolean isBinary = true;

		int copyOfNumber = number;

		while (copyOfNumber != 0) {
			int temp = copyOfNumber % 10; // Gives last digit of the number

			if (temp > 1) {
				isBinary = false;
				break;
			} else {
				copyOfNumber = copyOfNumber / 10;
			}
		}

		if (isBinary) {
			System.out.println(number + " is a binary number");
		} else {
			System.out.println(number + " is not a binary number");
		}
	}

	public static void main(String[] args) {
		isBinaryOrNot(128956);

		isBinaryOrNot((101110));

		isBinaryOrNot((42578));

		isBinaryOrNot((10110101));
	}
}