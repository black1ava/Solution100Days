class node{
  constructor(key){
    this.data = key;
    this.left = null;
    this.right = null;
  }
}

let match = (root, key) => {
  if(root === null){
    return true;
  }
  
  return root.data === key && match(root.left, key) && match(root.right, key);
};

let matching = root => {
  let key = root.data;
  
  return match(root, key);
};

let checking = (root, branch) => {
  if(root === null){
    return;
  }
  
  if(matching(root)){
    branch.count++;
  }
  
  checking(root.left, branch);
  checking(root.right, branch);
};

let start = root => {
  let branch = { count : 0};
  count = checking(root, branch);
  return branch.count;
};

let head = null;

head = new node(1);
head.left = new node(1);
head.right = new node(0);
head.left.left = new node(1);
head.left.right = new node(1);
head.right.left = new node(0);
head.right.right = new node(1);

console.log(start(head));