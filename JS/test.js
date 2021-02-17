class Node{
  constructor(data){
    this.data = data;
    this.left = this.right = null;
  }
}

function newNode(data){
  const temp = new Node(data);
  return temp;
}

function addNode(head, data){
  if(head === null){
    return newNode(data);
  }

  if(data < head.data){
    head.left = addNode(head.left, data);
  }else{
    head.right = addNode(head.right, data);
  }

  return head;
}

function showNode(head){
  if(head !== null){
    showNode(head.left);
    console.log(head.data);
    showNode(head.right);
  }
}

const array = [1, 3, 5, 2, 4];

let head = null;


for(let element of array){
  head = addNode(head, element);
}

showNode(head);