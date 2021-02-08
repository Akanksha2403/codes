

// using namespace std;


// // vector <int> triplet;

// int binary_search(int arr[], int length, int num){
// 	int x = 0, l = 0, r = length-1;
// 	bool c = false;
// 	cin >> x;
// 	while(l <= r){

// 		int mid = (l+r)/2;
// 		if(arr[mid] == num){
// 			c = true;
// 			cout << mid;
// 			return 0;
// 		}
// 		if(arr[mid] > num){
// 			r = mid-1;
// 		}
// 		else
// 		{
// 			l = mid+1;
// 		}

// 	}
// 	if(c == false){
// 		cout<< "FO";
// 	}
// 	return 0;	
// }

// int main(){
// 	//write your code from here
// 	int test_case;
// 	cin >> test_case;

// 	while (test_case)
// 	{
// 		int n; cin >> n;
// 		int arr[n];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin >>arr[i];
// 		}
// 		int num;cin >> num;
// 		binary_search(arr, n, num);
// 		test_case = test_case-1;
// 	}
	
	
	
// 	return 0;
// }
