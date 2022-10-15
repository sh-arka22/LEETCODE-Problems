<h2><a href="https://leetcode.com/problems/range-addition/">370. Range Addition</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer <code style="user-select: auto;">length</code> and an array <code style="user-select: auto;">updates</code> where <code style="user-select: auto;">updates[i] = [startIdx<sub style="user-select: auto;">i</sub>, endIdx<sub style="user-select: auto;">i</sub>, inc<sub style="user-select: auto;">i</sub>]</code>.</p>

<p style="user-select: auto;">You have an array <code style="user-select: auto;">arr</code> of length <code style="user-select: auto;">length</code> with all zeros, and you have some operation to apply on <code style="user-select: auto;">arr</code>. In the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> operation, you should increment all the elements <code style="user-select: auto;">arr[startIdx<sub style="user-select: auto;">i</sub>], arr[startIdx<sub style="user-select: auto;">i</sub> + 1], ..., arr[endIdx<sub style="user-select: auto;">i</sub>]</code> by <code style="user-select: auto;">inc<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">arr</code> <em style="user-select: auto;">after applying all the</em> <code style="user-select: auto;">updates</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/27/rangeadd-grid.jpg" style="width: 413px; height: 573px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> length = 5, updates = [[1,3,2],[2,4,3],[0,2,-2]]
<strong style="user-select: auto;">Output:</strong> [-2,0,3,5,3]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> length = 10, updates = [[2,4,6],[5,6,8],[1,9,-4]]
<strong style="user-select: auto;">Output:</strong> [0,-4,2,2,2,4,4,-4,-4,-4]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= updates.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= startIdx<sub style="user-select: auto;">i</sub> &lt;= endIdx<sub style="user-select: auto;">i</sub> &lt; length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= inc<sub style="user-select: auto;">i</sub> &lt;= 1000</code></li>
</ul>
</div>