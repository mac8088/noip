
### 深度优先搜索的基本模型

	void dfs(int step) {
		判断边界
		尝试每一种可能 for(i=1; i<=n; i++) {
			继续下一步 dfs(step+1);
		}
		返回
	}

