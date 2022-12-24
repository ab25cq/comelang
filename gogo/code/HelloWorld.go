package main

func fun() int {
    return 1
}

func fun2() bool {
    return true
}

func fun3(a bool) int {
    var b int = 123
    b = 234
    
    var c int
    c = 345
    return b
}

func main() int {
    fun()
    fun2()
    
    var a bool = true
    
    if a {
        var b int = 123
        var c int = 123
    }
    else if a {
        var b int = 1
        var c int = 1
    }
    else {
        var b int = 234
        var c int = 234
    }
    
    return 0
}
