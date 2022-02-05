# R99
1. 整数ひとつをキーボードから入力、それに 1 を足した数をプリントする関数 void add1_p(void). 

2. 整数 x, y を引数にとり、それらを足した数を戻り値とする関数 int add2(int x, int y). 

3. 整数 x, y を引数にとり、それらを足した数をプリントする関数 void add2_p(int x, int y). 

4. 円の半径（整数）を引数にとり、その円の面積（浮動小数点数）を戻り値とする関数 float en(int r). 

5. 円の半径（整数）をキーボードから読み、その円の面積（浮動小数点数）をプリントする関数 void en_p(void). 

6. 整数 x を引数にとり、それが偶数だったら 1、奇数だったら 0 を返す関数 int is_even(int x). 

7. キーボードから整数ひとつを入力し、それが偶数だったら "偶数です"、奇数だったら "奇数です" とプリントする関数 void parity_p(void). 

8. 整数 n の絶対値を返す関数 int abs(int n). 

9. 整数 n の 2 乗を戻り値とする関数 int square(int n). 

10. n,m を非負の整数とする。 n の m 乗を返す関数 int power(int n, int m). C言語では nm を n^m では計算できない。 

11. 整数 x, y を引数にとり、それらの和、差、積、整数商をプリントする関数 void arithmetic_p(int x, int y). 

12. 彼・彼女の年齢を y とする。彼・彼女がティーンエイジャーだったら真、そうでなければ偽を返す関数 int is_teenage(int y). 

13. 西暦 year を引数にとり昭和、平成、令和の和暦をプリントする関数 void era_p(int year). era_p(2020)は "令和2年" をプリントする。 

14. 西暦 year を引数にとり、閏年であれば 1、そうでなければ 0 を返す関数 int is_leap(int year). 西暦が 4 で割り切れれば閏年。ただし、100 で割り切れる時は平年。ただし、400 で割り切れる時は閏年。 

15. hh 時 mm 分 ss 秒の hh, mm, ss を引数にとり、0 時 0 分 0 秒からの通算秒に変換した整数を戻り値とする関数 int time_to_int(int h, int m, int s). 

16. 時刻 h1:m1:s1 と 時刻 h2:m2:s2 の間の秒数を整数で返す関数 int sec_between(int h1, int m1, int s1, int h2, int m2, int s2). 

17. 平年の 1 月 1 日から同年 mm 月 dd 日までの日数を返す関数 int days(int mm, int dd). days(1,1) の戻り値は 1. 

18. y1 年 m1 月 d1 日から y2 年 m2 月 d2 月までの日数を返す関数int days_between(int y1, int m1, int d1, int y2, int m2, int d2). 自分は今日まで何日生きてきましたか？ 

19. [問題変更] 元日からの通算日数を引数 n で取り、文字列 "月の英名, 日" で返す関数 char * to_date(int n). 例えば、 to_date(1) の戻り値は "January, 1", to_date(365) の戻り値は "December, 31" だ。 

20. 整数 x, y を引数にとり、大きい方の整数を戻り値とする関数 int max2(int x, int y). 

21. 整数三つを引数にとり、もっとも大きい整数を戻り値とする関数 int max3(int x, int y, int z). 

22. 整数 4 つを引数にとり、もっとも大きい整数を戻り値とする関数 int max4(int x, int y, int z, int w). 

23. [ちょっと変更、加筆] 3つの非負の整数を引数とし、それらの長さを各辺とする三角形がありうるかどうかを判定する関数 int triangle(int x, int y, int z). （去年のこの問題には次のヒントがあった。三角形の成立条件は、最も長い辺の長さがそれよりも短い辺二つを足した長さよりも短くなることである。) 

24. [またまた変更] 3つの正の整数を引数とし、それらの長さを各辺とする直角三角形がありうるかどうかを判定する関数 int right_angle(int x, int y, int z). 

25. 整数 n から m までの総和を求める関数 int sum(int n, int m). 

26. 正の整数 n から m までの整数の積を求める関数 int product(int n, int m). 

27. 整数 n の各桁の総和を返す関数 int sum_of_digits(int n). 

28. 正の整数 n を引数とし、それが 3 の倍数だったら 1、5 の倍数だったら 2、3 の倍数でもあり、かつ、5 の倍数でもあったら 3、いずれでもなかったら 0 を返す関数 int fz(int n). 

29. 3 で割って1余り、5 で割って2余り、7 で割って 3 余る正の整数の最小のものはなにか？（孫子の問題） 

