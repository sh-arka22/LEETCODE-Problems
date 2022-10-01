<h2><a href="https://leetcode.com/problems/detect-squares/">2013. Detect Squares</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a stream of points on the X-Y plane. Design an algorithm that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><strong style="user-select: auto;">Adds</strong> new points from the stream into a data structure. <strong style="user-select: auto;">Duplicate</strong> points are allowed and should be treated as different points.</li>
	<li style="user-select: auto;">Given a query point, <strong style="user-select: auto;">counts</strong> the number of ways to choose three points from the data structure such that the three points and the query point form an <strong style="user-select: auto;">axis-aligned square</strong> with <strong style="user-select: auto;">positive area</strong>.</li>
</ul>

<p style="user-select: auto;">An <strong style="user-select: auto;">axis-aligned square</strong> is a square whose edges are all the same length and are either parallel or perpendicular to the x-axis and y-axis.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">DetectSquares</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">DetectSquares()</code> Initializes the object with an empty data structure.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void add(int[] point)</code> Adds a new point <code style="user-select: auto;">point = [x, y]</code> to the data structure.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int count(int[] point)</code> Counts the number of ways to form <strong style="user-select: auto;">axis-aligned squares</strong> with point <code style="user-select: auto;">point = [x, y]</code> as described above.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/09/01/image.png" style="width: 869px; height: 504px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["DetectSquares", "add", "add", "add", "count", "count", "add", "count"]
[[], [[3, 10]], [[11, 2]], [[3, 2]], [[11, 10]], [[14, 8]], [[11, 2]], [[11, 10]]]
<strong style="user-select: auto;">Output</strong>
[null, null, null, null, 1, 0, null, 2]

<strong style="user-select: auto;">Explanation</strong>
DetectSquares detectSquares = new DetectSquares();
detectSquares.add([3, 10]);
detectSquares.add([11, 2]);
detectSquares.add([3, 2]);
detectSquares.count([11, 10]); // return 1. You can choose:
                               //   - The first, second, and third points
detectSquares.count([14, 8]);  // return 0. The query point cannot form a square with any points in the data structure.
detectSquares.add([11, 2]);    // Adding duplicate points is allowed.
detectSquares.count([11, 10]); // return 2. You can choose:
                               //   - The first, second, and third points
                               //   - The first, third, and fourth points
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">point.length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= x, y &lt;= 1000</code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">3000</code> calls <strong style="user-select: auto;">in total</strong> will be made to <code style="user-select: auto;">add</code> and <code style="user-select: auto;">count</code>.</li>
</ul>
</div>