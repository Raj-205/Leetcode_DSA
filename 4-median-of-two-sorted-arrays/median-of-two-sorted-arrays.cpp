class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1+n2;
        int indx2 = n/2;
        int indx1 = indx2-1;
        int idel1 =-1;
        int idel2 =-1;
        int i=0, j=0;
        int count =0;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                if(count == indx1) idel1 = nums1[i];
                if(count == indx2) idel2 = nums1[i];
                count++;
                i++;
            }
            else{
               if(count == indx1) idel1 = nums2[j];
               if(count == indx2) idel2 = nums2[j];
                count++;
                j++;
            }
        }
        while(i<n1){
            if(count == indx1) idel1 = nums1[i];
            if(count == indx2) idel2 = nums1[i];
            count++;
            i++;
        }
        while(j<n2){
            if(count == indx1) idel1 = nums2[j];
            if(count == indx2) idel2 = nums2[j];
            count++;
            j++;
        }
        if(n%2==1){
            return idel2;
        }
        else{
            return (idel1 +idel2 )/2.0;     
        }
    }
};