30. 整数一つを引数とし、その約数を全てプリントする関数 void divisors_p(int n). 

31. n 以下の整数のうち、もっとも約数の多い数を返す関数 int most_divisors(int n). 補助関数作りたい。 

32. 整数一つを引数とし、その約数の合計を戻り値とする関数 int sum_of_divisors(int n). 

33. n 以下の素数(nは整数)は何個あるかを戻り値とする関数 int primes(int n). 

34. 整数一つを引数とし、その数が素数だったら1、素数でなかったら 0 を返す関数int is_prime(int n).約数が何個あるかを数えて素数判定するのは遅い。速い素数判定を望む。回答には次で得られるこの問題のテストコードの実行時間を入れること。合格点は３秒。

> time ./main

real  0m1.020s
user  0m0.511s
sys 0m0.009s
35. n 未満の素数の和を求める関数int sum_primes_under(int n). 

36. [問題補足] 216未満の最大の素数は何か？ 216だけを相手にする関数作るよりも、任意の整数 n 未満の最大の素数を探す int max_prime_under(int n) を作るべきだろうな。 

37. [問題変更] 230を超えない2番目に大きい素数は何か？ 

38. 4 番目までの素数を足すと 2 + 3 + 5 + 7 = 17. 1000 番目までの素数の和を求めなさい。 

39. 10000 未満の素数 p1, p2, p3 で、p12 + p22 = p32を満たすものを探せ。 

40. 2520 は 1 から 10 の数字のすべての整数で割り切れる最小の整数である。1 から 20 までの整数すべてで割り切れる最小の整数は何か？ （加筆：この問題はループ覚えたての人が何でもかんでもループ一直線になるのを諌めたつもり。ちょっと待った、そのループ、膨大なムダやってないか？ループの前に一瞬立ち止まって考えてみ。) 

41. 600851475143 の素因数のうち最大のものを求めよ。 

42. 10 までの整数をその約数の数で分類すると、1-(1), 2-(2,3,5,7),3-(4,9), 4-(6,8,10) となってグループ 2 が最もたくさんのメンバーを持ち、そのメンバーの和は 17 になる。同様に 1000までの整数を分類し、もっともたくさんのメンバーを持つグループを特定し、総和せよ。多分その数は 143*** くらいになる。 

43. [問題前後しました。47番、75 番を先に解いてください。] n を整数とする。factorial(n) + 2 が立方数となるような n を全て求めよ。 

44. 整数一つを引数とし、その数が完全数かどうかを判定する関数 int is_perfect(int n). 

45. n よりも大きい完全数はなにか？を求める関数 int next_perfect(int n). 

46. 整数 n が平方数であるかどうかを判定する関数 int is_square(int n). 237169 は平方数である。 

47. 整数 n が立方数であるかどうかを判定する関数 int is_cubic(int n). 9663597 は立方数である。 

48. 正の整数 n が ０を含まない二つの整数の2乗の和として表されるかどうかを判定する関数int is_square_sum(int n). is_square_sum(30505) は 1 を返す。∵ 30505 = 1232+1242. 

49. 整数 n のルートを超えない最大の整数を返す関数int sqrt_int(int n). sqrt_int(24) の戻り値は4, sqrt_int(25)の戻り値は5 を期待している。ライブラリ sqrt を使うことは反則とする。 

50. n 未満の整数で、平方数かつ立方数でもある最大の数を探す関数 int square_cubic(int n). 

51. 3 桁の整数の桁を入れ替えた整数を返す関数int rev3(int n).例えば rev(314) の戻り値は 413 になる。310 は 13 だな。 

