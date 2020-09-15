package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func main() {
	var n, m int
	n, m = nextInt(), nextInt()
	Ac, Wa := make(map[int]bool, n+1), make([]int, n+1)
	Acount, Wcount := 0, 0
	for i := 0; i < m; i++ {
		p, s := nextInt(), nextStr()
		if Ac[p] {
			continue
		}
		if s == "AC" {
			Ac[p] = true
			continue
		}
		Wa[p]++
	}
	for i := 1; i <= n; i++ {
		if Ac[i] {
			Acount++
			Wcount += Wa[i]
		}
	}
	fmt.Println(Acount, Wcount)
}

func init() {
	const max = 1024
	var buf = make([]byte, max)
	sc.Buffer(buf, max)
	sc.Split(bufio.ScanWords)
	return
}

func nextInt() int {
	sc.Scan()
	i, e := strconv.Atoi(sc.Text())
	if e != nil {
		panic(e)
	}
	return i
}
func nextStr() string {
	sc.Scan()
	return sc.Text()
}
