5. Java's BigDecimal class can handle arbitrary-precision signed decimal numbers. Let's test your knowledge of them!
Given an array, , of  real number strings, sort them in descending order — but wait, there's more! Each number must be printed in the exact same format as it was read from stdin, meaning that  is printed as , and  is printed as . If two numbers represent numerically equivalent values (e.g., ), then they must be listed in the same order as they were received as input).
Arrays.sort(s, new Comparator<String>() {
        @Override
        public int compare(String o1, String o2) {
        if (o1 == null || o2 == null) {
            return 0;
        }
        BigDecimal o1bd = new BigDecimal(o1);
        BigDecimal o2bd = new BigDecimal(o2);
        return o2bd.compareTo(o1bd);
        }
    });
