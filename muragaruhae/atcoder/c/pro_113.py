# 要復習
N , M = map(int, input().split())
field = []
for i in range(M):
    p,y = map(int, input().split())
    field.append((y, p, i))
field.sort()
print(field)
#入力と番号付け
sum = [0 for i in range(N)]
field2 = []
#field2のリスト作成
for i in range(M):
	sum[field[i][1]-1] += 1
#sumで県内の市の個数を計算
	field2.append((field[i][2], field[i][1], sum[field[i][1]-1]))
field2.sort()
print(field2)
#field2のリストに（番号、県の番号、県内の市の個数）の順にする
for i in range(M):
	print(str(field2[i][1]).zfill(6)+str(field2[i][2]).zfill(6))
#zfullを用いて出力
