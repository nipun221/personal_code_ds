#include<bits/stdc++.h>
using namespace std;

int printVector(vector<int> array){
    for (int i = 0; i<array.size(); i++){
        cout<<array[i]<<' ';
    }
    cout<<endl;
}

int printArray(int array[], int size){
    for (int i = 0; i<size; i++){
        cout<<array[i]<<' ';
    }
    cout<<endl;
}

int bubbleSort(int array[], int size){
    bool swapped;
    for (int i=0; i<size-1; i++){
        swapped = false;
        for (int j=0; j<size-i-1; j++){
            if(array[j] > array[j+1]){
                swap(array[j], array[j+1]); 
                swapped = true;
                continue;
            }
        }
        if (swapped == false){
            break;
        }
    }
}

int maxAndMin(int array[], int size){
    bubbleSort(array, size);
    int min = array[0];
    int max = array[size-1];
    cout<<"Minimum integer in array = "<<min<<endl;
    cout<<"Maximum integer in array = "<<max<<endl;
}

int getMax(int array[], int size){
    int max = INT_MIN;
    for (int i=0; i<size; i++){
        if (array[i]>max){
            max = array[i];
        }
    }
    return max;
}

int getMin(int array[], int size){
    int min = INT_MAX;
    for (int i=0; i<size; i++){
        if(array[i]<min){
            min = array[i];
        }
    }
    return min;
}

int sumOfArray(int array[], int size){
    int sum = 0;
    for (int i=0; i<size; i++){
        sum = sum + array[i];
    }
    return sum;
}

int linearSearch(int array[], int size, int num){
    for (int i=0; i<size; i++){
        if (num == array[i]){
            return i;
        }
    }
    return 0;
}

int reverseArray(int array[], int size){
    int newSize = size/2;
    for (int i=0; i<newSize; i++){
        swap(array[i], array[size-i-1]);
    }
}

int waveArray(int array[], int size){
    int i = 0;
    int num = size%2;
    if (num == 0){
        while (i<size){
            swap(array[i], array[i+1]);
            i = i + 2;  
        } 
    }
    while (i<size-1){
        swap(array[i], array[i+1]);
        i = i + 2;
    }
}

int indexFinder(int array[], int size, int num){
    int* element = find(array, array+size, num);
    if (element != array+size){
        int index = element-array;
        return index;
    }
}

