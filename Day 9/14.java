public class Solution {
    public int[] solve(int A, int[] B) {
      int min=Integer.MAX_VALUE;
      int t=0;
      for(int i=0; i<B.length;i++){
          int v= B[i];
        //   min = Math.min(v, min);
          if(v<min){
              min= v;
              t=i;
          }
      }
      int c= A/min;
      int remain= A%min;
      int[] arr= new int[c];
      for(int i=0; i<arr.length; i++){
          arr[i]= t;
      }
      int i=0;
      int j=0;
      while(i<B.length && j<arr.length){
          int idx= arr[j];
          if(B[i]-B[idx]<=remain){
              arr[j]= i;
              remain-=(B[i]-B[idx]);
              j++;
          }
          else i++;
      }
      
      return arr;
      
    }
}
