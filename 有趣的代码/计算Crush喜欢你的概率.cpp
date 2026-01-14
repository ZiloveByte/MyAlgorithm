#include <bits/stdc++.h>
using namespace std;

/*
假设你是一个不算太差的一般人，crush喜欢你的概率是a，如果ta喜欢你，第一次能约出来的概率是b，如果ta不喜欢你，第一次能约出来的概率是c
问：
1.如果第一次能约出来，ta有多大可能喜欢你呢？
2.如果第一次约会后crush喜欢你，则第二次能约出来的概率为d，如果ta不喜欢你，则第二次能约出来的概率为e，如果crush连着两次都能约出来，ta有多大可能喜欢你呢？
*/

//输入格式:
//输入数据包括5个浮点数
//a b c d e

//输出格式:
//输出两行,每行一个百分数.
//第一行表示如果第一次能约出来，ta喜欢你的概率.
//第二行如果第一次约会后crush喜欢你，则第二次能约出来的概率为d，如果ta不喜欢你，则第二次能约出来的概率为e，如果crush连着两次都能约出来，ta喜欢你的概率.

// 第一次约会
double firstDate(double Like,double AcIfLike,double AcIfNoLike){
    double NoLike=1-Like;
    double Ac=Like*AcIfLike+NoLike*AcIfNoLike;
    double LikeAc=(Like*AcIfLike)/Ac;
    return LikeAc;
}

// 连续两次约会
double secondDate(double Like,double AcIfLike1,double AcIfNoLike1,double AcIfLike2,double AcIfNoLike2){
    double NoLike=1-Like;
    double AcIfLikeA=AcIfLike1*AcIfLike2;
    double AcIfNoLikeA=AcIfNoLike1*AcIfNoLike2;
    double AcA=Like*AcIfLikeA+NoLike*AcIfNoLikeA;
    double LikeAcA=(Like*AcIfLikeA)/AcA;
    return LikeAcA;
}

int main(){
    double a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    double firstProb=firstDate(a,b,c);
    double secondProb=secondDate(a,b,c,d,e);
    cout<<fixed<<setprecision(2)<<firstProb*100<<"%"<<"\n"<<secondProb*100<<"%"<<endl;
    return 0;
}