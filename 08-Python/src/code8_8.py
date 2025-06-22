import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

#NumPy で0以上1未満の乱数を100個生成
rng = np.random.default_rng()
data = rng.random(100)

# padans の DataFrame (列見出し 'Value' の100行1列) に変換
df = pd.DataFrame({'Value': data})

# pandas で移動平均(ウインドウ幅5) を計算して、列として追加
df['Moving Average'] = df['Value'].rolling(window=5).mean()

# Matplotlib で元データと移動平均をプロット
plt.figure(figsize=(10, 6))
plt.plot(df['Value'], label='Original Data')
plt.plot(df['Moving Average'], label='Moving Average', color='red')
plt.title('Original Data and Moging Average')
plt.xlabel('Sample Number')
plt.ylabel('Value')
plt.legend()
plt.grid(True)
plt.savefig('pic/8-moving_average.png')
plt.show()
