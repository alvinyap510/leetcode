var hasCycle = function(head) {
    let arr = [];
    let ptr = head;
    
    while (ptr) {
        if (arr.indexOf(ptr) == -1) {
            arr.push(ptr);
        } else {
            return true;
        }
        ptr = ptr.next;
    }
    return false;  
};