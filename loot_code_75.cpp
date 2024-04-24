//second pass method
        int n = nums.size();
        int noz = 0;
        int noo = 0;
        int notw = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0 ) noz++;
            else if(nums[i]  == 1) noo++;
            else notw++;
        }
        //fill
        for(int i = 0; i < n; i++){
            if(i < noz) nums[i] = 0;
            else if(i < (noz + noo)) nums[i] = 1;
            else nums[i] = 2;
        }
        return;
    }


//one pass method
    int lo = 0;  
    int mid = 0;
    int hi = nums.size() - 1;
    // 1) alaways thinking about mid
    // 2) 0 to lo - 1 -> 0 , hi + 1 To end -> 2
    // 3) lo to mid -> 2
    while(mid <= hi){
        if(nums[mid] == 2){
            nums[mid] = nums[hi];
            nums[hi] = 2;
            hi--;
        }
        else if(nums[mid] == 0){
            int temp = nums[mid];
            nums[mid] = nums[lo];
            nums[lo] = temp;
            lo++;
            mid++;                          
        }
        else mid++;
    }
    return;
}
};
