defmodule AsyncDataFetch do
  def fetch_user_info(uid) do
    Process.sleep(100) # 0.1秒
    %{user_id: uid, name: "John Doe"}
  end

  # ユーザの投稿を取得する模擬関数
  def fetch_posts(uid) do
    Process.sleep(300) # 0.3秒
    [%{id: uid, title: "Elixir is fun!"}]
  end

  # ユーザのコメントを取得する模擬関数
  def fetch_comments(uid) do
    Process.sleep(150) #0.15秒
    [%{id: uid, content: "Great Post!"}]
  end

  # 全てのデータを非同期的に取得し、結果を集約する関数
  def fetch_all_data(user_id) do
    tasks = [
      Task.async(fn -> fetch_user_info(user_id) end),
      Task.async(fn -> fetch_posts(user_id) end),
      Task.async(fn -> fetch_comments(user_id) end)
    ]

    # 全てのタスクの結果を待つ
    results = Enum.map(tasks, &Task.await(&1, 5000))
    IO.inspect(results)
  end
end

AsyncDataFetch.fetch_all_data(1)
