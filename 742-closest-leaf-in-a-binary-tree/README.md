<h2><a href="https://leetcode.com/problems/closest-leaf-in-a-binary-tree/">742. Closest Leaf in a Binary Tree</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary tree where every node has <strong style="user-select: auto;">a unique value</strong> and a target integer <code style="user-select: auto;">k</code>, return <em style="user-select: auto;">the value of the <strong style="user-select: auto;">nearest leaf node</strong> to the target </em><code style="user-select: auto;">k</code><em style="user-select: auto;"> in the tree</em>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Nearest to a leaf</strong> means the least number of edges traveled on the binary tree to reach any leaf of the tree. Also, a node is called a leaf if it has no children.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/13/closest1-tree.jpg" style="width: 224px; height: 145px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,3,2], k = 1
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Either 2 or 3 is the nearest leaf node to the target of 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/13/closest2-tree.jpg" style="width: 64px; height: 65px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1], k = 1
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The nearest leaf node is the root node itself.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/13/closest3-tree.jpg" style="width: 464px; height: 384px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,2,3,4,null,null,null,5,null,6], k = 2
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The leaf node with value 3 (and not the leaf node with value 6) is nearest to the node with value 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 1000]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= Node.val &lt;= 1000</code></li>
	<li style="user-select: auto;">All the values of the tree are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;">There exist some node in the tree where <code style="user-select: auto;">Node.val == k</code>.</li>
</ul>
</div>