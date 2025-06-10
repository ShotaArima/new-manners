defmodule MonitorExample do
  def start do
    # spawn_monitor を使用して子プロセスを生成し、そのプロセスを監視する
    {pid, _ref} = spawn_monitor(fn -> child_process() end)

    # 子プロセスのPIDと監視参照を表示
    IO.puts("Spawned and monitored process: #{inspect(pid)}")

    # 子プロセスの終了通知を待機
    receive do
      {:DOWN, _ref, :process, pid, reason} ->
        IO.puts("#{inspect(pid)}exited with reason #{inspect(reason)}")
    end
  end

  defp child_process do
    Process.sleep(200)
    IO.puts("Child process is exiting now.")
    exit(:normal)
  end
end

MonitorExample.start