int interSection(int arr1[], int size1, int arr2[], int size2){
    for (int i=0; i<size1; i++){
        for (int j=0; j<size2; j++){
            if (arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
    cout<<endl;
}

int pairSum(int array[], int size){
    cout<<"sum of pairs in array are = ";
    int i = 0;
    int num = size%2;
    if (num == 0){
        while (i<size){
            cout<<array[i]+array[i+1]<<" ";
            i = i + 2;  
        } 
    }
    while (i<size-1){
        cout<<array[i]+array[i+1]<<" ";
        i = i + 2;
    }
    cout<<endl;
}

int kMax(int array[], int size, int num){
    bubbleSort(array, size);
    for (int i=0; i<size; i++){
        if(num == array[i]){
            return size-i;
        }
    }
}

int kMin(int array[], int size, int num){
    bubbleSort(array, size);
    for (int i=0; i<size; i++){
        if(num == array[i]){
            return i+1;
        }
    }
}

int findUnique(int array[], int n){
    for (int i=0; i<n; i++){
        int temp = 0;
        for (int j = 0; j<n; j++){
            if (array[i] == array[j]){
                temp = temp + 1;
            }
        }
        if (temp == 1){
            return array[i];
        }
    }
}

int findUniqueOpt(int array[], int n){
    int temp = 0;
    for (int i=0; i<n; i++){
        temp = temp ^ array[i];
    }
    return temp;
}

bool uniqueOccur(vector<int>& array){
    sort(array.begin(), array.end());
    vector<int> arr;
    int i = 0; 
    while (i < array.size()) {
        int temp = 1;
        int j = i + 1;
        while (j < array.size()) {
            if (array[i] == array[j]) {
                temp = temp + 1;
            }
            j++;
        }
        arr.push_back(temp);
        i=i+temp;
    }
    sort(arr.begin(), arr.end());
    for (int i=0; i<arr.size()-1; i++){
        if (arr[i] == arr[i+1]){
            return false;
        }
    }
    return true;
}

int findDuplicate(int array[], int n){
    for (int i=0; i<n;){
        int temp = 0;
        for (int j = 0; j<n; j++){
            if (array[i] == array[j]){
                temp = temp + 1;
            }
        }
        if (temp != 1){
            cout<<array[i]<<" ";
        }
        i = i + temp;
    }
}

int findDuplicateOpt(vector<int> array){
    int a = 0;
    for (int i=0; i<array.size(); i++){
        a = a ^ array[i] ^ i;
    }
    return a;
}

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
   for (int i=0; i<arr.size(); i++){
      for (int j=i+1; j<arr.size(); j++){
         if (arr[i]+arr[j] == s){
            vector<int> temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            ans.push_back(temp);
         }
      }
   }
   sort(ans.begin(), ans.end());
   return ans;
}

int sort01(int array[], int n){
    int i = 0;
    int j = n-1;
    while(i < j){
        if (array[i]==0){
            i++;
        }
        if (array[j] == 1){
            j--;
        }
        if(array[i] == 1 && array[j] == 0 && i<j){
            swap(array[i], array[j]);
            i++;
            j--;
        }
    }
}

int sortIntegers(int arr[], int n){
    int i = 0;
    int j = n-1;
    while(i < j){
        if (arr[i] < 0){
            i++;
        } 
        if (arr[j] > 0){
            j--;
        }
        if (arr[i] > 0 && arr[j] < 0 && i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

vector<int> sort012(vector<int> arr){
    vector<int> ans;
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i=0; i<arr.size(); i++){
        if (arr[i] == 0){
            count0++;
        } else if (arr[i] == 1){
            count1++;
        } else if (arr[i] == 2){
            count2++;
        }
    }
    for (int i=0; i<count0; i++){
        ans.push_back(0);
    }
    for (int i=count0; i<(count0+count1); i++){
        ans.push_back(1);
    }
    for (int i=(count0+count1); i<(count0+count1+count2); i++){
        ans.push_back(2);
    }
    return ans;
}

void sortNew012(int arr[], int n){
    int ans[n];
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i=0; i<n; i++){
        if (arr[i] == 0){
            count0++;
        } else if (arr[i] == 1){
            count1++;
        } else if (arr[i] == 2){
            count2++;
        }
    }
    for (int i=0; i<count0; i++){
        ans[i] = 0;
    }
    for (int i=count0; i<(count0+count1); i++){
        ans[i] = 1;
    }
    for (int i=(count0+count1); i<(count0+count1+count2); i++){
        ans[i] = 2;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = ans[i];
    }
}

vector<int> separateNegativeAndPositive(vector<int> &arr){
    int i = 0;
    int j = arr.size()-1;
    while(i < j){
        if (arr[i] < 0){
            i++;
        } 
        if (arr[j] > 0){
            j--;
        }
        if (arr[i] > 0 && arr[j] < 0 && i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

double mergeArray(vector<int>& nums1, vector<int>& nums2) {
    int i = 0;
    int j = 0;
    vector<int> merge;
    while (i < nums1.size()){
        merge.push_back(nums1[i]);
        i++;
    }
    while (j < nums2.size()){
        merge.push_back(nums2[j]);
        j++;
    }
    sort(merge.begin(), merge.end());
    int n = merge.size();
    if (n%2 == 0){
        double sum = merge[n/2-1] + merge[n/2];
        return sum/2;
    }
    double sum2 = merge[n/2];
    return sum2;
   
}

vector<int> rotateArray(vector<int>arr, int k) {
    int j = 0;
    while (j < k){
        int first = arr[0];
        arr.push_back(first);
        arr.erase(arr.begin());
        j++;
    }
    return arr;
}

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while (start <= end){
        if (arr[mid] == key){
            return mid;
        }
        if (key > arr[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int binarySearch2(vector<int> arr, int start, int end, int key){
    int mid = start + (end - start)/2;
    while (start <= end){
        if (arr[mid] == key){
            return mid;
        }
        if (key > arr[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int binarySearchRecursion(int arr[], int start, int end, int key){
    if (start <= end){
        int mid = start + (end - start)/2;
        if (key == arr[mid]){
            return mid;
        }

        if (key > arr[mid]){
            return binarySearchRecursion(arr, mid+1, end, key);
        }

        return binarySearchRecursion(arr, start, mid-1, key);
    }
    return -1;
}

void merge(int arr1[], int arr2[], int n, int m){
    int arr[m+n];
    int i = 0;
    while (i < n){
        arr[i] = arr1[i];
        i++;
    }
    int j = 0;
    int k = n;
    while (j < m && k < (m+n)){
        arr[k] = arr2[j];
        k++;
        j++;
    }
    sort(arr, arr+m+n);
    i = 0;
    while(i < n){
        arr1[i] = arr[i];
        i++;
    }
    j = 0;
    k = n;
    while (j < m && k < (m+n)){
        arr2[j] = arr[k];
        k++;
        j++;
    }
}  // time complexity = O((m+n)*log(m+n)), space complexity = O(m+n)

int firstOccur(vector<int> &arr, int key){
	int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start <= end){
        if (key == arr[mid]){
            ans = mid;
            end = mid-1;
        }
        else if (key > arr[mid]){
            start = mid+1;
        } else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccur(vector<int> &arr, int key){
	int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start <= end){
        if (key == arr[mid]){
            ans = mid;
            start = mid+1;
        }
        else if (key > arr[mid]){
            start = mid+1;
        } else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while (start < end){
        if (arr[mid] < arr[mid+1]){
            start = mid+1;
        } else {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;       
}

int minJumps(int arr[], int n){
    int y = 0;
    int count = 0;
    int i = 0;
    while(i < n){
        y = arr[i];
        if (y > (n-1-i)){
            i = n-1;
            count++;
        } else {
            i = i+y;
            count++;
        }
        i++;
    }
    return count;
}   // Incomplete Question

int pivotIndex(vector<int>& nums) {
    int total = 0;
    for (int i=0; i<nums.size(); i++){
        total = total + nums[i];
    }   
    int leftSum = 0;
    int j = 0;
    while(j < nums.size()){
        if (j != 0){
            leftSum = leftSum + nums[j-1];
        }
        int rightSum = total - leftSum - nums[j];
        if (rightSum == leftSum){
            return j;
        }
        j++;
    }
    return -1;
}

int pivotInArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while (start < end){
        if (arr[mid] >= arr[0]){
            start = mid+1;
        } else {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return mid;
}

int pivotInArray2(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while (start < end){
        if (arr[mid] >= arr[0]){
            start = mid+1;
        } else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return mid;
}

int sqrt(int n){
    int start = 0;
    int end = n;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start < end){
        if (mid*mid == n){
            return mid;
        }
        if (mid*mid > n){
            end = mid-1;
        } else if (mid*mid < n){
            ans = mid;
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

bool isPossible(vector<int> arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for (int i=0; i<n; i++){
        if (pageSum + arr[i] <= mid){
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    int start = 0;
    int sum = 0;
    for (int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    int end = sum;
    int mid = start + (end-start)/2;
    int ans = -1;

    while (start <= end){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        } else {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

bool isPossible2(int arr[], int n, int k, int mid){
    int boardLength = 0;
    int painterCount = 1;
    for (int i=0; i<n; i++){
        if (boardLength + arr[i] <= mid){
            boardLength +=  arr[i];
        } else {
            painterCount++;
            if (painterCount > k || arr[i] > mid){
                return false;
            }
            boardLength = arr[i];
        }
    }
    return true;
}

long long minTime(int arr[], int n, int k){
    int start = 0;
    int sum = 0;
    for (int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    int end = sum;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start <= end){
        if (isPossible2(arr, n , k, mid)){
            ans = mid;
            end = mid-1;
        } else {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

bool isPossible3(vector<int> &stalls, int k, int mid){
    int cowCount = 1;
    int lastPos = stalls[0];
    for (int i=0; i<stalls.size(); i++){
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if (cowCount == k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int maxi = *max_element(stalls.begin(), stalls.end());
    int mini = *min_element(stalls.begin(), stalls.end());
    int end = maxi-mini;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end){
        if (isPossible3(stalls, k, mid)){
            ans = mid;
            start = mid+1;
        } else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

bool isCooking(vector<int> &rank, int m, int mid){
    int time = 0;
    int dishCount = 0;
    for (int i=0; i<rank.size(); i++){
        time = rank[i];
        int j = 2;
        while (time<=mid){
            dishCount++;
            time = time + (rank[i]*j);
            j++;
        }
        if (dishCount>=m) return true;
    }
    return false;
}

int minCookTime(vector<int> &rank, int m) {
    int start = 0;
    int mini = *min_element(rank.begin(), rank.end());
    int end = m*(m+1)*(mini)/2;
    int ans = 0;
    int mid = start + (end-start)/2;
    while (start <= end){
        if (isCooking(rank, m, mid)){
            ans = mid;
            end = mid-1;
        } 
        else {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int cutHeight(vector<int> tree, int m, int mid){
    int wood = 0;
    for (int i=0; i<tree.size(); i++){
        if (tree[i] > mid){
            wood = wood + (tree[i]-mid);
        }
    }
    return wood;
}

int lumberjack(vector<int> &tree, int m){
    int start = 0;
    int end = *max_element(tree.begin(), tree.end());
    while (start <= end){
        int mid = start + (end-start)/2;
        int wood = cutHeight(tree, m, mid);
        if (wood == m){
            return mid;
        } else if (wood > m){
            start = mid+1;
        } else if (wood < m){
            end = mid-1;
        }
    }
    return -1;
}

int minOfArr(int array[], int l, int r){
    int min = INT_MAX;
    for (int i=l; i<=r; i++){
        if(array[i]<min){
            min = array[i];
        }
    }
    return min;
}

int selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = minOfArr(arr, i, n-1);
        int mini = 0;
        for (int j=0; j<n; j++){
            if (arr[j] == min){
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

void selectionSortOpt(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int minIndex = i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void insertionSort(int n, vector<int> &arr){
    int i = 1;
    while (i < n){
        int temp = arr[i];
        int j = i-1;
        while (j >= 0) {
            if (arr[j] > temp){
                arr[j+1] = arr[j];
            } else {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        i++;
    }
}

void reverseArray(vector<int> &arr , int m) {
    int mid = (m+arr.size()+1)/2;
	for (int i=m+1; i<mid; i++){
        swap(arr[i], arr[arr.size()-i+m]);
    }
}

vector <int> sortedArray(vector <int> a, vector <int> b) {
    vector <int> ans;
    vector<int>::iterator ip;
    for (int i=0; i<a.size(); i++) {
        ans.push_back(a[i]);
    }
    for (int i=0; i<b.size(); i++) {
        ans.push_back(b[i]);   
    }
    sort(ans.begin(), ans.end());
    int n = ans.size();
    ip = unique(ans.begin(), ans.begin()+n);
    ans.resize(distance(ans.begin(), ip));
    return ans;
}

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    vector<int> sum;
	int i = 0, j = 0;
    while(i<m) {
        sum.push_back(arr1[i]);
        i++;
    }
    while(j<n) {
        sum.push_back(arr2[j]);
        j++;
    }
    sort(sum.begin(), sum.end());
    return sum;
}

vector<int> moveZeros(int n, vector<int> a) {
    vector<int> ans;
    for (int i=0; i<a.size(); i++) {
        if (a[i] != 0) {
            ans.push_back(a[i]);
        }
    }
    int size = a.size()-ans.size();
    for (int j=0; j<size; j++) {
        ans.push_back(0);
    }
    printVector(ans);
}

int main() {
    vector<int> arr = {4, 42, 40, 26, 46, 1};
    insertionSort(6, arr);
    printVector(arr);
    cout<<endl;
    reverseArray(arr, 2);
    printVector(arr);
    cout<<endl;

    vector <int> a = {3, 3, 4, 5, 6, 7, 8, 9, 9, 9 };
    vector <int> b = {2, 4, 10, 10 };
    sortedArray(a, b);

    vector <int> v1 = {1, 2, 3, 0, 0};
    vector <int> v2 = {4, 5};
    ninjaAndSortedArrays(v1, v2, 3, 2);
    cout<<endl;

    vector <int> v3 = {0, 1, 2, 0, 3, 4, 0};
    moveZeros(5, v3);
}


// int array[8] = {45,2,29,456,98,45,789,34};
// cout<<"unsorted array = ";
// printArray(array, 8);
// cout<<endl;
// maxAndMin(array, 8);
// cout<<endl;
// bubbleSort(array, 8);
// cout<<"sorted array = ";
// printArray(array, 8);
// cout<<endl;
// int max = getMax(array, 8);
// int min = getMin(array, 8);
// cout<<"Minimum integer in array = "<<min<<endl;
// cout<<"Maximum integer in array = "<<max<<endl;
// int sum = sumOfArray(array, 8);
// cout<<sum<<endl;
// cout<<endl;
// int search = linearSearch(array, 8, 45);
// cout<<search<<endl;



// int array[9] = {45,2,29,456,98,45,789,34,7};
// cout<<"unsorted array = ";
// printArray(array, 9);
// cout<<endl;
// bubbleSort(array, 9);
// cout<<"sorted array = ";
// printArray(array, 9);
// cout<<endl;
// reverseArray(array, 9);
// cout<<"reversed array = ";
// printArray(array, 9);
// cout<<endl;
// waveArray(array, 9);
// cout<<"wave array = ";
// printArray(array, 9);
// cout<<endl;
// int arr[10] = {54, 68, 656, 45, 873, 897, 53, 82, 72, 26};
// cout<<"new array = ";
// printArray(arr, 10);
// cout<<endl;
// waveArray(arr, 10);
// cout<<"new wave array = ";
// printArray(arr, 10);
// cout<<endl;
// int A[5] = {1,2,3,4,5};
// int B[8] = {2,4,7,34,5,12,45,6};
// printArray(A, 5); printArray(B, 8);
// cout<<"common elements of above 2 arrays are = ";
// interSection(A, 5, B, 8);
// cout<<endl;
// pairSum(B, 8);
// cout<<endl;
// int max = kMax(arr, 10, 656);
// cout<<max<<endl;
// cout<<endl;
// int min = kMin(arr, 10, 54);
// cout<<min<<endl;

// vector<int> A = {1, 1, 2, 0, 1, 0, 2, 2, 0, 0, 1};
// vector<int> B = sort012(A);
// printVector(B);
// cout<<endl;
// int R[11] = {1, 1, 2, 0, 1, 0, 2, 2, 0, 0, 1};
// sortNew012(R, 11);
// printArray(R, 11);
// cout<<endl;
// vector<int> I = {4, 6, -2, 3, -5, -18, -7, 10, 12, -1};
// separateNegativeAndPositive(I);
// printVector(I);
// cout<<endl;
// vector<int> arr1 = {1,2,3};
// vector<int> arr2 = {4,5,6,7};
// double sum = mergeArray(arr1, arr2);
// cout<<sum;
// cout<<endl<<endl;