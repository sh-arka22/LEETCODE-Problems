<h2><a href="https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/">2415. Reverse Odd Levels of Binary Tree</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a <strong style="user-select: auto;">perfect</strong> binary tree, reverse the node values at each <strong style="user-select: auto;">odd</strong> level of the tree.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, suppose the node values at level 3 are <code style="user-select: auto;">[2,1,3,4,7,11,29,18]</code>, then it should become <code style="user-select: auto;">[18,29,11,7,4,3,1,2]</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the root of the reversed tree</em>.</p>

<p style="user-select: auto;">A binary tree is <strong style="user-select: auto;">perfect</strong> if all parent nodes have two children and all leaves are on the same level.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">level</strong> of a node is the number of edges along the path between it and the root node.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/07/28/first_case1.png" style="width: 626px; height: 191px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [2,3,5,8,13,21,34]
<strong style="user-select: auto;">Output:</strong> [2,5,3,8,13,21,34]
<strong style="user-select: auto;">Explanation:</strong> 
The tree has only one odd level.
The nodes at level 1 are 3, 5 respectively, which are reversed and become 5, 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/07/28/second_case3.png" style="width: 591px; height: 111px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [7,13,11]
<strong style="user-select: auto;">Output:</strong> [7,11,13]
<strong style="user-select: auto;">Explanation:</strong> 
The nodes at level 1 are 13, 11, which are reversed and become 11, 13.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [0,1,2,0,0,0,0,1,1,1,1,2,2,2,2]
<strong style="user-select: auto;">Output:</strong> [0,2,1,0,0,0,0,2,2,2,2,1,1,1,1]
<strong style="user-select: auto;">Explanation:</strong> 
The odd levels have non-zero values.
The nodes at level 1 were 1, 2, and are 2, 1 after the reversal.
The nodes at level 3 were 1, 1, 1, 1, 2, 2, 2, 2, and are 2, 2, 2, 2, 1, 1, 1, 1 after the reversal.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 2<sup style="user-select: auto;">14</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= Node.val &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">root</code> is a <strong style="user-select: auto;">perfect</strong> binary tree.</li>
</ul>
</div>