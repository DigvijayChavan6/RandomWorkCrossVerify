public class arrpp{
    public static void main(String[] args) {
        int[] ar=new int[10];
        // for(int i=0;i<10;i++)ar[i]++;
        // for(int i=0;i<10;i++)ar[i]++;
        // for(int i=0;i<10;i++)ar[i]++;
        // for(int i=0;i<10;i++){
        //     System.out.println(ar[i]);
        // }
        if(stb(912345678))System.out.println("Stable");
        else System.out.println("UnStable");
    }   
    static boolean stb(int n){
        int[] ar=new int[10];
        while(n!=0){
            ar[n%10]++;
            n/=10;
        }
        int t=-1;
        for(int i=0;i<10;i++){
            if(ar[i]!=0){
                if(t==-1)t=ar[i];
                else if(t!=ar[i])return false;
            }
        }
        return true;
    } 
}
