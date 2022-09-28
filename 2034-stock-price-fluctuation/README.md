<h2><a href="https://leetcode.com/problems/stock-price-fluctuation/">2034. Stock Price Fluctuation </a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a stream of <strong style="user-select: auto;">records</strong> about a particular stock. Each record contains a <strong style="user-select: auto;">timestamp</strong> and the corresponding <strong style="user-select: auto;">price</strong> of the stock at that timestamp.</p>

<p style="user-select: auto;">Unfortunately due to the volatile nature of the stock market, the records do not come in order. Even worse, some records may be incorrect. Another record with the same timestamp may appear later in the stream <strong style="user-select: auto;">correcting</strong> the price of the previous wrong record.</p>

<p style="user-select: auto;">Design an algorithm that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><strong style="user-select: auto;">Updates</strong> the price of the stock at a particular timestamp, <strong style="user-select: auto;">correcting</strong> the price from any previous records at the timestamp.</li>
	<li style="user-select: auto;">Finds the <strong style="user-select: auto;">latest price</strong> of the stock based on the current records. The <strong style="user-select: auto;">latest price</strong> is the price at the latest timestamp recorded.</li>
	<li style="user-select: auto;">Finds the <strong style="user-select: auto;">maximum price</strong> the stock has been based on the current records.</li>
	<li style="user-select: auto;">Finds the <strong style="user-select: auto;">minimum price</strong> the stock has been based on the current records.</li>
</ul>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">StockPrice</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">StockPrice()</code> Initializes the object with no price records.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void update(int timestamp, int price)</code> Updates the <code style="user-select: auto;">price</code> of the stock at the given <code style="user-select: auto;">timestamp</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int current()</code> Returns the <strong style="user-select: auto;">latest price</strong> of the stock.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int maximum()</code> Returns the <strong style="user-select: auto;">maximum price</strong> of the stock.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int minimum()</code> Returns the <strong style="user-select: auto;">minimum price</strong> of the stock.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["StockPrice", "update", "update", "current", "maximum", "update", "maximum", "update", "minimum"]
[[], [1, 10], [2, 5], [], [], [1, 3], [], [4, 2], []]
<strong style="user-select: auto;">Output</strong>
[null, null, null, 5, 10, null, 5, null, 2]

<strong style="user-select: auto;">Explanation</strong>
StockPrice stockPrice = new StockPrice();
stockPrice.update(1, 10); // Timestamps are [1] with corresponding prices [10].
stockPrice.update(2, 5);  // Timestamps are [1,2] with corresponding prices [10,5].
stockPrice.current();     // return 5, the latest timestamp is 2 with the price being 5.
stockPrice.maximum();     // return 10, the maximum price is 10 at timestamp 1.
stockPrice.update(1, 3);  // The previous timestamp 1 had the wrong price, so it is updated to 3.
                          // Timestamps are [1,2] with corresponding prices [3,5].
stockPrice.maximum();     // return 5, the maximum price is 5 after the correction.
stockPrice.update(4, 2);  // Timestamps are [1,2,4] with corresponding prices [3,5,2].
stockPrice.minimum();     // return 2, the minimum price is 2 at timestamp 4.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= timestamp, price &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">10<sup style="user-select: auto;">5</sup></code> calls will be made <strong style="user-select: auto;">in total</strong> to <code style="user-select: auto;">update</code>, <code style="user-select: auto;">current</code>, <code style="user-select: auto;">maximum</code>, and <code style="user-select: auto;">minimum</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">current</code>, <code style="user-select: auto;">maximum</code>, and <code style="user-select: auto;">minimum</code> will be called <strong style="user-select: auto;">only after</strong> <code style="user-select: auto;">update</code> has been called <strong style="user-select: auto;">at least once</strong>.</li>
</ul>
</div>