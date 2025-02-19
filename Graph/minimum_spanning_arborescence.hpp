#include "../bits/stdc++.h"
/**
 * 最小全域有向木(Chu-Liu/Edmonds, O(EV))
 * 0. (縮約した閉路の合計コスト sum = 0)
 * 1. 根以外の全頂点に対しその頂点へ入る最小コスト辺を選択
 * 2. この時点で閉路が無ければ終了. 合計コストが答え
 * 3. 閉路を縮約(グループ分け)する. 閉路全ての合計コストを sum に加算
 * 4. 閉路に入る辺のコストを再計算
 * 5. 縮約後のグラフに対し, 最小全域有向木を適用.
 * 6. 得られたコストに sum を加算して出力
 * 
 * 最小全域有向木(O(ElogV))
 * 1. 根以外の頂点を適当に選ぶ
 * 2. 今いる頂点vに入る最小コスト辺(u->v とする)を選択.
 *    頂点v が縮約された頂点なら, 元の閉路で v に入る辺を除去,
 *    u へ移動し, (u->v) を使用する辺に追加
 * 3. 閉路ができたら, 縮約を行う. この時, 閉路外から閉路上の点 w に入る辺のコストから
 *    w に入る閉路上の辺のコスト分を減らす
 * 4. 根と接続されていなければ 2. に戻る. 根と接続されていない頂点があればその点から開始.
 */