52. [問題変更]前問の 51 を一般化します。任意の整数(C の int に収まるやつ）の桁を入れ替えた整数を返す関数 int rev_int(int n). 

53. float x を四捨五入した int を返す関数int f_to_i(float x). 

54. float x を小数点第 2 位で四捨五入した float を返す関数float f_to_f1(float x).f_to_f1(3.14159265) の戻り値は 3.100000 になる。 

55. float x を小数点第 n+1 位で四捨五入した float を返す関数float f_to_f(float x, int n).f_to_f(3.14159265, 4) の戻り値は 3.141600になる。 

56. [random->rand に変更] #include <stdlib.h>した後、関数 int rand(void) を呼ぶとすごく大きい正の整数乱数が返ってくる。rand( ) を利用し、0 以上 n 未満の正の整数乱数を返す関数int my_rand(int n).
* 注意: #include <unistd.h> を加えた後、プログラムで my_rand( ) 呼ぶ前のどこかで少なくとも一度

srand(getpid( ));
ってやると(だいたいは main( ) の最初で)、乱数がバラバラになります（変な日本語だけど、これやらないといつも同じ順で乱数が出てくる） 
57. 0.0 ≤ r < 1.0 の浮動小数点数乱数 r を返す関数float randf(void). 

58. n ≤ r < m の整数乱数 r を返す関数int rand_int(int n, int m). 

59. 上で定義した randf( ) を呼び出し、2次元乱数 [x, y](0.0 ≤ x < 1.0, 0.0 ≤ y < 1.0)を n 個プリントする関数void randf_p(int n). 

60. 上の randf( ) を応用し、円周率 pi を求める関数float pi(int n).2次元乱数 [x,y]、(0.0 ≤ x < 1.0, 0.0 ≤ y < 1.0)を n = 1,000 個発生し、x^2 + y^2 ≤ 1 となるものを数える。多分それは 785 近辺の数になる。とすると円周率 pi は (785/1000)*4 と推定できる。n を増やすと pi の精度は上がるはず。 

61. サイズ n の整数配列 a[ ] に 0~99 の乱数をセットする関数 void init_randoms_99(int a[ ] , int n). 

62. 上で作った乱数配列 a[ ] 中にみつからない 0~99 の数をプリントする関数 void find_not(int a[ ], int n). 

63. 上で作った乱数配列 a[ ] ( サイズは n) 中に一番たくさん重複して現れる数を返す関数int find_max_dupli(int a[ ], int n). 

64. クラスに誕生日の同じ人は何人いますか？ ひとクラス 60 人とします。この問題を解くのに何が必要でしょう？ ここまでにやったR99 の問題で解けます。 プログラムにならなくても、解くための方法、思いついたら QA に。 

65. ジャンケンゲームを作ってください。 10回繰り返してください。3勝3敗3引き分けくらいになりますか？ (2021-12-02 追記: 勝ち負けの判定、十回と言わず n 回の勝ち負け引き分けの判定を自分がメモするんじゃプログラムとは言えない。コンピュータにさせるんだ！） 

66. int * shuffle(int n) を定義せよ。戻り値は 0~n-1 の n 個の正整数が重複なく順番バラバラに入った配列。完成するとビンゴゲームに使えるぞ。 

67. ファイル numbers.txt をダウンロードし、適当な場所にセーブしてください。ファイル "numbers.txt"には一行にひとつ、整数が書き込まれている。そのファイルの1行目の数を返す関数int head(void). 

68. ファイル"numbers.txt"が何行あるかを返す関数int lines(void). 

69. ファイル"numbers.txt"の n 行目の数字を返す関数int nth(int n). ファイルに n 行目が存在しない場合、-1 を返す。 

70. ファイル"numbers.txt"の最初の十行に含まれる整数の総和を返す関数int sum10(void). 

71. ファイル"numbers.txt"の最初の n 行に含まれる整数の総和を返す関数int sum_n(int n). 

72. ファイル "numbers.txt"の最後の n 行に含まれる整数の総和を返す関数int sum_tail(int n). 

73. ファイル名を文字列 fname として引数にとり、そのファイルの中身を表示する関数 void cat(char *fname) 

74. ファイル名を文字列 fname として引数にとり、そのファイルの中身を行番号つきで表示する関数 void n_cat(char *fname) 

75. 関数 int factorial(int n) を定義せよ。factorial(5) は 5! の値を戻り値とする。一般に factoria(n) = n * factorial(n-1).0! は 1 だよ。 

76. 0!, 1!, 2! ... を次々に計算していき、n! > m となる最小の n を求める関数int factorial_over(int m). 

77. n が 1 の時 1、 n が偶数の時 n/2, 奇数の時 3n+1 を返す関数 int c(int n) を定義せよ。問題はここから。その戻り値を再び関数 c( ) の引数とし、同じ計算を繰り返すと、どんな n から始めても有限回の繰り返しののちに 1 にたどり着くという（Collatz の予想）。 n から始めて c( ) を繰り返し、 1 にたどり着くまでの回数を返す関数 int collatz(int n) を定義し、1 ≤n ≤ 100 の n について、Collatz の予想を確かめよ。collatz(n) を最大とする n は何か？collatz(1)=1, collatz(2)=2 である。 

78. フィボナッチ数列を計算する関数 int fibo(int n) を定義せよ。fibo(0) = 0, fibo(1) = 1, fibo(2) = 1 で、一般にfibo(n) = fibo(n-1) + fibo(n-2) だ。 

79. [文言修正、さらにごめん、テストコードでオーバーフローしてた]フィボナッチ数 fibo(m) が最初に n を超える m を求める関数int fibo_over(int n). 

80. n 以上 m 未満となるフィボナッチ数の総和を返す関数int sum_of_fibo_between(int n, int m).sum_of_fibo_between(10000,100000) の戻り値は 178700 よりちょっと大きい。 

81. ここからは数題、文字列の問題が続きます。文字列ライブラリを利用せず、自力で文字列関数作って提出のこと。
文字列 s が空文字列 "" かどうかを判定する関数int is_empty(char* s). 

82. 文字列 s の長さを返す関数int str_len(char* s). 

83. 文字列 s に含まれる文字 c の数を返す関数 int count_chars(char* s, char c). 

84. 二つの文字列 s1, s2 の先頭から n 文字までが等しいかどうかを判定する関数int str_eql_n(char* s1, char* s2, int n). 

85. 文字列 s1 と文字列 s2 が完全に等しいかどうかを判定する関数int str_eql(char* s1, char* s2). 

86. [変更、引数の並び順をCのライブラリに合わせた] 文字列 s1 を文字列 s2 にコピーする関数 char * str_copy(char* s2, char* s1).s2 は s1 をコピーするに十分な長さがあると仮定してよい。以下同様。str_copy() の戻り値は s2 のアドレス。str_copy(s2,s1) の実行後、str_sql(s1, s2) が真になること。s2 のメモリを関数内部で確保する malloc( ) 版に挑戦するのもよい。 

87. 文字列 s1 の後ろに文字列 s2 を連結する関数char* str_append(char* s1, char* s2). char s1[100] = "abc"; str_append(s1, "def") の実行後、str_eql(s1, "abcdef")は真になる。s1 を破壊しない malloc( ) バージョンも作ってみよう。 

88. 文字列 s1 中に文字列 s2 が出現するかどうかを判定する関数int str_search(char* s1, char* s2).s2 が s1 の何文字目から出現しているかを返す。見つからなかった時は -1 を返せ。戻り値 が 0 の時は「s1 の先頭に s2 は見つかる」の意味になる。 

89. [問題修正] 文字列 s1 の n 文字目からの m 文字を削除するchar* str_remove(char* s1, int n, int m). 戻り値は書き換わった s1. s1[100] = "0123456789"; として、str_remove(s1, 5,3) の後、s1 は "0123489" になる。 n+m が s1 の長さを超えてたらどうしようか？ 何もせずに戻るか、n から後ろを全部消すか？どっちがいいかな？ s1 を書き換えない安全なバージョンにも挑戦しよう。 

90. [問題修正 2022-01-24] 文字列 s1 の n 文字目に文字列 s2 を挿入するchar* str_insert(char* s1, int n, char* s2).戻り値は挿入後の文字列（ポインタ）。 char s1[100]="012345"; printf("%s\n", str_insert(s1, 3, "abc")) は012abc345 を印字する。 

91. 文字列 s1 中に現れる文字列 s2 を文字列 s3 で置き換えるchar* str_subst(char* s1, char* s2, char* s3). 戻り値は置き換え後の文字列（ポインタ）。 s2 と s3 は同じ長さとか言ってないからね。その辺、注意。 s1 は十分な長さがあると仮定してよい。s1 を書き換えないバージョンにも挑戦しよう。 

92. 文字列 s を全て大文字にして返す char *toUpper(char* s).printf("%s\n", toUpper("I am small letters, ain't I?")) はI AM SMALL LETTERS, AIN'T I? を印字する。 関数内で引数を malloc( ) した領域にコピーし、その領域に大文字文字列作って、領域の先頭アドレスを返そう。 

93. [マイナス追加] 文字列 s1 を整数に変換して返す関数 int str_to_int(char* s1).str_to_int("314")の戻り値は 314 になる。 文字列の先頭がマイナスだったら負の数を返せるように。atoi( ) 使わずに行ってみよう。 

94. 文字列 *s を逆にした文字列を返す関数 char* str_reverse(char* s).printf("%s\n", str_reverse("abcdef")) がプリントするのは"fedcba\n". 関数内部で malloc( ) した領域に s を逆にした文字列を作り、それを返すようにする。 

95. 文字列 *s1 が日本語文字列の場合、s1 を逆順にした文字列を返す関数char *jstr_reverse(char* s1)).printf("%s\n", jstr_reverse("おはようございます。")) がプリントするのは"。すまいざごうよはお\n" 

96. 左右どちらから読んでも同じ値になる数を回文数という。2桁の数の積で表される回文数のうち、最大のものは 9009 = 91 × 99 である。3桁の数の積で表される回文数の最大値を求めよ。 

97. [問題変更]「スタック」をプログラムしてください。参考 ⇒ https://ja.wikipedia.org/wiki/スタック
スタックに整数 x を積む st_push(int x), スタックからデータを取り出す int st_pop(void), スタックの先頭要素を印字する void st_print(void) の三つの関数があればいいかな。
void st_print_all(void) もあると便利か。どんなことをする関数か、想像すること。
スタックのボトムを |、先頭を >で表すとして（hkimura 発案）、

最初の状態 |>
st_push(3)後の状態 |3>
その後 st_push(4)すると | 3, 4>
その後 st_push(10)すると |3,4,10>
ここで st_pop( ) すると10が返って、スタックは |3,4> となる。 st_print( ) は 4 を印字する。 

98. [問題変更] 「逆ポーランド記法計算機」をプログラムせよ。
逆ポーランド記法とは、1 + 2 を 1 2 + のように、演算子を被演算子の後におく式の書き方です。
10 + 200 + 3000 は 10 200 + 3000 +
(12 + 34) * (56 - 78) は 12 34 + 56 78 - * となる。カッコ( ) の使用は考えない。
10 200 + 3000 + の答えは 3210、12 34 + 56 78 - *　の答えは -1012 です。(updated 2021-12-30) 

99. 4/(1+x2) を x について 0 から 1 まで積分すると pi に近い数になる。これをスマートにプログラムしてください。可能であれば被積分関数を引数で取るような関数として。 

100. [extra] pretty_print コマンドを作ってください。pretty_print は C のソースファイルを入力とし、 それを R99 のコーディングスタイルに沿って整形し、出力します。 

101. [extra, 出題忘れ] 整数 n を文字列に変換して返す関数 char * int_to_str(int n). 

102. [extra] R99 の回答を文字列 s として引数に取り、R99 のスペースルールに抵触する箇所がなければ真、 抵触する場所が1ヶ所でもあれば偽を返す関数 is_space_ok(char *s). 

103. [extra] R99 の回答を文字列 s として引数に取り、R99 のインデントルールに抵触する箇所がなければ真、 抵触する場所が1ヶ所でもあれば偽を返す関数 is_indent_ok(char *s). 

104. [extra] 2095632000 の約数の和をできるだけ短い時間で求めてください。答えは 9904265280 になるはずです。 単純に割り切る数をループで足していったら、replit で 26 秒かかりました。

> time ./main
9904265280

real    0m25.741s
user    0m12.788s
sys 0m0.050s
105. [extra] scanf( ) をシミュレートする関数 int my_scanf(int *).

  int x;
  if (my_scanf(&x)==1) {  // この ==1 は真偽ではなく、正しく一個読んだだよ。
    printf("x=%i\n", x);
  }
のように使い、キーボードから打った整数を x にセットし、正しく読めたら１を返す。 scanf( ) を関数定義で使うのは禁止。 
106. [extra] scanf( ) をシミュレートする関数(続き）

  int x, y;
  if (my_scanf(&x, &y)==2) {
    printf("x=%i, y=%i\n", x, y);
  }
のように使い、キーボードから打った整数 を x , y にセットし、正しく読み込めた整数の数を返す。 scanf( ) のように、引数の数が不定の関数はどうプログラムするのかを調べ、 my_scanf( ) が３つ、４つ、、、の引数を取れるようにしなさい （ムズ。hkimura は調査なしに手ぶらではこの106番の後半、できない。C 以外、LISP/Clojure では楽勝。) 
107. [extra] リンクリストでスタックを作ってください。make_stack( ), push( ), pop( ), print( ) が 1 セットだよ。 

108. [extra] math ライブラリを 使わずに、double my_sqrt(double x) を定義せよ。 定義した my_sqrt( ) を使って、1 から 1,000,000 までのルートの和を求めよ。 正解は 6.6666716645882210835597876679519*10^8 です。 hkimura の LISP プログラムでは、697 msecs 使って、 6.666671664592026*10^8 と出した。計算誤差は -0.00038 でした。 hkimura を超える速度、精度を求む。 

109. [extra, recursive functions] 1,5,10,50,100円玉で n 円をくずす組み合わせを求めてください。int count_changes(int n). 

999. [extra] 自分のコンピュータ言語を作ってください。 