/*All men are created equal, some work harder in preseason */
/* Property Of Piyush Gandhi */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,j,n) for(ll i=j;i<=n;++i)

#define pi 3.141592

struct vect2D {  // of course you could use vectors if you prefer
    double x;
    double y;
    double operator*(vect2D& e) { return x*e.x + y*e.y; }  // scalar product of 2 vectors
    double dist() { return sqrt(x*x + y*y); }  // length
};

double prd_vect(vect2D& u, vect2D& v)
{
    return u.x*v.y - u.y*v.x;
}
double angle_rad(vect2D& u, vect2D& v)
{
   return (prd_vect(u,v)<0 ? -1:1) * acos(u*v / (u.dist()*v.dist()));
}
double angle_deg(vect2D& u, vect2D& v)
{
   return angle_rad(u,v) / pi * 180 ;
}

int main()
{
    ios::sync_with_stdio(false);
    freopen("progress_pie.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int T;
    cin>>T;
   // pair<double,double> origin;
    //origin.first = origin.second = 0.0;
    rep(i,1,T)
    {
        double filled;
        cin>>filled;
        double x,y;
        cin>>x>>y;
        x-=50.0;
        y-=50.0;
        double angle_filled = (filled * 360.0)/100.0;
        if(sqrt(x*x + y*y)>50.0 || filled == 0)
        {
            cout<<"Case #"<<i<<": "<<"white"<<endl;
            continue;
        }
        //double dot_product = ((origin.first*x) +(origin.second*y) );
        vect2D point = {x,y};
        vect2D top = {0.0,50.0};
        double lies = angle_deg(point,top);
      //  cout<<angle_filled<<" "<<lies<<endl;
        if(lies <= angle_filled)
        {
            cout<<"Case #"<<i<<": "<<"black"<<endl;
        }
        else
        {
            cout<<"Case #"<<i<<": "<<"white"<<endl;
        }
    }
    return 0;
}
