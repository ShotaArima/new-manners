defmodule Process1 do
  def main do
    # プロセスの起動
    receiver_pid = spawn(fn ->
      receive do # メッセージを受信したあとの処理
        {:ok, message} -> IO.puts("Recived message: #{message}")
      end
    end)

    # メッセージを送信
    send(receiver_pid, {:ok, "Hello from sender"})
  end
end

Process1.main
