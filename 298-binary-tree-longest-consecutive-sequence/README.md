<h2><a href="https://leetcode.com/problems/binary-tree-longest-consecutive-sequence/">298. Binary Tree Longest Consecutive Sequence</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary tree, return <em style="user-select: auto;">the length of the longest <strong style="user-select: auto;">consecutive sequence path</strong></em>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">consecutive sequence path</strong> is a path where the values <strong style="user-select: auto;">increase by one</strong> along the path.</p>

<p style="user-select: auto;">Note that the path can start <strong style="user-select: auto;">at any node</strong> in the tree, and you cannot go from a node to its parent in the path.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/14/consec1-1-tree.jpg" style="width: 306px; height: 400px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,null,3,2,4,null,null,null,5]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Longest consecutive sequence path is 3-4-5, so return 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/14/consec1-2-tree.jpg" style="width: 249px; height: 400px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [2,null,3,2,null,1]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Longest consecutive sequence path is 2-3, not 3-2-1, so return 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 3 * 10<sup style="user-select: auto;">4</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-3 * 10<sup style="user-select: auto;">4</sup> &lt;= Node.val &lt;= 3 * 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>