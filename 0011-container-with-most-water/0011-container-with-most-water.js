/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
    let l = 0;
    let r = height.length - 1;
    let maxVal = -1;
    while (l < r) {
        // let minHeight = Math.min(height[l],height[r]);
        maxVal = Math.max(maxVal,Math.min(height[l],height[r])*(r-l));
        if(height[l]<height[r]){
            l++;
        }
        else{
            r--;
        }
    }
    return maxVal;
};