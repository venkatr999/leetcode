class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
     int  n=h.size();
        stack<int> s;
	int area = 0; 
	int tp; 
	int curr_area; 
	int i = 0;
	while (i < n)
	{
		if (s.empty() || h[s.top()] <= h[i])
			s.push(i++);
		else
		{
			tp = s.top(); 
			s.pop(); 
			if(s.empty())
			curr_area= h[tp] * i;
			else
			curr_area= h[tp] * (i - s.top() - 1);
				if (area < curr_area)
			area = curr_area;
		}
	}
	while (s.empty() == false)
	{
		tp = s.top();
		s.pop();
		curr_area = h[tp] * (s.empty() ? i :
								i - s.top() - 1);

		if (area < curr_area)
			area = curr_area;
	}

	return area;
    }
};