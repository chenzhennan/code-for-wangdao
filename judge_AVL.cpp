void judge_AVL(BiTree p, int &balance, int &h){
    int lh, rh;//左右子树的高度
    int lbalance, rbalance;//左右子树平衡标志
    if(p==NULL)
    {
        h=0;
        balance=1;
    }
    else if(p->Lchild==NULL&&p->Rchile==NULL){
        h=1;
        balance=1;
    }
    else{
        judge_AVL(p->Lchild, lbalance, lh);
        judge_AVL(p->Rchile, rbalance, rh);
        h=(lh>rh)?lh:rh+1;
        if(lh-rh<2&&lh-rh>-2){
            balance=lbalance&rbalance;
        }
        else{
            balance=0;
        }
    }
}