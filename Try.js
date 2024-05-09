
class Person{
    constructor(name, age){
        this.name = name
        this.age = age
    }
}
var obj = new Person("rah", 25)
console.log(obj)

//curyying

const func = (a,b,c) => a+b+c
console.log(func(1,2,3))

const curryFunc = (a) => (b) => (c) => a+b+c
console.log(curryFunc(1)(2)(3))