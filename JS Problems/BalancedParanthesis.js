
const str = '(a + b) *  (c - d)';

function checkBalance(str){
    let arr = str.split('');
    let left=0, right=0;
    for(let i=0; i<arr.length; i++){
        if(arr[i] === ')'){
            left +=1
        }else if(arr[i] === '('){
            right +=1
        }
    }
    if(left === right){
        return 'balanced';
    }
    return 'Not balanced';
}

console.log(checkBalance(str))