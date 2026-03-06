int raceCar(int target ){
    // add your code here
    queue<tuple<int,int,int>>q;
    set<pair<int,int>>visited;

    q.push({0,1,0});
    visited.insert({0,1});

    while(!q.empty()){
        auto [pos,speed,steps]=q.front();
        q.pop();

        if(pos==target) return steps;

        int newPos=pos+speed;
        int newSpeed=speed*2;

        if(abs(newPos)<=2*target && !visited.count({newPos,newSpeed})){
            visited.insert({newPos,newSpeed});
            q.push({newPos,newSpeed,steps+1});
        }

        int revSpeed=speed>0?-1:1;
        if(!visited.count({pos,revSpeed})){
            visited.insert({pos,revSpeed});
            q.push({pos,revSpeed,steps+1});
        }
    }
    return -1;
}