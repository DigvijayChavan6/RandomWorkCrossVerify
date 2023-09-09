class patWithAlpha {
    public static void main(String[] args) {
        char al='A';
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                System.out.print(al++);
            }
            System.out.println();
        }
    }    
}
