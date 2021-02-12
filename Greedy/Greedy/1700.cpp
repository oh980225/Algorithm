//#include <iostream>
//
//using namespace std;
//
//int N, K;
//int order[101];
//int hole[101];
//int result;
//
//int main()
//{
//    cin >> N >> K;
//
//    for (int i = 1; i <= K; i++) {
//        cin >> order[i];
//    }
//
//    for (int i = 1; i <= K; i++) {
//        for (int j = 1; j <= N; j++) {
//            if (!hole[j]) {
//                hole[j] = order[i];
//                break;
//            }
//            else
//            {
//                if (order[i] == hole[j]) {
//                    break;
//                }
//                if (j != N) {
//                    continue;
//                } 
//
//                int change, val = -1;
//                for (int k = 1; k <= N; k++) {
//                    int term = 0;
//                    for (int l = i + 1; l <= K && order[l] != hole[k]; l++) term++;
//                    if (term > val) {
//                        val = term;
//                        change = k;
//                    }
//                }
//                hole[change] = order[i];
//                result++;
//            }
//        }
//    }
//    cout << result;
//    return 0;
//}
//
//// 
//// ref : https://yangorithm.tistory.com/44