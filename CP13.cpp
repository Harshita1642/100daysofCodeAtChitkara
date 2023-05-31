// Input
// The first line contains a single number T, the number of scenarios. Each scenario is described by four lines. Each line starts with a team name followed by the number of goals this team scored in its corresponding match. (Barcelona plays Eibar and Real Madrid plays Malaga). The names are given in any arbitrary order within a scenario.

// // Output
// // For each scenario, output a single line showing the title winner in case this scenario happens. It should
//be either "RealMadrid" or "Barcelona".
// You will be given multiple scenarios for these two games, where in each one you will be given the number of 
//goals each team scored in their respective match. A team wins a match if it scores more than the opponent. 
//In case they score the same number of goals, it's a draw. Otherwise, the team loses the game. You are asked to tell 
//the winner of the La Liga title in each scenario.

#include <iostream>
using namespace std;
int whowin(){
    string s;
    int b_score,e_score,m_score,rm_score;
    for(int i=0 ; i<4 ; i++){
        cin>>s;
        if(s=="RealMadrid"){
            cin>>rm_score;
        }else if(s=="Barcelona"){
            cin>>b_score;
        }else if(s=="Eibar"){
            cin>>e_score;
        }else if(s=="Malaga"){
            cin>>m_score;
        }
    }
    if(rm_score<m_score && b_score>e_score){
        return 1;
    }else{
        return 0;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    if(whowin()){
	        cout<<"Barcelona"<<endl;
	    }else{
	        cout<<"RealMadrid"<<endl;
	    }
	    t--;
	}
	return 0;
}
