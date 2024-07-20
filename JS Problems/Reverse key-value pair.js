
const user = {
    name: "Rahul",
    email: "luh"
}

function switchKeyValue(obj){
    return Object.fromEntries(Object.entries(obj).map(([key, value]) => [value, key]))
}

console.log(switchKeyValue(user))