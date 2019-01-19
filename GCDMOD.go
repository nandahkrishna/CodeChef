package main
import "fmt"
import "math/big"
func main(){
	var T int
	a := new(big.Int)
	b := new(big.Int)
	n := new(big.Int)
	m := new(big.Int)
	g := new(big.Int)
	s := new(big.Int)
	d := new(big.Int)
	e1 := new(big.Int)
	e2 := new(big.Int)
	t := new(big.Int)
	t1 := new(big.Int)
	t.SetString("0",10)
	t1.SetString("1",10)
	m.SetString("1000000007",10)
	fmt.Scan(&T)
	for loop:=0; loop<T; loop++ {
	    fmt.Scan(a)
	    fmt.Scan(b)
	    fmt.Scan(n)
	    d.Sub(a,b)
	    if d.Cmp(t)==0 {
	        e1.Exp(a,n,m)
	        e2.Exp(b,n,m)
	        s.Add(e1,e2)
	        fmt.Println((s.Mod(s,m)).String())
	    } else if d.Cmp(t1)==0 {
	        fmt.Println("1")
	    } else {
	        e1.Exp(a,n,d)
	        e2.Exp(b,n,d)
	        s.Add(e1,e2)
	        if s.Cmp(t)==0 {
	            d.Mod(d,m)
	            fmt.Println(d)
	        } else {
	            g.GCD(nil,nil,s,d)
	            g.Mod(g,m)
	            fmt.Println(g.String())
	        }
	    }
	}
}
