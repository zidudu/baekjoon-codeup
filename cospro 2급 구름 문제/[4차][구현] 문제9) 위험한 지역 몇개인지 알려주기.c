int solution(int height[][4], int height_len) {
    int count = 0;
		int dy[] = {-1,1,0,0};
		int dx[] = {0,0,-1,1};
  	for(int i = 0; i<height_len; i++){
			for(int j=0;j<height_len;j++){
				int is_danger = 1;
				
				//값 검사하기 위해 k 루프
				for(int k=0;k<4;k++){
					//값 검사
					if(i+dy[k] >=0 && i+ dy[k] <4 && j+ dx[k] >=0 && j+dx[k] <4){
						//값 비교
						if(height[i][j] > height[i+dy[k]][j+dx[k]]){
							is_danger = 0;
						}
					}
				}
			
				if(is_danger == 1) {count++;}
			}
		}	
    return count;
	}
