<h2><a href="https://leetcode.com/problems/split-bst/">776. Split BST</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary search tree (BST) and an integer <code style="user-select: auto;">target</code>, split the tree into two subtrees where one subtree has nodes that are all smaller or equal to the target value, while the other subtree has all nodes that are greater than the target value. It Is not necessarily the case that the tree contains a node with the value <code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">Additionally, most of the structure of the original tree should remain. Formally, for any child <code style="user-select: auto;">c</code> with parent <code style="user-select: auto;">p</code> in the original tree, if they are both in the same subtree after the split, then node <code style="user-select: auto;">c</code> should still have the parent <code style="user-select: auto;">p</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an array of the two roots of the two subtrees</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/13/split-tree.jpg" style="width: 600px; height: 193px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [4,2,6,1,3,5,7], target = 2
<strong style="user-select: auto;">Output:</strong> [[2,1],[4,3,6,null,null,5,7]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1], target = 1
<strong style="user-select: auto;">Output:</strong> [[1],[]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 50]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= Node.val, target &lt;= 1000</code></li>
</ul>
</div>